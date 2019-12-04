
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include <string.h>
#include <math.h>
#include "game.h"
#include <iostream>
#include <fstream>
#include <string>
#include "RGBpixmap.h"

using namespace std;
//Struct for the button
struct button
{
	int x; 
	int y; 
	int w;
	int h;
	int state;
	int highlighted;
    char* label;
};
//point class used to set the coordinates for an object
class Point2
{
public:
	float x, y;
	void set(float dx, float dy) { x = dx; y = dy; }
	void set(Point2& p) { x = p.x; y = p.y; }
	Point2(float xx, float yy) { x = xx; y = yy; }
	Point2() { x = y = 0; }
};

typedef struct button button;

//character string for the health bar
char health1[10] = "HEALTH";
char buffer[20];
char pause_text[10];
char escape[20]; 
char fin_name[30];
char turtle_file[20] = "turtle.txt";
char seaweed[20] = "seaweed.txt";
char start1[10] = "Start";
char exit1[10] = "Exit";
char resume1[10] = "Resume";
char back1[10] = "Back";
char continue_1[15] = "Continue";
char instructions1[15] = "Instructions";
char pause_instruction[30] = "Press P to pause";
const unsigned char start2[10] = "Start";

//buttons used in the game
button start = { -5.5, -2.5, 10, 3, 0, 0, start1 };
button instructions = { -5.5, -6.0, 10, 3, 0, 0, instructions1 };
button exit_1 = { -4.5, -7, 8, 2, 0, 0, exit1 };
button instructions_1 = { -4.5, -4, 8,2,0,0,instructions1 };
button resume_1 = { -4.5,-1,8,2,0,0, resume1 };
button back = { 5, -9, 2, 1,0 ,0, back1 };
button continue1 = { -2, -9, 5, 1,0 ,0, continue_1 };

//bool logic used to determine if a button should be highlighted or not
bool highlight = false;
//Variable determining if the mainscreen is active
bool mainscreen_active = true;
bool gamescreen_active = false; 
bool instructions_clicked = false;
bool instructions_screen_gameplay = false;
//Variables to see if the program has been started or paused
bool start_click = false;
bool paused = false;
bool plasticCollisionX = false;
bool plasticCollisionY = false;
bool algaeCollisionX = false;
bool algaeCollisionY = false;
bool popup_window_active = false; 
bool shark_enter = false; 
bool popupwindow5 = false;
bool endpop5 = false;
//Used for the positions of the turtle, pause, and background
Point2 pausedPos;
Point2 pausedScreenPos;
Point2 instructionScreenPos;
Point2 popupwindow1Pos;
Point2 popupwindow2Pos;
Point2 prevPos;
Point2 prevPos1;
Point2 prevPos2;
Point2 turtlePos;
Point2 turtleSiz;
Point2 seaweedPos1;
Point2 seaweedPos2;
Point2 plasticPos;
Point2 plasticSiz;
Point2 CP;
Point2 plastic;
Point2 sharkPos;

float num_fish;
float value = 0.0;
float a; 
float b; 
float c; 
float d; 
float e; 
float r =0.369; 
float g =0.9;
float color = 0.0;
//Used for the positions of the turtle, pause, and background
Point2 popupwindow3Pos;
Point2 popupwindow4Pos;
Point2 popupwindow5Pos;
//variable used to generate random values used by the wave drawn on the screen 
float xrand[9];
int time = 190;
float health = 3.0;

//Creating pixmap for the popupwindow images
//Creates 6 different pixmaps that can be used for 24 bit images
RGBpixmap pix[6];
//instructions character strings
extern char instructions2[80];
extern char instructions3[80];
extern char instructions4[80];
extern char instructions5[80];
extern char instructions6[80];
extern char instructions7[80];
extern char instructions8[80];

void moveTo(Point2 p)
{
	CP.set(p);
}

void lineTo(Point2 p)
{
	//glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2f(CP.x, CP.y);
	glVertex2f(p.x, p.y);
	glEnd();
	glFlush();
	CP.set(p);
}

//Draws the buttons on the main menu
void ButtonDraw(button* b)
{

	if (b)
	{
		/*
		 *	We will indicate that the mouse cursor is over the button by changing its
		 *	colour.
		 */
		if (b->highlighted)
			glColor3f(1.0f, 0.2f, 0.05f);
		else
			glColor3f(0.96f, 0.4f, 0.25f);

		/*
		 *	draw background for the button.
		 */
		glBegin(GL_QUADS);
		glVertex2i(b->x, b->y);
		glVertex2i(b->x, b->y + b->h);
		glVertex2i(b->x + b->w, b->y + b->h);
		glVertex2i(b->x + b->w, b->y);
		glEnd();

		/*
		 *	Draw an outline around the button with width 3
		 */
		glLineWidth(3);

		/*
		 *	The colours for the outline are reversed when the button.
		 */
		if (b->state)
			glColor3f(0.4f, 0.4f, 0.4f);
		else
			glColor3f(0.8f, 0.8f, 0.8f);

		glBegin(GL_LINE_STRIP);
		glVertex2i(b->x + b->w, b->y);
		glVertex2i(b->x, b->y);
		glVertex2i(b->x, b->y + b->h);
		glEnd();

		if (b->state)
			glColor3f(0.8f, 0.8f, 0.8f);
		else
			glColor3f(0.4f, 0.4f, 0.4f);

		glBegin(GL_LINE_STRIP);
		glVertex2i(b->x, b->y + b->h);
		glVertex2i(b->x + b->w, b->y + b->h);
		glVertex2i(b->x + b->w, b->y);
		glEnd();

		//glLineWidth(3);
		//glColor3f(0, 0, 1);
		//drawStrokeText(start1, -2.0, -1.0, 0, 80.0);
		//drawStrokeText(instructions1, -4.0, -5.0, 0, 80.0);
	}
}

void game_screen()
{
	gamescreen_active = true;

	if (time > 200 && popupwindow5 == false)
	{
		shark_enter = true;

		if (endpop5 == false)
		{
			color = color + 0.008;

			r = 0.369 - color; 
			g = 0.9 - color;
		}
		 
		else if (endpop5 == true)
		{
			color = color -0.01 ;

			 r = 0.369 - color; 
			 g = 0.9 - color;

			if (r > 0.369)
			{
				r = 0.369;
			}

			else if( r < 0.369)
			{
				r = 0.369 - color;
			}

			if (g > 0.9)
			{
				g = 0.9;
			}

			else if (g < 0.9)
			{
				g = 0.9 - color;
			}
		}
		sharkTimer(0);
		printf("%f\n", color);
	}

	if (sharkPos.x == -8.0)
	{
		popupwindow5 = true;
		shark_enter = false;
	}

	glClearColor(r, g, 1.0, 0.3);
	//glClearColor(0.31, 0.520, 0.77, 0.0); //(31%,52%,77%) old (0.369, 0.90, 1.0, 0.0)
	timer_popupwindow();
	drawSky(xrand);
	sand();
	glPushMatrix();
	scale2D(1.5, 1.5, 0);
	translate2D(-5, -4.5);
	rock();
	glPopMatrix();

	glPushMatrix();
	scale2D(2.0, 2.0, 0.0);
	translate2D(prevPos.x, prevPos.y);
	shade_fish1();
	glPopMatrix();


	glPushMatrix();
	translate2D(prevPos2.x, prevPos2.y);
	shade_fish2();
	glPopMatrix();

	glPushMatrix();
	translate2D(sharkPos.x, sharkPos.y);
	shade_shark();
	glPopMatrix();

	glPushMatrix();
	scale2D(0.75, 0.75, 0);
	translate2D(-14.5, -9);
	rock();
	glPopMatrix();
	drawHealthBar(health);
	drawPlastic();
	glPushMatrix();
	translate2D(turtlePos.x , turtlePos.y);
	//cout << "translating X: " << turtlePos.x << " Y: " << turtlePos.y << "\n\r";
	scale2D(0.25, 0.25, 0);
	rotate2D(-22.0);
	//drawPolyline(turtle_file, 0.23, 0.43, 0.13);
	shade_turtle();
	glPopMatrix();
	glPushMatrix();
	translate2D(seaweedPos1.x, seaweedPos1.y);
	drawPolyline(seaweed, 0.23, 0.43, 0.13);
	shade_seaweed();
	glPopMatrix();
	glPushMatrix();
	translate2D(seaweedPos2.x, seaweedPos2.y);
	drawPolyline(seaweed, 0.23, 0.43, 0.13);
	shade_seaweed();
	glPopMatrix();



	drawStrokeText(pause_instruction, -3.75, 9, 0, 160.0);

	glPushMatrix();
	translate2D(pausedScreenPos.x, pausedScreenPos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2i(5, 5);
	glVertex2i(5, -8);
	glVertex2i(-5, -8);
	glVertex2i(-5, 5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2i(5, 5);
	glVertex2i(5, -8);
	glVertex2i(-5, -8);
	glVertex2i(-5, 5);
	glVertex2i(5, 5);
	glEnd();

	ButtonDraw(&exit_1);
	ButtonDraw(&instructions_1);
	ButtonDraw(&resume_1);

	drawStrokeText(resume1, -2.0, -0.2, 0, 120.0);
	drawStrokeText(exit1, -1.0, -6.4, 0, 120.0);
	drawStrokeText(instructions1, -2.5, -3.25, 0, 120.0);


	glPopMatrix();

	//Instructions screen
	glPushMatrix();
	translate2D(instructionScreenPos.x, instructionScreenPos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2i(8, 5);
	glVertex2f(8, -9.5);
	glVertex2f(-8, -9.5);
	glVertex2i(-8, 5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2i(8, 5);
	glVertex2f(8, -9.5);
	glVertex2f(-8, -9.5);
	glVertex2i(-8, 5);
	glVertex2i(8, 5);
	glEnd();

	drawStrokeText(instructions1, -3.5, 3.3, 0, 100.0);
	drawStrokeText(instructions2, -8.0, 1.8, 0, 190.0);
	drawStrokeText(instructions3, -8.0, 0.3, 0, 190.0);
	drawStrokeText(instructions4, -8.0, -1.2, 0, 190.0);
	drawStrokeText(instructions5, -8.0, -2.7, 0, 190.0);
	drawStrokeText(instructions6, -8.0, -4.2, 0, 190.0);
	drawStrokeText(instructions7, -8.0, -5.7, 0, 190.0);
	drawStrokeText(instructions8, -8.0, -7.2, 0, 190.0);

	ButtonDraw(&back);
	drawStrokeText(back1, 5.25, -8.75, 0, 190.0);
	glPopMatrix();

	strcpy_s(pause_text, "PAUSED");
	glLineWidth(3.0);
	drawStrokeText(pause_text, pausedPos.x, pausedPos.y, 0, 80.0);



	strcpy_s(buffer, "Time: ");
	glLineWidth(3.0);
	drawStrokeText(buffer, -9.5, 8.3, 0, 120.0);
	_itoa_s(time, buffer, 10);
	drawStrokeText(buffer, -6.5, 8.3, 0, 120.0);
	
	//glColor3f(0.72f, 0.11f, 0.17f); //(38%,62%,84%)(72%,91%,97%)
	//glRectf(plasticPos.x, plasticPos.y, plasticPos.x + plasticSiz.x, plasticPos.y + plasticSiz.y);

	checkCollision();
	if (plasticCollisionX && plasticCollisionY) {
		if (health > 0.0)
			health = health - 0.2;
		else if (health <= 0.0)
			death();
	}
	popup_window1();
	popup_window2();
	popup_window3();
	popup_window4();
	popup_window5();
	//cout << "Health :" << health << "\n\r";
	
}

void checkCollision()
{
	plasticCollisionX = plasticPos.x + plasticSiz.x >= (turtlePos.x + 1.5) &&
		(turtlePos.x + 1.5) + turtleSiz.x >= plasticPos.x;

	plasticCollisionY = plasticPos.y + plasticSiz.y >= turtlePos.y + 1.125 &&
		turtlePos.y + 1.125 + turtleSiz.y >= plasticPos.y;

	// Collision only if on both axes
	//cout << "CollisionX : " << plasticCollisionX << ", CollisionY : " << plasticCollisionY << "\n\r";
}

void drawPlastic() {
	glLineWidth(3.0);
	glColor4f(0.0f, 0.0f, 0.0f, 0.7f);
	plastic.set(plasticPos.x+ 0.2, plasticPos.y + 0.2);
	moveTo(plastic);
	drawCircle();
	plastic.set(plasticPos.x + 0.6, plasticPos.y + 0.2);
	moveTo(plastic);
	drawCircle();
	plastic.set(plasticPos.x + 1.0, plasticPos.y + 0.2);
	moveTo(plastic);
	drawCircle();
	plastic.set(plasticPos.x + 0.2, plasticPos.y + 0.6);
	moveTo(plastic);
	drawCircle();
	plastic.set(plasticPos.x + 0.6, plasticPos.y + 0.6);
	moveTo(plastic);
	drawCircle();
	plastic.set(plasticPos.x + 1.0, plasticPos.y + 0.6);
	moveTo(plastic);
	drawCircle();
}

void drawCircle() 
{
	
	Point2* pointlist = new Point2[40];
	GLfloat theta = (2.0f * 3.1415926536) / 40;

	for (int c = 0; c < 40; c++)
	{
		pointlist[c].set((0.2 * sin(theta * c) + CP.x), (0.2 * cos(theta * c) + CP.y));
	}
	moveTo(pointlist[0]);
	for (int j = 0; j < 40; j++)
	{
		//moveTo(pointlist[i]);
		lineTo(pointlist[j]);
	}

}

void death()
{
	cout << "YOU DIED!!";
	paused = true;
	glPixelZoom(0.75, 0.75);
	glRasterPos2f(-10, -10);
	pix[4].draw();
	ButtonDraw(&exit_1);
	drawStrokeText(exit1, -1.0, -6.4, 0, 120.0);
	Sleep(10);
}


//initialize function
void myinit()
{
	glClearColor(0.369, 0.90, 1.0, 0.0);
	glOrtho(-10, 10, -10, 10, -1, 1);
	turtlePos.set(0, 0);
	turtleSiz.set(3.0, 1.25);
	plasticPos.set(1, -3);
	plasticSiz.set(1.2, 0.8);
	cout << "Initializing \n\r";
}


//used for selecting different values for the wave 
static void waveTimer(int value) {
	if (start_click == true && !paused) {
		xrand[0] = (rand() % 5) - 15.0;
		xrand[1] = (rand() % 5) - 12.5;
		xrand[2] = (rand() % 5) - 10.0;
		xrand[3] = (rand() % 5) - 7.5;
		xrand[4] = (rand() % 5) - 5.0;
		xrand[5] = (rand() % 5) - 2.5;
		xrand[6] = (rand() % 5) + 0.0;
		xrand[7] = (rand() % 5) + 2.5;
		xrand[8] = (rand() % 5) + 5.0;
		glutPostRedisplay();
		glutTimerFunc(600, waveTimer, 0);
	}
	
	//glutTimerFunc(500, waveTimer, 0);
}

//Timer funciton that displays the time elapsed
static void Timer(int value) {
	if (start_click == true && !paused) 
	{
		time++;
		glutTimerFunc(1000, Timer, 0);
		glutPostRedisplay();
		
	}
	//glutTimerFunc(1000, Timer, 0);
}

//timer that moves the background position
static void backgroundTimer(int value){

	if (start_click == true && !paused){
		seaweedPos1.set(seaweedPos1.x - 0.05, seaweedPos1.y);
		seaweedPos2.set(seaweedPos2.x - 0.05, seaweedPos2.y);

		glutPostRedisplay();
		glutTimerFunc(400, backgroundTimer, 0);
	}
	
}

static void fishTimer(int value)
{
	a = prevPos2.x;
	if (!paused && (mainscreen_active == true || gamescreen_active== true))
	{
		if (a > 11.0)
		{
			prevPos.set(-12, 2);
			prevPos2.set(-11, 2);
		}
		prevPos.set(prevPos.x + 0.04, prevPos.y);
		prevPos2.set(prevPos2.x + 0.03, prevPos2.y);

		glutPostRedisplay();
		glutTimerFunc(10, fishTimer, 0);
	}

}

static void sharkTimer(int value)
{
		if (gamescreen_active == true && !paused && shark_enter == true)
		{
				sharkPos.set(sharkPos.x + 0.001, sharkPos.y);
				glutPostRedisplay();
				glutTimerFunc(10, sharkTimer, 0);
			
		}
	
}

void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	if (mainscreen_active == true) 
	{
		move_fish();
	}

	else if (start_click == true) {
		game_screen();
	}

	else if (instructions_clicked == true) {
		instructions_test();
	}
	glutSwapBuffers();
}

//draws the background for the main menu
void main_screen()
{
	sand();
	glPushMatrix();
	scale2D(1.5, 1.5, 0);
	translate2D(-5, -4.5);
	rock();
	glPopMatrix();

	glPushMatrix();
	scale2D(0.75, 0.75, 0);
	translate2D(-14.5, -9);
	rock();
	glPopMatrix();

	strcpy_s(buffer, "Crush's Adventure");
	strcpy_s(escape, "Press esc to exit");
	glLineWidth(3.0);
	drawStrokeText(escape, -7.0, -9.0, 0, 80.0);
	drawStrokeText(buffer, -7.0, 8.0, 0, 80.0);
	ButtonDraw(&start);
	ButtonDraw(&instructions);
	glColor3f(0, 0, 1);
	drawStrokeText(start1, -2.0, -1.0, 0, 80.0);
	drawStrokeText(instructions1, -4.0, -5.0, 0, 80.0);

	strcpy_s(fin_name, "Shark_outline.txt");

	glPushMatrix();
	translate2D(-4, 5);
	//drawPolyline(fin_name, 0.67, 0.67, 0.67);
	shade_shark();
	glPopMatrix();

	glPushMatrix();
	translate2D(3, 2);
	scale2D(0.3, 0.3, 0);
	//drawPolyline(turtle_file, 0.23, 0.43, 0.13);
	shade_turtle();
	glPopMatrix();

	glPushMatrix();
	translate2D(-12, -9);
	drawPolyline(seaweed, 0.23, 0.43, 0.13);
	shade_seaweed();
	glPopMatrix();

	glPushMatrix();
	translate2D(5, -9);
	drawPolyline(seaweed, 0.23, 0.43, 0.13);
	shade_seaweed();
	glPopMatrix();


	glPushMatrix();
	b = prevPos1.x + 0.008;
	c = prevPos1.y + rand() % 2;
	//Draws a bubble on the screen
	translate2D(b, c);
	bubbles(0.9f);
	glPopMatrix();
	prevPos1.set(b, c);

	//Instructions
	strcpy_s(instructions2, "1. Use the arrow keys to move the turtle");
	strcpy_s(instructions3, "2. Eat the pieces of algae for your health");
	strcpy_s(instructions4, "3. Avoid the pieces of plastic in the ocean");
	strcpy_s(instructions5, "4. Avoid predators such as sharks");
	strcpy_s(instructions6, "5. Eating plastic will decrease your health");
	strcpy_s(instructions7, "6. You have 1 attempt to make it home");
	strcpy_s(instructions8, "7. Press P at anytime to pause the game");

}

//This function draws fish that swim across the screen on a loop
void move_fish()
{
	
	//glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.369, 0.90, 1.0, 0.3);
	
	//printf("Drawing background\n");
	sand();
	if (mainscreen_active == true)
	{
		main_screen();
	}

	else if (gamescreen_active == true)
	{
		game_screen();
	}
	
	glPushMatrix();
	scale2D(2.0, 2.0, 0.0);
	translate2D(prevPos.x, prevPos.y);
	shade_fish1();
	glPopMatrix();

	
	glPushMatrix();
	translate2D(prevPos2.x, prevPos2.y);
	shade_fish2();
	glPopMatrix();

	if (start_click == false && instructions_clicked == false)
	{
		glutPostRedisplay();
	}
				
}
	
//Moves the turtle character	
void moveCharacter(float x, float y)
{
	if (start_click == true && !paused) {
		//cout << "Move X:" << x << ", Y:" << y << "\n\r";
		x = turtlePos.x + x;
		y = turtlePos.y + y;
		if (x >= -10 && x <= 5 && y >= -9.5 && y <= 2.5) { //Confines the entirety of the turtle to the current viewport
			turtlePos.set(x, y);
			//cout << "Current Postion is X: " << turtlePos.x << " Y: " << turtlePos.y << "\n\r";
		}
		glutPostRedisplay();
	}
}

//Gets keyboard input from the arrow keys
void SpecialInput(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		//cout << "left key\n\r";
		moveCharacter(-0.25f, 0.0f);
		break;

	case GLUT_KEY_RIGHT:
		//cout << "right key\n\r";
		moveCharacter(0.25f, 0.0f);
		break;

	case GLUT_KEY_DOWN:
		//cout << "down key \n\r";
		moveCharacter(0.0f, -0.25f);
		break;

	case GLUT_KEY_UP:
		//cout << "up key \n\r";
		moveCharacter(0.0f, 0.25f);
		break;
	}
}

//Gets keyboard input
void myKeyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27:
		exit(0);
		break;
	case 'i':
		instructions_clicked = true;
		mainscreen_active = false;
		instructions_test();
		break; 
	case 'b':
		//go_back();
		instructions_clicked = false; 
		start_click = false;
		mainscreen_active = true;
		time = 0;
		health = 3.0;
		paused = false;
		glutPostRedisplay();
		break;
	case 'p':
		if (start_click == true) 
		{
			if (paused) 
			{
				paused = false;
				pausedPos.set(12, 0);
				pausedScreenPos.set(15, 0);
				popupwindow1Pos.set(20, 0);
				cout << "unpause \n\r";
				Timer(0);
				waveTimer(0);
				//backgroundTimer(0);
			}
			else if (!paused) 
			{
				paused = true;
				pausedPos.set(-2.999999999999, 3.0);
				pausedScreenPos.set(0, 0);
				
				glutPostRedisplay();
				Sleep(10);
				cout << "Pause \n\r";
			}
			
		}
		break;
	}
}


//See if the buttons on the main screen should be highlighted
void highlighted1(button *b )
{
	if (highlight == true)
	{
		b->highlighted = 1;
		glutPostRedisplay();
	}

	else if (highlight == false)
	{
		b->highlighted = 0; 
		glutPostRedisplay();
	}
}
//To determine if the main screen buttons should be highlighted or not
void myMouse(int mouseX, int mouseY)
{

	if ( mouseX > 200 && mouseX <600 && mouseY <356 && mouseY > 266 && mainscreen_active == true )
	{
		
		highlight = true;  
		highlighted1(&start);
	}
	
	else if (mouseX > 200 && mouseX < 600 && mouseY < 480 && mouseY > 390 && mainscreen_active == true)
	{
		
		highlight = true;
		highlighted1(&instructions);
	}

	else if (mouseX > 240 && mouseX < 560 && mouseY > 270 && mouseY < 330 && paused)
	{
		highlight = true; 
		highlighted1(&resume_1);
	}

	else if (mouseX > 240 && mouseX < 560 && mouseY > 360 && mouseY < 420 && paused)
	{
		highlight = true;
		highlighted1(&instructions_1);
	}

	else if (mouseX > 240 && mouseX < 560 && mouseY > 450 && mouseY < 510 && paused)
	{
		highlight = true;
		highlighted1(&exit_1);
	}

	else if (mouseX > 600 && mouseX < 680 && mouseY > 540 && mouseY < 570 && instructions_screen_gameplay == true)
	{
		highlight = true;
		highlighted1(&back);
	}

	else if (mouseX > 320 && mouseX < 540 && mouseY > 540 && mouseY < 570 && popup_window_active == true)
	{
		highlight = true;
		highlighted1(&continue1);
	}
	else
	{
		if (mainscreen_active == true)
		{
			highlight = false;
			highlighted1(&start);
			highlighted1(&instructions);
		}

		if (paused)
		{
			highlight = false;
			highlighted1(&resume_1);
			highlighted1(&exit_1);
			highlighted1(&instructions_1);
		}

		if (instructions_screen_gameplay == true)
		{
			highlight = false;
			highlighted1(&back);
		}

		if (popup_window_active == true)
		{
			highlight = false;
			highlighted1(&continue1);
		}
	}
}

//Mouse input
void mouse_click(int button, int state, int mouseX, int mouseY)
{
	int y = 600 - mouseY;
	printf("%i %i\n", mouseX, y);
	//Checks to see if the left mouse button is pressed down
	if (button == GLUT_LEFT_BUTTON )
	{
		if (state == GLUT_DOWN)
		{
			//Sees if the instruction button has been pressed
			if (y > 121 && y < 210)
			{
				if (mouseX > 199 && mouseX < 597 && mainscreen_active == true)
				{
					instructions_clicked = true;
					mainscreen_active = false;
					//instructions_test();
					glutPostRedisplay();
					printf("instructions\n");
				}

			}

			if (y > 240 && y < 335)
			{
				//Sees if the start button has been pressed
				if (mouseX > 200 && mouseX < 594 && mainscreen_active == true)
				{
					start_click = true;
					mainscreen_active = false;
					turtlePos.set(turtlePos.x, turtlePos.y);
					//backgroundTimer(0);
					fishTimer(0);
					waveTimer(0);
					Timer(0);
					backgroundTimer(0);
					sharkTimer(0);
					game_screen();
					glutPostRedisplay();
				}
			}

			if (y > 270 && y < 330)
			{
				if (mouseX > 240 && mouseX < 560 && paused)
				{
					paused = false;
					pausedPos.set(12, 0);
					pausedScreenPos.set(15, 0);
					popupwindow1Pos.set(20, 0);
					cout << "unpause \n\r";
					Timer(0);
					waveTimer(0);
					sharkTimer(0);
					backgroundTimer(0);
					fishTimer(0);
				}

				
			}

			if (y > 185 && y < 240)
			{
				if (mouseX > 240 && mouseX < 560 && paused)
				{
					instructionScreenPos.set(0, 0);
					instructions_screen_gameplay = true;
					pausedPos.set(12, 0);
				}
			}

			if (y > 93 && y < 150)
			{
				if (mouseX > 240 && mouseX < 560 && paused)
				{
					exit(0);
					
				}
			}

			if (y > 34 && y < 60)
			{
				if (mouseX > 600 && mouseX < 680)
				{
					instructions_screen_gameplay = false;
					pausedPos.set(-2.999999999999, 3.0);
					instructionScreenPos.set(20, 0);
				}
			}
			if (y > 30 && y < 60)
			{
				if (mouseX > 320 && mouseX < 520 && popup_window_active == true)
				{
					//to continue and unpause the game after the popup window
					popup_window_active == false; 
					popupwindow1Pos.set(20, 0);
					popupwindow2Pos.set(20, 0);
					popupwindow3Pos.set(20, 0);
					popupwindow4Pos.set(20, 0);
					popupwindow5Pos.set(20, 0);
					paused = false;
					Timer(0);
					waveTimer(0);
					backgroundTimer(0);
					fishTimer(0);
					sharkTimer(0);
				}
			}
		}
	}

	
	
}
void popup_window1()
{
	
		glPushMatrix();
		translate2D(popupwindow1Pos.x,popupwindow1Pos.y);
		glColor3f(0.482, 0.788, 0.7647);
		glBegin(GL_QUADS);
		glVertex2f(7, 9.5);
		glVertex2f(7, -9.5);
		glVertex2f(-7, -9.5);
		glVertex2f(-7, 9.5);
		glEnd();

		glColor3f(0.359, 0.67, 0.647);
		glBegin(GL_LINE_STRIP);
		glVertex2f(7, 9.5);
		glVertex2f(7, -9.5);
		glVertex2f(-7, -9.5);
		glVertex2f(-7, 9.5);
		glVertex2f(7, 9.5);
		glEnd();

		glPixelZoom(0.4, 0.4);
		glRasterPos2f(-5.3, -7.25);
		pix[0].draw();

	//Drawing the button for the popup window
		ButtonDraw(&continue1);
		drawStrokeText(continue_1, -0.8, -8.75, 0, 190.0);

		glPopMatrix();

	
}

void popup_window2()
{
	glPushMatrix();
	translate2D(popupwindow2Pos.x, popupwindow2Pos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glVertex2f(7, 9.5);
	glEnd();

	glPixelZoom(0.4, 0.4);
	glRasterPos2f(-5.3, -7.25);
	pix[1].draw();

	//Drawing the button for the popup window
	ButtonDraw(&continue1);
	drawStrokeText(continue_1, -0.8, -8.75, 0, 190.0);

	glPopMatrix();
}

void popup_window3()
{
	glPushMatrix();
	translate2D(popupwindow3Pos.x, popupwindow3Pos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glVertex2f(7, 9.5);
	glEnd();

	glPixelZoom(0.4, 0.4);
	glRasterPos2f(-5.3, -7.25);
	pix[2].draw();

	//Drawing the button for the popup window
	ButtonDraw(&continue1);
	drawStrokeText(continue_1, -0.8, -8.75, 0, 190.0);

	glPopMatrix();
}
void popup_window4()
{

	glPushMatrix();
	translate2D(popupwindow4Pos.x, popupwindow4Pos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glVertex2f(7, 9.5);
	glEnd();

	glPixelZoom(0.4, 0.4);
	glRasterPos2f(-5.3, -7.25);
	pix[3].draw();

	//Drawing the button for the popup window
	ButtonDraw(&continue1);
	drawStrokeText(continue_1, -0.8, -8.75, 0, 190.0);

	glPopMatrix();


}

void popup_window5()
{

	glPushMatrix();
	translate2D(popupwindow5Pos.x, popupwindow5Pos.y);
	glColor3f(0.482, 0.788, 0.7647);
	glBegin(GL_QUADS);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glEnd();

	glColor3f(0.359, 0.67, 0.647);
	glBegin(GL_LINE_STRIP);
	glVertex2f(7, 9.5);
	glVertex2f(7, -9.5);
	glVertex2f(-7, -9.5);
	glVertex2f(-7, 9.5);
	glVertex2f(7, 9.5);
	glEnd();

	glPixelZoom(0.4, 0.4);
	glRasterPos2f(-5.3, -7.25);
	pix[5].draw();

	//Drawing the button for the popup window
	ButtonDraw(&continue1);
	drawStrokeText(continue_1, -0.8, -8.75, 0, 190.0);

	glPopMatrix();


}

void timer_popupwindow()
{
	if (time < 10)
	{
		popupwindow1Pos.set(20, 0);
		popupwindow2Pos.set(20, 0);
		popupwindow3Pos.set(20, 0);
		popupwindow4Pos.set(20, 0);
	}

	if (time == 10)
	{
		popupwindow1Pos.set(0, 0);
		popupwindow2Pos.set(20, 0);
		popupwindow4Pos.set(20, 0);
		popupwindow3Pos.set(20, 0);
		popup_window_active = true;
		paused = true;
				
		glutPostRedisplay();
		Sleep(10);
		
	}

	else if (time > 10 && time < 60)
	{
		popupwindow1Pos.set(20, 0);
		popupwindow2Pos.set(20, 0);
	}

	else if (time == 60)
	{
		popupwindow2Pos.set(0, 0);
		popupwindow1Pos.set(20, 0);

		popup_window_active = true;
		paused = true;

		glutPostRedisplay();
		Sleep(10);
	}

	else if (time == 90)
	{
		popupwindow2Pos.set(20, 0);
		popupwindow1Pos.set(20, 0);
		popupwindow3Pos.set(0, 0);
		popup_window_active = true;
		paused = true;
		glutPostRedisplay();
		Sleep(10);
	}

	else if (time == 205)
	{
		popupwindow2Pos.set(20, 0);
		popupwindow1Pos.set(20, 0);
		popupwindow5Pos.set(0, 0);
		popup_window_active = true;
		endpop5 = true;
		paused = true;
	
		sharkPos.set(30, 0);
		glutPostRedisplay();
		Sleep(10);
	}

	else if (time == 300)
	{
		death();
	}

	else if (time == 150)
	{
		popupwindow2Pos.set(20, 0);
		popupwindow1Pos.set(20, 0);
		popupwindow3Pos.set(20, 0);
		popupwindow4Pos.set(0, 0);
		popup_window_active = true;
		paused = true;
		glutPostRedisplay();
		Sleep(10);
	}
}
//main loop
int main(int argc, char* argv[])
{
	// initialize glut 
	glutInit(&argc, argv);
	
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	//Needed to initialize the rand() function from windows.h

	glutCreateWindow("Crush's Adventure");
	glutDisplayFunc(render);
	glutKeyboardFunc(myKeyboard);
	glutSpecialFunc(SpecialInput);
	glutPassiveMotionFunc(myMouse);
	glutMouseFunc(mouse_click);

	//initialization function
	myinit();

	//setting inital positions for the point2 class variables
	prevPos.set(-12, 2);
	prevPos1.set(-5, -11);
	prevPos2.set(-11, 2);
	seaweedPos1.set(-12, -9);
	seaweedPos2.set(5, -9);
	sharkPos.set(-21, 0);
	pausedPos.set(12, 0);
	pausedScreenPos.set(15, 0);
	instructionScreenPos.set(20, 0);
	popupwindow1Pos.set(20, 0);
	popupwindow2Pos.set(20, 0);
	popupwindow3Pos.set(20, 0);
	popupwindow4Pos.set(20, 0);
	popupwindow5Pos.set(20, 0);
	fishTimer(0);
	//reading in the bitmap file for the popup windows
	pix[0].readBMPFile("popup_window1.bmp");
	pix[1].readBMPFile("popup-window2.bmp");
	pix[2].readBMPFile("popup-window3.bmp");
	pix[3].readBMPFile("popup-window4.bmp");
	pix[4].readBMPFile("game-over-cropped.bmp");
	pix[5].readBMPFile("popup-window5.bmp");
	glutMainLoop();
	
}



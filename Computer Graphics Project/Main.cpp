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

using namespace std;
char health1[10] = "HEALTH";

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

char buffer[20];
char escape[20]; 
char fin_name[30];
char turtle_file[20] = "turtle.txt";
char seaweed[20] = "seaweed.txt";
char start1[10] = "Start";
char instructions1[15] = "Instructions";
const unsigned char start2[10] = "Start";
const unsigned char instructions2[15] = "Instructions";
bool instructions_clicked = false;
button start = { -5.5, -2.5, 10, 3, 0, 0, start1 };
button instructions = { -5.5, -6.0, 10, 3, 0, 0, instructions1 };
bool highlight = false;
bool mainscreen_active = true;
bool start_click = false;
Point2 prevPos;
Point2 prevPos1; 
Point2 prevPos2; 
float num_fish;
float value = 0.0; 
float a; 
float b; 
float c; 
float d; 
float e; 
Point2 turtlePos;
float xrand[9];

int health = 1;

void game_screen()
{
	glClearColor(0.31, 0.520, 0.77, 0.0); //(31%,52%,77%) old (0.369, 0.90, 1.0, 0.0)
	drawSky(xrand);
	drawHealthBar(health);
	glPushMatrix();
	translate2D(turtlePos.x , turtlePos.y);
	scale2D(0.25, 0.25, 0);
	rotate2D(-22.0);
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
	//glutSwapBuffers();
}


void ButtonDraw(button *b)
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

		glLineWidth(3);
		glColor3f(0, 0, 1);
		drawStrokeText(start1, -2.0, -1.5, 0, 80.0);
		drawStrokeText(instructions1, -4.0, -5.5, 0, 80.0);
	}
}

void myinit()
{
	glClearColor(0.369, 0.90, 1.0, 0.0);
	glOrtho(-10, 10, -10, 10, -1, 1);
}

void background()
{
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, w, h, 0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}

static void Timer(int value) {
	if (start_click == true) {
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
		// 100 milliseconds
	}
	
	glutTimerFunc(1000, Timer, 0);
}


void bubbles(void)
{
	const float deg = 3.14159 / 180;
	float radius = 0.6f;
	glColor3f(1.0f, 1.0f, 1.0f);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);

	for (int c = 0; c < 360; c++)
	{
		//Changing from degrees to radians
		float deginrad = c * deg;
		glVertex2f(-10.5f + cos(deginrad)*radius, -9.0f + sin(deginrad)*radius);
	}
	
	glEnd();
	
}

void bubbles2(void)
{
	const float deg = 3.14159 / 180;
	float radius = 0.2f;
	glColor3f(1.0f, 1.0f, 1.0f);
	glLineWidth(4.0);
	glBegin(GL_LINE_LOOP);

	for (int c = 0; c < 360; c++)
	{
		//Changing from degrees to radians
		float deginrad = c * deg;
		glVertex2f(-11.5f + cos(deginrad)*0.2, -7.0f + sin(deginrad)*0.2);
	}

	glEnd();
}

void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(-10, 10, -10, 10, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

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
		drawStrokeText(escape, -7.80, -9.0, 0, 80.0);
		drawStrokeText(buffer, -7.5, 8.5, 0, 80.0);
		ButtonDraw(&start);
		ButtonDraw(&instructions);
		strcpy_s(fin_name, "Shark_outline.txt");

		glPushMatrix();
		translate2D(-4, 5);
		drawPolyline(fin_name, 0.67, 0.67, 0.67);
		shade_shark();
		glPopMatrix();

		glPushMatrix();
		translate2D(3, 2);
		scale2D(0.3, 0.3, 0);
		drawPolyline(turtle_file, 0.23, 0.43, 0.13);
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
		b = prevPos1.x+0.008;
		if (a < -10)
		{
			c = 0;
		}

		else if (a > -5)
		{
			c = prevPos1.y + 0.01;
		}
	
		translate2D(b,c);
		bubbles(0.1f);

		glPopMatrix();
		prevPos1.set(b,c);
		
}

void move_fish()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.369, 0.90, 1.0, 0.3);
	
	    printf("Drawing background\n");
		sand();
		background();
		
		printf("move fish\n");
		a = prevPos.x + 0.015;
		glPushMatrix();
		scale2D(2.0, 2.0, 0.0);
		translate2D(a, 0.0);
		shade_fish1();
		glPopMatrix();

		e = prevPos2.x + 0.025; 
		glPushMatrix();
		translate2D(e, 0.0);
		shade_fish2();
		glPopMatrix();

		if (start_click == false && instructions_clicked == false)
		{
			glutPostRedisplay();
		}
		
		if (a < 11.0)
		{
			prevPos.set(a, 0.0);
			prevPos2.set(e, 0.0);
		}

		if (a > 11.0)
		{
			prevPos.set(-12, 3);
			prevPos2.set(-11, 3);
		}
}

void render(void)
{	
	move_fish();
	glutSwapBuffers();
	
}

void moveCharacter(float x, float y) {
	cout << "Move X:" <<  x << ", Y:" << y << "\n\r";

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//move_background();
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
	x = prevPos.x + x;
	y = prevPos.y + y;
	translate2D(x, y);
	scale2D(0.3, 0.3, 0);
	rotate2D(-22.0);
	drawPolyline(turtle_file, 0.23, 0.43, 0.13);
	shade_turtle();
	glPopMatrix();
	glutSwapBuffers();
	prevPos.set(x, y);
}

void SpecialInput(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		cout << "left key\n\r";
		moveCharacter(-0.5f, 0.0f);
		break;

	case GLUT_KEY_RIGHT:
		cout << "right key\n\r";
		moveCharacter(0.5f, 0.0f);
		break;

	case GLUT_KEY_DOWN:
		cout << "down key \n\r";
		moveCharacter(0.0f, -0.5f);
		break;

	case GLUT_KEY_UP:
		cout << "up key \n\r";
		moveCharacter(0.0f, 0.5f);
		break;
	}
}

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
		go_back();
		instructions_clicked = false; 
		start_click = false;
		mainscreen_active = true;
		move_fish();
		break;
	}
}

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
	else
	{
		if (mainscreen_active == true)
		{
			highlight = false;
			highlighted1(&start);
			highlighted1(&instructions);
		}
	}
}

void mouse_click(int button, int state, int mouseX, int mouseY)
{
	int y = 600 - mouseY;
	//printf("%i %i\n", mouseX, y);
	
	//Checks to see if the left mouse button is pressed down
	if (button == GLUT_LEFT_BUTTON )
	{
		if (state == GLUT_DOWN)
		{
			if (y > 121 && y < 210)
			{
				if (mouseX > 199 && mouseX < 597 && mainscreen_active == true)
				{
					instructions_clicked = true;
					mainscreen_active = false;
					printf("instructions\n");
				}

			}

			if (y > 240 && y < 335)
			{
				if (mouseX > 200 && mouseX < 594 && mainscreen_active == true)
				{
					start_click = true;
					mainscreen_active = false;
					printf("start\n");
				}
			}
		}
	}

	if (instructions_clicked ==  true)
	{
		instructions_test();
		mainscreen_active = false;
	}

	if (start_click == true)
	{
		prevPos.set(-8, -5);
		start_up();
		
		mainscreen_active = false; 
		
	}
	
}

int main(int argc, char* argv[])
{
	// initialize glut 
	glutInit(&argc, argv);
	myinit();
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	//Needed to initialize the rand() function from windows.h
	srand(GetTickCount());
	glutCreateWindow("Crush's Adventure");
	
	glutDisplayFunc(render);
	glutKeyboardFunc(myKeyboard);
	glutSpecialFunc(SpecialInput);
	glutPassiveMotionFunc(myMouse);
	glutMouseFunc(mouse_click);

	//initialization function
	myinit();
	prevPos.set(-12, 3);
	prevPos2.set(-11, 3);
	glutMainLoop();
	
}



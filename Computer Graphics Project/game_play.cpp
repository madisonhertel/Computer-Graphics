//libraries

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include <string.h>
#include "game.h"

//using namespace std
using namespace std;
extern char turtle_file[20];
extern char seaweed[20];
extern float xrand[9];
extern bool paused; 
//int health = 1; 
float a1; 
float b1; 
float c1;
float d1;
int i = 0;

class Point3
{
public:
	float x, y;
	void set(float dx, float dy) { x = dx; y = dy; }
	void set(Point3& p) { x = p.x; y = p.y; }
	Point3(float xx, float yy) { x = xx; y = yy; }
	Point3() { x = y = 0; }
};
Point3 bubblePos;
Point3 fishPos2; 

void popup_pause()
{
	if (paused == true)
	{
		printf("POPUP!!!\n");
		glColor4f(1.0, 0.0, 0.0, 0.0);
		glBegin(GL_POLYGON);
		glVertex2i(-3, 3);
		glVertex2i(3, 3);
		glVertex2i(3, -3);
		glVertex2i(-3, -3);

		glEnd();
		glutSwapBuffers();
	}

	else if (paused == false)
	{

	}
}

void move_background()
{
	
	    glClearColor(0.31, 0.520, 0.77, 0.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		sand();
		//drawHealthBar(health);
		drawSky(xrand);
		printf("xrand is: %f\n", xrand[0]);

		glPushMatrix();

		a1 = bubblePos.x - 0.005;
		b1 = bubblePos.y;
		c1 = fishPos2.x - 0.005;
		d1 = fishPos2.y;

		translate2D(a1, b1);
		drawPolyline(seaweed, 0.23, 0.43, 0.13);
		shade_seaweed();
		glPopMatrix();
		glPushMatrix();
		translate2D(c1, d1);
		drawPolyline(seaweed, 0.23, 0.43, 0.13);
		shade_seaweed();
		glPopMatrix();
		bubblePos.set(a1, b1);
		fishPos2.set(c1, d1);
		glPushMatrix();
		translate2D(-8, -5);
		scale2D(0.3, 0.3, 0);
		rotate2D(-22.0);
		drawPolyline(turtle_file, 0.23, 0.43, 0.13);
		shade_turtle();
		glPopMatrix();
		//glutSwapBuffers();
	

}


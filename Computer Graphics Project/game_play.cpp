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
Point3 prevPos1;
Point3 prevPos2; 



void move_background()
{
	
	    glClearColor(0.31, 0.520, 0.77, 0.0);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		sand();
		//drawHealthBar(health);
		drawSky(xrand);
		printf("xrand is: %f\n", xrand[0]);

		glPushMatrix();

		a1 = prevPos1.x - 0.005;
		b1 = prevPos1.y;
		c1 = prevPos2.x - 0.005;
		d1 = prevPos2.y;

		translate2D(a1, b1);
		drawPolyline(seaweed, 0.23, 0.43, 0.13);
		shade_seaweed();
		glPopMatrix();
		glPushMatrix();
		translate2D(c1, d1);
		drawPolyline(seaweed, 0.23, 0.43, 0.13);
		shade_seaweed();
		glPopMatrix();
		prevPos1.set(a1, b1);
		prevPos2.set(c1, d1);
		glPushMatrix();
		translate2D(-8, -5);
		scale2D(0.3, 0.3, 0);
		rotate2D(-22.0);
		drawPolyline(turtle_file, 0.23, 0.43, 0.13);
		shade_turtle();
		glPopMatrix();
		glutSwapBuffers();
	

}


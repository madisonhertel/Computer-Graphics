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
int health = 1; 

void start_up()
{
	glClearColor(0.31, 0.520, 0.77, 0.0); //(31%,52%,77%) old (0.369, 0.90, 1.0, 0.0)
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//drawWave();
	drawSky();
	drawHealthBar(health);
	glPushMatrix();
	translate2D(-8, -5);
	scale2D(0.25, 0.25, 0);
	rotate2D(-22.0);
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
	glutSwapBuffers();
}
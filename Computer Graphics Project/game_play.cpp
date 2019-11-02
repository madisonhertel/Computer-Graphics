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
int health = 1; 

void start_up()
{
	glClearColor(0.0, 0.467, 0.765, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawWave();
	drawHealthBar(health);
	glPushMatrix();
	translate2D(-8, -5);
	scale2D(0.3, 0.3, 0);
	rotate2D(-22.0);
	drawPolyline(turtle_file, 0.23, 0.43, 0.13);
	glPopMatrix();
	glutSwapBuffers();
}
//libraries

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include <string.h>
#include "game.h"

using namespace std;

void shade_shark()
{
	glColor3f(0.67f, 0.67f, 0.67f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.91, 0.46);
	glVertex2f(-4.54, 0.1);
	glVertex2f(-4.39, 0.19);

	glEnd();

	glColor3f(0.67f, 0.67f, 0.67f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.54, 0.1);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-4.39, 0.19);

	glEnd();

	glColor3f(0.67f, 0.7f, 0.6f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-4.39, 0.19);

	glEnd();

	glColor3f(0.82f, 0.88f, 0.93f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.68,-0.54);

	glEnd();


	glColor3f(0.67f, 0.7f, 0.6f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.68, -0.54);
	glEnd();


}

void shade_turtle() {
	//cout << "Shading Turtle";
	glPushMatrix();
	//translate2D(3, 2);
	scale2D(0.1, 0.1, 0);
	glColor3f(0.73f, 0.36f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(83.0, 60.0);
	glVertex2f(104.0, 59.0);
	glVertex2f(95.0, 76.0);
	glEnd();

	glColor3f(0.73f, 0.32f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(118.0, 64.0);
	glVertex2f(104.0, 59.0);
	glVertex2f(95.0, 76.0);
	glEnd();
	glPopMatrix();

}
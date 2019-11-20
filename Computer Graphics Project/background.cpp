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

void rock()
{
	glColor3f(0.2235f, 0.2235f, 0.2235f);
	glBegin(GL_POLYGON);
	glVertex2f(3.22, -1.74);
	glVertex2f(3.41, -1.955);
	glVertex2f(3.905, -1.66);
	glVertex2f(3.725, -1.093);
	glEnd();

	glColor3f(0.15f, 0.15f, 0.15f);
	glBegin(GL_POLYGON);
	glVertex2f(3.22, -1.74);
	glVertex2f(3.41, -1.955);
	glVertex2f(3.45, -2.25);
	glVertex2f(3.247, -2.147);
	glEnd();

	glColor3f(0.168f, 0.168f, 0.168f);
	glBegin(GL_POLYGON);
	glVertex2f(3.905, -1.66);
	glVertex2f(3.41, -1.955);
	glVertex2f(3.45, -2.25);
	glVertex2f(3.965, -2.25);
	glEnd();

	glColor3f(0.322f, 0.322f, 0.322f);
	glBegin(GL_POLYGON);
	glVertex2f(3.725, -1.093);
	glVertex2f(4.28, -1.4);
	glVertex2f(4.65, -2.236);
	glVertex2f(3.905, -1.66);
	glEnd();


	glColor3f(0.23137f, 0.23137f, 0.23137f);
	glBegin(GL_POLYGON);
	glVertex2f(4.65, -2.236);
	glVertex2f(3.905, -1.66);
	glVertex2f(3.965, -2.25);
	glEnd();
}

void sand()
{
	glColor3f(0.8588f, 0.8039f, 0.65098f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -8.96);
	glVertex2f(-9.54, -8.72);
	glVertex2f(-9, -9.19);
	glVertex2f(-10, -9.31);
	glEnd();

	glColor3f(0.9058f, 0.88627f, 0.77254f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -10);
	glVertex2f(-8.04, -10);
	glVertex2f(-9, -9.19);
	glVertex2f(-10, -9.31);
	glEnd();

	glColor3f(0.870f, 0.82359f, 0.7176f);
	glBegin(GL_POLYGON);
	glVertex2f(-8.04, -9.985);
	glVertex2f(-9.54, -8.72);
	glVertex2f(-6.5, -9.0);
	glEnd();


	glColor3f(0.960f, 0.9411f, 0.827f);
	glBegin(GL_POLYGON);
	glVertex2f(-8.04, -9.985);
	glVertex2f(-5, -10);
	glVertex2f(-6.5, -9.0);
	glEnd();

	glColor3f(0.8823f, 0.854f, 0.7686f);
	glBegin(GL_POLYGON);
	glVertex2f(-5.04, -8.5);
	glVertex2f(-5, -10);
	glVertex2f(-6.5, -9.0);
	glEnd();


	glColor3f(0.968f, 0.9f, 0.7686f);
	glBegin(GL_POLYGON);
	glVertex2f(-5.04, -8.5);
	glVertex2f(-5, -10);
	glVertex2f(-3, -10);
	glVertex2f(-4.5, -8.35);
	glEnd();

	glColor3f(0.88f, 0.8549f, 0.768f);
	glBegin(GL_POLYGON);
	glVertex2f(-3, -10);
	glVertex2f(-4.5, -8.5);
	glVertex2f(-2, -10);
	glEnd();

	glColor3f(0.88f, 0.8549f, 0.768f);
	glBegin(GL_POLYGON);
	glVertex2f(-1, -9);
	glVertex2f(2, -10);
	glVertex2f(-2, -10);
	glEnd();


	glColor3f(0.9450f, 0.9215f, 0.917647f);
	glBegin(GL_POLYGON);
	glVertex2f(-1, -9);
	glVertex2f(2, -10);
	glVertex2f(3, -9.5);
	glEnd();

	glColor3f(0.9372f, 0.9176f, 0.8f);
	glBegin(GL_POLYGON);
	glVertex2f(4, -10);
	glVertex2f(2, -10);
	glVertex2f(3, -9.5);
	glEnd();

	glColor3f(0.9215f, 0.9019f, 0.780f);
	glBegin(GL_POLYGON);
	glVertex2f(4, -10);
	glVertex2f(4.5, -10);
	glVertex2f(3, -9.5);
	glEnd();

	glColor3f(0.88235f, 0.796f, 0.6470f);
	glBegin(GL_POLYGON);
	glVertex2f(4.5, -10);
	glVertex2f(3, -9.5);
	glVertex2f(5, -9);
	glVertex2f(5, -10);
	glEnd();

	glColor3f(0.90f, 0.8666f, 0.7254f);
	glBegin(GL_POLYGON);
	glVertex2f(5, -9);
	glVertex2f(5, -10);
	glVertex2f(6, -10);
	glEnd();

	glColor3f(0.94500f, 0.929f, 0.819f);
	glBegin(GL_POLYGON);
	glVertex2f(6, -10);
	glVertex2f(7, -9);
	glVertex2f(8, -10);
	glEnd();
	   
	glColor3f(0.9640f, 0.956f, 0.776f);
	glBegin(GL_POLYGON);
	glVertex2f(6, -10);
	glVertex2f(5, -9);
	glVertex2f(7,-9);
	glEnd();

	glColor3f(0.85880f, 0.8039f, 0.66667f);
	glBegin(GL_POLYGON);
	glVertex2f(7, -9);
	glVertex2f(8, -10);
	glVertex2f(9, -10);
	glEnd();

	glColor3f(0.925f, 0.905f, 0.780f);
	glBegin(GL_POLYGON);
	glVertex2f(7, -9);
	glVertex2f(10, -9);
	glVertex2f(10, -10);
	glVertex2f(9, -10);
	glEnd();

	glColor3f(0.925f, 0.905f, 0.780f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -9);
	glVertex2f(-10, -7);
	glVertex2f(-9, -8.742);
	glEnd();

	glColor3f(0.937f, 0.925f, 0.89f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -7);
	glVertex2f(-9, -8.742);
	glVertex2f(-6.5, -9.19);
	glEnd();

	glColor3f(0.913f, 0.898f, 0.776f);
	glBegin(GL_POLYGON);
	glVertex2f(-9, -8.742);
	glVertex2f(-6.5, -9.19);
	glVertex2f(-6.0, -7.5);
	glEnd();

	glColor3f(0.866f, 0.8235f, 0.7019f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -7);
	glVertex2f(-9, -8.742);
	glVertex2f(-6, -7.5);
	glEnd();

	glColor3f(0.9607f, 0.9333f, 0.8196f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -7);
	glVertex2f(-6, -7.5);
	glVertex2f(-8, -5.5);
	glEnd();

	glColor3f(0.9707f, 0.97f, 0.9333f);
	glBegin(GL_POLYGON);
	glVertex2f(-10, -7);
	glVertex2f(-8, -5.5);
	glVertex2f(-10, -5.5);
	glEnd();

	glColor3f(0.87f, 0.90f, 0.7196f);
	glBegin(GL_POLYGON);
	glVertex2f(-4, -7);
	glVertex2f(-6, -7.5);
	glVertex2f(-8, -5.5);
	glEnd();

	glColor3f(0.9707f, 0.97f, 0.9333f);
	glBegin(GL_POLYGON);
	glVertex2f(-6, -7.5);
	glVertex2f(-4, -7);
	glVertex2f(-6.5, -9);
	glEnd();


	glColor3f(0.929f, 0.909f, 0.788f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.5, -8.5);
	glVertex2f(-4, -7);
	glVertex2f(-6.5, -9);
	glEnd();

	glColor3f(0.90f, 0.85f, 0.788f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.5, -8.5);
	glVertex2f(-4, -7);
	glVertex2f(-2, -10);
	glEnd();

	glColor3f(0.96f, 0.96f, 0.85f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -9);
	glVertex2f(-4, -7);
	glVertex2f(-2, -10);
	glEnd();
}
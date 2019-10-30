#pragma once
#ifndef GAME_H
#define GAME_H
#endif
#include <GL/GL.h>
#include <fstream>
#include "string.h"
#include <stdio.h>

using namespace std;
void instructions_test();

static void drawStrokeText(char *text,  int x,  int y,  int z, float scale)
{
	char *c;
	glPushMatrix();
	glTranslatef(x, y, 0);
	glScalef(1 / scale, 1 / scale, 1 / scale);

	for (c = text; *c; c++)
	{
		glColor3f(0, 0, 0);
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
	}
	glPopMatrix();
	glFlush();
}

static void go_back()
{

	glutPostRedisplay();
}

static void translate2D(float x, float y)
{
	glTranslatef(x, y, 0);
}

static void drawPolyline()
{
	char fileName[20]; 
	strcpy_s(fileName, "Shark_fin.txt");
	fstream inStream;
	inStream.open(fileName, ios::in); //open the file
	if (inStream.fail())
		return;
	GLint numpolys, numLines;
	GLfloat x, y;
	//reads in the number of polylines
	inStream >> numpolys;
	//reads in each line from the dino.dat file
	for (int j = 0; j < numpolys; j++)
	{
		inStream >> numLines;
		glBegin(GL_LINE_STRIP);
		//reads in each point pair and scales by the change in keyboard
		for (int i = 0; i < numLines; i++)
		{
			inStream >> x >> y;
			printf("%f, %f\n", x, y);
			glVertex2i(x , y );

		}
		glEnd();

	}
	inStream.close();
}




#pragma once
#ifndef GAME_H
#define GAME_H
#endif
#include <GL/GL.h>
#include <fstream>
#include "string.h"
#include <stdio.h>
extern char health1[10];
using namespace std;
void instructions_test();
void shade_shark();
void start_up();


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

static void rotate2D(float angle)
{
	glMatrixMode(GL_MODELVIEW);
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
}

static void scale2D(float x, float y, float z)
{
	glMatrixMode(GL_MODELVIEW);
	glScalef(x, y, z);
}

static void drawPolyline(char *name, float r, float g, float b)
{
	char fileName[20]; 
	strcpy_s(fileName, name);
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
		glColor3f(r, g, b);
		glBegin(GL_LINE_STRIP);
		//reads in each point pair and scales by the change in keyboard
		for (int i = 0; i < numLines; i++)
		{
			inStream >> x >> y;
			glVertex2f(x , y );
		
		}
		glEnd();

	}
	inStream.close();
}

static void drawWave()
{
	int phi = 0; 

	glColor3f(0.4f, 0.95f, 0.95f);
	glLineWidth(3.0);
	for (int c = 0; c <= 10; c ++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glBegin(GL_LINE_STRIP);
		for (GLfloat x = -10.0; x < 10.0; x += 0.01)   // draw the plot
		{
			glVertex2f(2*x , 6+ sin(3.1415f * x));

			phi++;
		}
			
		glEnd();
		

	}
}


static void drawHealthBar(int health) 
{
	int screenWidth = 20;
	int screenHeight = 20;
	glPushMatrix();
	translate2D(0, -0.5);
	glColor3f(0.8f, 0.1f, 0.0f);
	glRecti(8, 8, 6, 9);
	//glFlush();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(8, 8);
	glVertex2i(8, 9);
	glVertex2i(6, 9);
	glVertex2i(6, 8);
	glEnd();
	glPopMatrix();
	drawStrokeText(health1, 6.5, 9.95, 1, 260);
}




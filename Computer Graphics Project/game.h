#pragma once
#ifndef GAME_H
#define GAME_H
#endif
#include <GL/GL.h>
#include <fstream>
#include <iostream>
#include "string.h"
#include <stdio.h>

extern char health1[10];
using namespace std;

void timer_popupwindow();
void popup_window2();
void popup_window1();
void instructions_test();
void shade_shark();
void shade_fish1();
void shade_turtle();
void rock();
void sand();
void popup_pause();
void move_background();
using namespace std;
void game_screen();


static void move_fish();
void shade_fish2();

static void drawStrokeText(char *text,  float x,  float y,  int z, float scale)
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

static void bubbles(float radius)
{
    glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	const float deg = 3.14159 / 180;
	
	glColor4f(1.0f, 1.0f, 1.0f, 0.55f);
	glLineWidth(4.0);
	glBegin(GL_POLYGON);

	for (int c = 0; c < 360; c++)
	{
		//Changing from degrees to radians
		float deginrad = c * deg;
		glVertex2f(-13.25f + cos(deginrad)*radius, -0.5f + sin(deginrad)*radius);
	}

	glEnd();

	glColor4f(1.0f, 1.0f, 1.0f, 0.85f);
	glLineWidth(1.0);
	glBegin(GL_LINE_LOOP);

	for (int c = 0; c < 360; c++)
	{
		//Changing from degrees to radians
		float deginrad = c * deg;
		glVertex2f(-13.25f + cos(deginrad)*radius, -0.5f + sin(deginrad)*radius);
	}

	glEnd();

}


static void go_back()
{
	glutPostRedisplay();
}

static void translate2D(float x, float y)
{
	//cout << "translating X: " << x << " Y: " << y << "\n\r";
	glTranslatef(x, y, 1);
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
	//cout << "drawing" << fileName << "\n\r";
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
			glVertex2f(5*x , 6+ sin(3.1415f * x));

			phi++;
		}
			
		glEnd();
		

	}
}
/*
static void drawSky() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.72f, 0.91f, 0.97f); //(38%,62%,84%)(72%,91%,97%)
	glRecti(-10, 7, 10, 10);
		glBegin(GL_POLYGON);
		int xrand = (rand() % 10)-5;
		int yrand = rand() % 1;
		cout << "xrand = " << xrand << "\n\r";
		for (GLfloat x = -10.0; x < -5.0; x += 0.01)   // draw the plot
		{
			glVertex2f(x+xrand, 7 - yrand*sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10)-2.5;
		for (GLfloat x = -10.0; x < -5.0; x += 0.01)  // draw the plot
		{
			glVertex2f(x + xrand, 7 - sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) + 2.5;
		for (GLfloat x = -10.0; x < -5.0; x += 0.01)  // draw the plot
		{
			glVertex2f(x + xrand, 7 - sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) + 7.5;
		yrand = rand() % 1;
		for (GLfloat x = -10.0; x < -5.0; x += 0.01)  // draw the plot
		{
			glVertex2f(x + xrand, 7 - yrand * sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) + 12.5;
		for (GLfloat x = -10.0; x < -5.0; x += 0.01)  // draw the plot
		{
			glVertex2f(x + xrand, 7 - sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) - 5;
		for (GLfloat x = -5.0; x < 0.0; x += 0.01)   // draw the plot
		{
			glVertex2f(x + xrand, 7 + sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) - 5;
		for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
		{
			glVertex2f(x + xrand, 7 - sin(3.1415f * 0.2 * x));
		}
		glEnd();
		glBegin(GL_POLYGON);
		xrand = (rand() % 10) - 5;
		for (GLfloat x = 5.0; x < 10.0; x += 0.01)   // draw the plot
		{
			glVertex2f(x + xrand, 7 + sin(3.1415f * 0.2 * x));
		}
		glEnd();

}
*/

static void drawSky(float xrand[]) {
	//glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.72f, 0.91f, 0.97f); //(38%,62%,84%)(72%,91%,97%)
	glRecti(-10, 7, 10, 10);
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[0], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[1], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[2], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[3], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[4], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[5], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[6], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[7], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();
	glBegin(GL_POLYGON);
	for (GLfloat x = 0.0; x < 5.0; x += 0.01)   // draw the plot
	{
		glVertex2f(x + xrand[8], 7 - sin(3.1415f * 0.2 * x));
	}
	glEnd();

}

static void drawHealthBar(int health) 
{
	int screenWidth = 20;
	int screenHeight = 20;
	glPushMatrix();
	translate2D(0, -0.5);
	glColor3f(0.8f, 0.1f, 0.0f);
	glRecti(8, 8, 6, 9);
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(8, 8);
	glVertex2i(8, 9);
	glVertex2i(6, 9);
	glVertex2i(6, 8);
	glEnd();
	glPopMatrix();
	drawStrokeText(health1, 6.0, 9.0, 1, 260);
}

static void shade_seaweed()
{
	glColor3f(0.23, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(2.797f, -0.672f);
	glVertex2f(2.916f, -0.663f);
	glVertex2f(2.656f, 0.531f);
	glVertex2f(2.739f, 0.541f);
	glVertex2f(2.817f, 0.016f);
	glVertex2f(2.858f, -0.295f);
	glEnd();

	glColor3f(0.23, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(3.108f, -0.761f);
	glVertex2f(3.258f, -0.760f);
	glVertex2f(3.065f, 0.03f);
	glVertex2f(3.195f, 0);
	glEnd();

	glColor3f(0.23, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(3.065f, 0.03f);
	glVertex2f(3.195f, 0.0f);
	glVertex2f(3.559f, 0.77f);
	glVertex2f(3.44f, 0.784f);
	glEnd();

	glColor3f(0.23, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(3.44f, 0.784f);
	glVertex2f(3.559f, 0.77f);
	glVertex2f(3.509f, 1.719f);
	glEnd();

	glColor3f(0.23, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(3.346f, -0.73f);
	glVertex2f(3.195f, 0.0f);
	glVertex2f(3.239f, 0.09f);
	glVertex2f(3.47f, -0.622f);
	glEnd();

	glColor3f(0.10, 0.43, 0.13);
	glBegin(GL_POLYGON);
	glVertex2f(3.53f,-0.878f);
	glVertex2f(3.397f, -0.792f);
	glVertex2f(4.835f, 1.496f);
	glEnd();
}



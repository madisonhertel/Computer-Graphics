#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include <string.h>
#include "game.h"

using namespace std;

void shade_fish1()
{
	//fish tail
	glColor3f(0.6667f, 0.5215f, 0.54509f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.963, -0.074);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.661, -0.331);

	glEnd();

	glColor3f(0.6313f, 0.4274f, 0.4509f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.661, -0.331);

	glEnd();

	glColor3f(0.4705f, 0.47058f, 0.2784f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.6573, -0.4936);

	glEnd();

	glColor3f(0.4784f, 0.30588f, 0.3372f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.086, -0.512);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.6573, -0.4936);

	glEnd();

	//fish body


	glColor3f(0.6196f, 0.5294f, 0.55686f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.661, -0.331);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.321, -0.057);
	glEnd();

	glColor3f(0.4235f, 0.3764f, 0.388f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6573, -0.4936);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.3, -0.838);
	glEnd();

	glColor3f(0.5607f, 0.4784f, 0.513f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.3, -0.838);
	glVertex2f(0.1, -0.942);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.93727f, 0.839f, 0.8745f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.321, -0.057);
	glVertex2f(0.106, -0.089);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.6196f, 0.439f, 0.5803f);
	glBegin(GL_POLYGON);
	glVertex2f(0.353, -0.57);
	glVertex2f(0.106, -0.089);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.6196f, 0.439f, 0.5803f);
	glBegin(GL_POLYGON);
	glVertex2f(0.353, -0.57);
	glVertex2f(0.1, -0.942);
	glVertex2f(-0.059, -0.556);
	glEnd();

	//Fins
	glColor3f(0.69f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.454, -0.566);
	glVertex2f(-0.076, -0.558);
	glVertex2f(-0.184, -0.44);
	glEnd();

	//Fins
	glColor3f(0.69f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.454, -0.566);
	glVertex2f(-0.076, -0.558);
	glVertex2f(-0.09, -0.709);
	glEnd();

	glColor3f(0.8f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.342, 0.091);
	glVertex2f(0.096, -0.0826);
	glVertex2f(-0.268, -0.145);
	glEnd();
}

void shade_fish2()
{
	//fish tail
	glColor3f(0.6667f, 0.5215f, 0.54509f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.963, -0.074);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.661, -0.331);

	glEnd();

	glColor3f(0.6313f, 0.4274f, 0.4509f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.661, -0.331);

	glEnd();

	glColor3f(0.4705f, 0.47058f, 0.2784f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.6573, -0.4936);

	glEnd();

	glColor3f(0.4784f, 0.30588f, 0.3372f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.086, -0.512);
	glVertex2f(-0.78, -0.38);
	glVertex2f(-0.6573, -0.4936);

	glEnd();

	//fish body


	glColor3f(0.6196f, 0.5294f, 0.55686f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.661, -0.331);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.321, -0.057);
	glEnd();

	glColor3f(0.4235f, 0.3764f, 0.388f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6573, -0.4936);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.3, -0.838);
	glEnd();

	glColor3f(0.5607f, 0.4784f, 0.513f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.3, -0.838);
	glVertex2f(0.1, -0.942);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.93727f, 0.839f, 0.8745f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4785, -0.487);
	glVertex2f(-0.321, -0.057);
	glVertex2f(0.106, -0.089);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.6196f, 0.439f, 0.5803f);
	glBegin(GL_POLYGON);
	glVertex2f(0.353, -0.57);
	glVertex2f(0.106, -0.089);
	glVertex2f(-0.059, -0.556);
	glEnd();

	glColor3f(0.6196f, 0.439f, 0.5803f);
	glBegin(GL_POLYGON);
	glVertex2f(0.353, -0.57);
	glVertex2f(0.1, -0.942);
	glVertex2f(-0.059, -0.556);
	glEnd();

	//Fins
	glColor3f(0.69f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.454, -0.566);
	glVertex2f(-0.076, -0.558);
	glVertex2f(-0.184, -0.44);
	glEnd();

	//Fins
	glColor3f(0.69f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.454, -0.566);
	glVertex2f(-0.076, -0.558);
	glVertex2f(-0.09, -0.709);
	glEnd();

	glColor3f(0.8f, 0.454f, 0.486f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.342, 0.091);
	glVertex2f(0.096, -0.0826);
	glVertex2f(-0.268, -0.145);
	glEnd();
}

void shade_shark()
{
	glColor3f(0.0501f, 0.14f, 0.192f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.91, 0.46);
	glVertex2f(-4.54, 0.1);
	glVertex2f(-4.39, 0.19);

	glEnd();

	glColor3f(0.063f, 0.1137f, 0.1882f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.54, 0.1);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-4.39, 0.19);

	glEnd();

	glColor3f(0.067f, 0.1294f, 0.1921f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-4.39, 0.19);

	glEnd();
	glColor3f(0.1176f, 0.251f, 0.355f);
	
	glBegin(GL_POLYGON);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.68,-0.54);

	glEnd();


	glColor3f(0.054f, 0.188f, 0.255f);
	glBegin(GL_POLYGON);
	glVertex2f(-4.03, -0.27);
	glVertex2f(-3.55, -0.12);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.68, -0.54);
	glEnd();

	glColor3f(0.2117f, 0.3451f, 0.450f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.68, -0.54);
	glVertex2f(-2.49,-0.79);
	
	glEnd();

	glColor3f(0.0353f, 0.2039f, 0.266f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.77, -1.36);
	glVertex2f(-2.49, -0.79);

	glEnd();

	glColor3f(0.0353f, 0.2039f, 0.266f);
	glBegin(GL_POLYGON);
	glVertex2f(-3.13, -0.88);
	glVertex2f(-2.77, -1.36);
	glVertex2f(-3.16, -1.76);

	glEnd();

	glColor3f(0.149f, 0.3450f, 0.44f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.68, -0.54);
	glVertex2f(-2.09, -0.5);
	glVertex2f(-2.49, -0.79);

	glEnd();

	glColor3f(0.13f, 0.423f, 0.537f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.68, -0.54);
	glVertex2f(-2.09, -0.5);
	glVertex2f(-1.9, -0.1);

	glEnd();

	glColor3f(0.19f, 0.365f, 0.42);
	glBegin(GL_POLYGON);
	glVertex2f(-2.49, -0.79);
	glVertex2f(-2.03, -0.7);
	glVertex2f(-2.09, -0.5);

	glEnd();

	glColor3f(0.19f, 0.365f, 0.42);
	glBegin(GL_POLYGON);
	glVertex2f(-2.09, -0.5);
	glVertex2f(-1.1, -0.34);
	glVertex2f(-1.399, 0.1);
	glVertex2f(-1.9, -0.1);
	glEnd();

	glColor3f(0.14f, 0.368f, 0.490f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.9, -0.1);
	glVertex2f(-1.77, 0.19);
	glVertex2f(-1.399, 0.1);
	glEnd();

	glColor3f(0.184f, 0.407f, 0.525f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.09, -0.5);
	glVertex2f(-2.03, -0.704);
	glVertex2f(-1.31, -0.72);
	glEnd();

	glColor3f(0.368f, 0.572f, 0.674f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.03, -0.704);
	glVertex2f(-1.31, -0.72);
	glVertex2f(-1.72, -0.8);
	glEnd();

	glColor3f(0.313f, 0.494f, 0.5686f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.8, -1);
	glVertex2f(-1.72, -0.8);
	glVertex2f(-1.31, -0.72);
	glEnd();

	glColor3f(0.247f, 0.478f, 0.58f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.09, -0.5);
	glVertex2f(-1.31, -0.72);
	glVertex2f(-1.1, -0.34);
	glEnd();

	glColor3f(0.09f, 0.313f, 0.435f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.399, 0.1);
	glVertex2f(-1.1, -0.34);
	glVertex2f(-0.57, 0.01);
	glEnd();

	glColor3f(0.176f, 0.4117f, 0.545f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.31, -0.72);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-1.1, -0.34);
	glEnd();


	glColor3f(0.443f, 0.486f, 0.596f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.3999, 0.1);
	glVertex2f(-0.57, 0.01);
	glVertex2f(-0.2, 0.32);
	glEnd();

	glColor3f(0.3215f, 0.4117f, 0.5921f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.1, -0.34);
	glVertex2f(-0.29, -0.59);
	glVertex2f(-0.57, 0.01);
	glEnd();

	glColor3f(0.41568f, 0.509f, 0.66667f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.1, -0.34);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.29, -0.59);
	glEnd();

	glColor3f(0.313f, 0.486f, 0.564f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.26, -1.2);
	glVertex2f(0.15, -0.98);
	glEnd();

	glColor3f(0.4667f, 0.6f, 0.682f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.6, -0.84);
	glVertex2f(-0.29, -0.59);
	glVertex2f(0.38, -0.675);
	glVertex2f(0.15, -0.98);
	glEnd();

	glColor3f(0.545f, 0.568f, 0.686f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.29, -0.59);
	glVertex2f(0.555, 0.06);
	glVertex2f(0.38, -0.675);
	glEnd();

	glColor3f(0.403f, 0.450f, 0.584f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.29, -0.59);
	glVertex2f(-0.57, 0.01);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.725f, 0.623f, 0.6667f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.57, 0.01);
	glVertex2f(-0.2, 0.32);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.705f, 0.580f, 0.643f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.2, 0.32);
	glVertex2f(0.85, 0.44);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.627f, 0.470f, 0.564f);
	glBegin(GL_POLYGON);
	glVertex2f(1.38, 0.07);
	glVertex2f(0.85, 0.44);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.686f, 0.5568f, 0.639f);
	glBegin(GL_POLYGON);
	glVertex2f(1.38, 0.07);
	glVertex2f(1.524, -0.63);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.541f, 0.490f, 0.5921f);
	glBegin(GL_POLYGON);
	glVertex2f(0.38, -0.675);
	glVertex2f(1.524, -0.63);
	glVertex2f(0.555, 0.06);
	glEnd();

	glColor3f(0.121f, 0.294f, 0.403f);
	glBegin(GL_POLYGON);
	glVertex2f(0.38, -0.675);
	glVertex2f(1.02, -1.12);
	glVertex2f(1.524, -0.63);
	glEnd();

	

	glColor3f(0.454f, 0.4509f, 0.5568f);
	glBegin(GL_POLYGON);
	glVertex2f(0.15, -0.98);
	glVertex2f(1.02, -1.12);
	glVertex2f(0.38, -0.675);
	glEnd();

	//shading shark fin
	glColor3f(0.19f, 0.30f, 0.388f);
	glBegin(GL_POLYGON);
	glVertex2f(1.13, 1.49);
	glVertex2f(1.1, 1.12);
	glVertex2f(1.35, 1.39);
	glEnd();

	glColor3f(0.2549f, 0.29411f, 0.4078f);
	glBegin(GL_POLYGON);
	glVertex2f(1.68, 1.0);
	glVertex2f(1.1, 1.12);
	glVertex2f(1.35, 1.39);
	glEnd();

	glColor3f(0.2745f, 0.3529f, 0.450f);
	glBegin(GL_POLYGON);
	glVertex2f(1.68, 1.0);
	glVertex2f(1.1, 1.12);
	glVertex2f(1.12, 0.84);
	glEnd();


	glColor3f(0.3372f, 0.3372f, 0.451f);
	glBegin(GL_POLYGON);
	glVertex2f(1.68, 1.0);
	glVertex2f(2.08, 0.38);
	glVertex2f(1.12, 0.84);
	glEnd();

	glColor3f(0.4078f, 0.40f, 0.5176f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, 0.62);
	glVertex2f(2.08, 0.38);
	glVertex2f(1.12, 0.84);
	glEnd();

	glColor3f(0.4078f, 0.40f, 0.5176f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, 0.62);
	glVertex2f(0.85, 0.44);
	glVertex2f(2.08, 0.38);
	glEnd();

	//shading flipper
	glColor3f(0.564f, 0.470f, 0.545f);
	glBegin(GL_POLYGON);
	glVertex2f(1.35, -1.71);
	glVertex2f(0.8, -1.82);
	glVertex2f(1.07, -1.62);
	glEnd();

	glColor3f(0.572f, 0.447f, 0.505f);
	glBegin(GL_POLYGON);
	glVertex2f(1.07, -1.62);
	glVertex2f(1.35, -1.71);
	glVertex2f(1.5, -1.32);
	glEnd();

	glColor3f(0.5601f, 0.439f, 0.5019f);
	glBegin(GL_POLYGON);
	glVertex2f(1.35, -1.71);
	glVertex2f(1.5, -1.32);
	glVertex2f(1.8, -1.55);
	glEnd();

	glColor3f(0.651f, 0.4823f, 0.5725f);
	glBegin(GL_POLYGON);
	glVertex2f(1.5, -1.32);
	glVertex2f(1.62, -1.18);
	glVertex2f(2.1, -1.43);
	glVertex2f(1.8, -1.55);
	glEnd();

	glColor3f(0.627f, 0.5019f, 0.5803f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, 0.62);
	glVertex2f(0.85, 0.44);
	glVertex2f(2.08, 0.38);
	glEnd();

	glColor3f(0.74f, 0.568f, 0.647f);
	glBegin(GL_POLYGON);
	glVertex2f(0.85, 0.44);
	glVertex2f(1.38, 0.07);
	glVertex2f(2.08, 0.38);
	glEnd();

	glColor3f(0.682f, 0.529f, 0.6117f);
	glBegin(GL_POLYGON);
	glVertex2f(2.08, 0.38);
	glVertex2f(1.38, 0.07);
	glVertex2f(2.02, 0.18);
	glEnd();

	glColor3f(0.133f, 0.361f, 0.427f);
	glBegin(GL_POLYGON);
	glVertex2f(2.45, -1.24);
	glVertex2f(2.645, -0.82);
	glVertex2f(1.62, -1.18);
	glEnd();

	glColor3f(0.02f, 0.18f, 0.239f);
	glBegin(GL_POLYGON);
	glVertex2f(1.95, -0.84);
	glVertex2f(2.645, -0.82);
	glVertex2f(1.62, -1.18);
	glEnd();

	glColor3f(0.129f, 0.262f, 0.3411f);
	glBegin(GL_POLYGON);
	glVertex2f(1.95, -0.84);
	glVertex2f(2.05, -0.62);
	glVertex2f(2.645, -0.82);
	glEnd();

	glColor3f(0.56f, 0.545f, 0.635);
	glBegin(GL_POLYGON);
	glVertex2f(2.02, -0.23);
	glVertex2f(2.61, -0.22);
	glVertex2f(2.645, -0.82);
	glVertex2f(2.05, -0.62);
	glEnd();


	glColor3f(0.753f, 0.643f, 0.7137f);
	glBegin(GL_POLYGON);
	glVertex2f(1.62, -1.18);
	glVertex2f(2.1, -1.43);
	glVertex2f(2.45, -1.24);
	glEnd();

	glColor3f(0.14f, 0.364f, 0.494f);
	glBegin(GL_POLYGON);
	glVertex2f(1.02, -1.12);
	glVertex2f(1.62, -1.18);
	glVertex2f(1.524, -0.63);
	glEnd();

	
	glColor3f(0.68f, 0.533f, 0.615f);
	glBegin(GL_POLYGON);
	glVertex2f(2.05, -0.62);
	glVertex2f(2.02, -0.23);
	glVertex2f(1.524, -0.63);
	glEnd();

	glColor3f(0.6274f, 0.462f, 0.568f);
	glBegin(GL_POLYGON);
	glVertex2f(2.02, -0.23);
	glVertex2f(1.38, 0.07);
	glVertex2f(1.524, -0.63);
	glEnd();

	glColor3f(0.729f, 0.619f, 0.678f);
	glBegin(GL_POLYGON);
	glVertex2f(2.02, -0.23);
	glVertex2f(2.25, 0.12);
	glVertex2f(2.61, -0.22);
	glEnd();

	glColor3f(0.6666f, 0.5333f, 0.5960f);
	glBegin(GL_POLYGON);
	glVertex2f(2.02, -0.23);
	glVertex2f(2.02, 0.18);
	glVertex2f(2.25, 0.12);
	glEnd();

	glColor3f(0.69411f, 0.5607f, 0.61960f);
	glBegin(GL_POLYGON);
	glVertex2f(1.38, 0.07);
	glVertex2f(2.02, 0.18);
	glVertex2f(2.02, -0.23);
	glEnd();

	glColor3f(0.6862f, 0.5682f, 0.6588f);
	glBegin(GL_POLYGON);
	glVertex2f(2.08, 0.38);
	glVertex2f(2.32, 0.21);
	glVertex2f(2.25, 0.12);
	glVertex2f(2.02, 0.18);
	glEnd();

	glColor3f(0.6901f, 0.549f, 0.63529f);
	glBegin(GL_POLYGON);
	glVertex2f(2.61, -0.22);
	glVertex2f(2.32, 0.21);
	glVertex2f(2.25, 0.12);
	glEnd();


	glColor3f(0.7294f, 0.5843f, 0.6666f);
	glBegin(GL_POLYGON);
	glVertex2f(2.61, -0.22);
	glVertex2f(2.32, 0.21);
	glVertex2f(2.84, -0.02);
	glEnd();

	glColor3f(0.6392f, 0.4980f, 0.5647f);
	glBegin(GL_POLYGON);
	glVertex2f(2.61, -0.22);
	glVertex2f(3.41, -0.27);
	glVertex2f(2.84, -0.02);
	glEnd();

	glColor3f(0.6470f, 0.5058f, 0.53725f);
	glBegin(GL_POLYGON);
	glVertex2f(2.61, -0.22);
	glVertex2f(3.41, -0.27);
	glVertex2f(3.02, -0.68);
	glEnd();

	glColor3f(0.0627f, 0.1176f, 0.1607f);
	glBegin(GL_POLYGON);
	glVertex2f(4.250, -0.58);
	glVertex2f(4.32, -0.71);
	glVertex2f(4.65, -0.78);
	glEnd();

	glColor3f(0.0745f, 0.2f, 0.2352f);
	glBegin(GL_POLYGON);
	glVertex2f(4.22, -0.95);
	glVertex2f(4.32, -0.71);
	glVertex2f(4.65, -0.78);
	glVertex2f(4.68, -0.89);
	glEnd();

	glColor3f(0.517f, 0.674f, 0.7215f);
	glBegin(GL_POLYGON);
	glVertex2f(4.22, -0.95);
	glVertex2f(4.62, -0.98);
	glVertex2f(4.1, -1.13);
	glVertex2f(4.68, -0.89);
	glEnd();

	glColor3f(0.074f, 0.196f, 0.267f);
	glBegin(GL_POLYGON);
	glVertex2f(4.22, -0.95);
	glVertex2f(4.015, -0.86);
	glVertex2f(4.1, -1.13);
	glVertex2f(4.095, -0.984);
	glEnd();

	glColor3f(0.149f, 0.290f, 0.356f);
	glBegin(GL_POLYGON);
	glVertex2f(4.22, -0.95);
	glVertex2f(4.015, -0.86);
	glVertex2f(4.155, -0.67);
	glVertex2f(4.32, -0.71);
	glEnd();

	glColor3f(0.549f, 0.682f, 0.7215f);
	glBegin(GL_POLYGON);
	glVertex2f(4.25, -0.58);
	glVertex2f(4.32, -0.71);
	glVertex2f(4.155, -0.67);
	glEnd();

	glColor3f(0.356f, 0.329f, 0.4235f);
	glBegin(GL_POLYGON);
	glVertex2f(4.25, -0.58);
	glVertex2f(4.32, -0.71);
	glVertex2f(4.155, -0.67);
	glEnd();

	glColor3f(0.45f, 0.373f, 0.470f);
	glBegin(GL_POLYGON);
	glVertex2f(4.25, -0.58);
	glVertex2f(3.86, -0.44);
	glVertex2f(4.155, -0.67);
	glEnd();

	glColor3f(0.4117f, 0.3530f, 0.4078f);
	glBegin(GL_POLYGON);
	glVertex2f(3.86, -0.44);
	glVertex2f(3.68, -0.6);
	glVertex2f(4.155, -0.67);
	glEnd();

	glColor3f(0.1058f, 0.247f, 0.305f);
	glBegin(GL_POLYGON);
	glVertex2f(4.015, -0.86);
	glVertex2f(3.68, -0.6);
	glVertex2f(4.155, -0.67);
	glEnd();

	glColor3f(0.156f, 0.341f, 0.4039f);
	glBegin(GL_POLYGON);
	glVertex2f(4.015, -0.86);
	glVertex2f(3.68, -0.6);
	glVertex2f(3.494, -0.9);
	glEnd();

	glColor3f(0.45f, 0.619f, 0.694f);
	glBegin(GL_POLYGON);
	glVertex2f(3.25, -1.26);
	glVertex2f(3.8, -1.2);
	glVertex2f(3.494, -0.9);
	glEnd();

	glColor3f(0.262f, 0.462f, 0.5294f);
	glBegin(GL_POLYGON);
	glVertex2f(4.015, -0.86);
	glVertex2f(3.8, -1.2);
	glVertex2f(3.494, -0.9);
	glEnd();

	glColor3f(0.361f, 0.525f, 0.5882f);
	glBegin(GL_POLYGON);
	glVertex2f(4.015, -0.86);
	glVertex2f(3.8, -1.2);
	glVertex2f(4.1, -1.13);
	glVertex2f(4.095, -0.984);
	glEnd();

	glColor3f(0.160f, 0.364f, 0.419f);
	glBegin(GL_POLYGON);
	glVertex2f(3.25, -1.26);
	glVertex2f(2.645, -0.82);
	glVertex2f(2.81, -1.27);
	glEnd();

	glColor3f(0.09f, 0.29f, 0.388f);
	glBegin(GL_POLYGON);
	glVertex2f(2.45, -1.24);
	glVertex2f(2.645, -0.82);
	glVertex2f(2.81, -1.27);
	glEnd();

	glColor3f(0.109f, 0.294f, 0.3568f);
	glBegin(GL_POLYGON);
	glVertex2f(3.494, -0.9);
	glVertex2f(2.645, -0.82);
	glVertex2f(3.25, -1.26);
	glEnd();

	glColor3f(0.584f, 0.525f, 0.639f);
	glBegin(GL_POLYGON);
	glVertex2f(3.494, -0.9);
	glVertex2f(2.645, -0.82);
	glVertex2f(3.02, -0.68);
	glEnd();


	glColor3f(0.533f, 0.413f, 0.392f);
	glBegin(GL_POLYGON);
	glVertex2f(3.494, -0.9);
	glVertex2f(3.68, -0.6);
	glVertex2f(3.02, -0.68);
	glEnd();

	glColor3f(0.705f, 0.592f, 0.6627f);
	glBegin(GL_POLYGON);
	glVertex2f(3.41, -0.27);
	glVertex2f(3.68, -0.6);
	glVertex2f(3.02, -0.68);
	glEnd();

	glColor3f(0.592f, 0.454f, 0.5215f);
	glBegin(GL_POLYGON);
	glVertex2f(3.41, -0.27);
	glVertex2f(3.68, -0.6);
	glVertex2f(3.86, -0.44);
	glEnd();

	glColor3f(0.564f, 0.537f, 0.6313f);
	glBegin(GL_POLYGON);
	glVertex2f(2.61, -0.22);
	glVertex2f(3.02, -0.68);
	glVertex2f(2.645, -0.82);
	glEnd();

	glColor3f(0.129f, 0.321f, 0.388f);
	glBegin(GL_POLYGON);
	glVertex2f(1.62, -1.18);
	glVertex2f(1.524, -0.63);
	glVertex2f(2.05, -0.62);
	glVertex2f(1.95, -0.84);
	glEnd();
}
/*
void shade_turtle() {
	//cout << "Shading Turtle";
	glColor3f(0.73f, 0.36f, 0.17f); //Triangle just above bottom left leg
	glBegin(GL_POLYGON);			//Beginning of Turtle Body
	glVertex2f(8.3, 6.0);
	glVertex2f(10.4, 5.9);
	glVertex2f(9.5, 7.6);
	glEnd();

	glColor3f(0.73f, 0.32f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(11.8, 6.4);
	glVertex2f(10.4, 5.9);
	glVertex2f(9.5, 7.6);
	glEnd();

	glColor3f(0.81f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(11.2, 9.3);
	glVertex2f(9.5, 7.6);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(11.8, 6.4);
	glVertex2f(11.2, 9.3);
	glVertex2f(9.5, 7.6);
	glEnd();

	glColor3f(0.54f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(11.8, 6.4);
	glVertex2f(11.2, 9.3);
	glVertex2f(14.4, 8.0);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(11.2, 9.3);
	glVertex2f(14.4, 8.0);
	glVertex2f(13.1, 12.0);
	glEnd();

	glColor3f(0.64f, 0.55f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(14.4, 8.0);
	glVertex2f(15.7, 9.7);
	glEnd();

	glColor3f(0.64f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(16.1, 11.6);
	glVertex2f(15.7, 9.7);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.41f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(16.1, 11.6);
	glVertex2f(14.4, 14.8);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.21f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(12.3, 15.4);
	glVertex2f(14.4, 14.8);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(12.3, 15.4);
	glVertex2f(10.4, 15.1);
	glEnd();
	
	glColor3f(0.73f, 0.32f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(9.8, 12.0);
	glVertex2f(10.4, 15.1);
	glEnd();

	glColor3f(0.81f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(7.7, 14.0);
	glVertex2f(9.8, 12.0);
	glVertex2f(10.4, 15.1);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(7.7, 14.0);
	glVertex2f(9.8, 12.0);
	glVertex2f(6.9, 11.5);
	glEnd();
	
	glColor3f(0.64f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(7.7, 14.0);
	glVertex2f(5.6, 12.1);
	glVertex2f(6.9, 11.5);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.41f);
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 10.3);
	glVertex2f(5.6, 12.1);
	glVertex2f(6.9, 11.5);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.21f);
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 10.3);
	glVertex2f(8.0, 9.5);
	glVertex2f(6.9, 11.5);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 10.3);
	glVertex2f(8.0, 9.5);
	glVertex2f(4.9, 8.1);
	glEnd();
	///
	glColor3f(0.76f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(4.9, 8.1);
	glVertex2f(5.6, 7.0);
	glEnd();

	glColor3f(0.54f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(8.3, 6.0);
	glVertex2f(5.6, 7.0);
	glEnd();

	glColor3f(0.44f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(8.3, 6.0);
	glVertex2f(9.5, 7.6);
	glEnd();

	glColor3f(0.54f, 0.45f, 0.51f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(6.9, 11.5);
	glVertex2f(9.8, 12.0);
	glEnd();

	glColor3f(0.64f, 0.55f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(8.0, 9.5);
	glVertex2f(11.2, 9.3);
	glVertex2f(9.8, 12.0);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(13.1, 12.0);
	glVertex2f(11.2, 9.3);
	glVertex2f(9.8, 12.0);
	glEnd(); ///END OF TURTLE BODY

	glColor3f(0.97f, 0.91f, 0.85f);//Tail
	glBegin(GL_POLYGON);
	glVertex2f(4.1, 6.0);
	glVertex2f(5.6, 7.0);
	glVertex2f(4.9, 8.1);
	glEnd();

	//TURTLE BOTTOM LEFT LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(4.7, 3.8);
	glVertex2f(7.3, 5.0);
	glVertex2f(7.5, 2.9);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.6);
	glVertex2f(7.3, 5.0);
	glVertex2f(7.5, 2.9);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.6);
	glVertex2f(8.1, 4.6);
	glVertex2f(9.1, 4.7);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(9.8, 3.6);
	glVertex2f(8.3, 6.0);
	glVertex2f(10.4, 5.9);
	glEnd();

	//TURTLE BOTTOM Right LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(13.9, 3.9);
	glVertex2f(16.6, 5.1);
	glVertex2f(15.0, 6.7);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(15.0, 6.7);
	glVertex2f(16.6, 5.1);
	glVertex2f(18.0, 8.0);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(16.4, 7.3);
	glVertex2f(15.6, 8.0);
	glVertex2f(18.0, 8.0);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(15.7, 9.7);
	glVertex2f(14.4, 8.0);
	glVertex2f(18.0, 8.0);
	glEnd();

	//TURTLE TOP Right LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(5.8, 16.9);
	glVertex2f(9.0, 16.0);
	glVertex2f(8.9, 18.0);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(9.0, 16.0);
	glVertex2f(8.9, 18.0);
	glVertex2f(11.9, 17.5);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(11.9, 17.5);
	glVertex2f(11.0, 16.1);
	glVertex2f(11.0, 17.1);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(11.9, 17.5);
	glVertex2f(10.4, 15.1);
	glVertex2f(12.3, 15.4);
	glEnd();

	//TURTLE TOP LEFT LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, 10.3);
	glVertex2f(1.0, 7.5);
	glVertex2f(3.2, 9.7);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, 10.3);
	glVertex2f(3.2, 12.5);
	glVertex2f(3.2, 9.7);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(3.2, 12.5);
	glVertex2f(3.2, 10.7);
	glVertex2f(3.8, 11.6);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(3.2, 12.5);
	glVertex2f(5.6, 12.1);
	glVertex2f(5.0, 10.3);
	glEnd();


	//TURTLE HEAD
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(14.8, 14.0);
	glVertex2f(16.7, 15.2);
	glVertex2f(15.3, 13.1);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(16.7, 15.2);
	glVertex2f(15.3, 13.1);
	glVertex2f(17.8, 13.1);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(15.3, 13.1);
	glVertex2f(17.8, 13.1);
	glVertex2f(15.7, 12.3);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(16.7, 15.2);
	glVertex2f(19.1, 15.2);
	glVertex2f(17.8, 13.1);
	glEnd();
}
*/
void shade_turtle() {
	//cout << "Shading Turtle";
	glColor3f(0.73f, 0.36f, 0.17f); //Triangle just above bottom left leg
	glBegin(GL_POLYGON);			//Beginning of Turtle Body
	glVertex2f(4.3, 6.0);
	glVertex2f(6.4, 5.9);
	glVertex2f(5.5, 7.6);
	glEnd();

	glColor3f(0.73f, 0.32f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(7.8, 6.4);
	glVertex2f(6.4, 5.9);
	glVertex2f(5.5, 7.6);
	glEnd();

	glColor3f(0.81f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(7.2, 9.3);
	glVertex2f(5.5, 7.6);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(7.8, 6.4);
	glVertex2f(7.2, 9.3);
	glVertex2f(5.5, 7.6);
	glEnd();

	glColor3f(0.54f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(7.8, 6.4);
	glVertex2f(7.2, 9.3);
	glVertex2f(10.4, 8.0);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(7.2, 9.3);
	glVertex2f(10.4, 8.0);
	glVertex2f(9.1, 12.0);
	glEnd();

	glColor3f(0.64f, 0.55f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(10.4, 8.0);
	glVertex2f(11.7, 9.7);
	glEnd();

	glColor3f(0.64f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(12.1, 11.6);
	glVertex2f(11.7, 9.7);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.41f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(12.1, 11.6);
	glVertex2f(10.4, 14.8);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.21f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(8.3, 15.4);
	glVertex2f(10.4, 14.8);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(8.3, 15.4);
	glVertex2f(6.4, 15.1);
	glEnd();

	glColor3f(0.73f, 0.32f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(5.8, 12.0);
	glVertex2f(6.4, 15.1);
	glEnd();

	glColor3f(0.81f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(3.7, 14.0);
	glVertex2f(5.8, 12.0);
	glVertex2f(6.4, 15.1);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(3.7, 14.0);
	glVertex2f(5.8, 12.0);
	glVertex2f(2.9, 11.5);
	glEnd();

	glColor3f(0.64f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(3.7, 14.0);
	glVertex2f(1.6, 12.1);
	glVertex2f(2.9, 11.5);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.41f);
	glBegin(GL_POLYGON);
	glVertex2f(1.0, 10.3);
	glVertex2f(1.6, 12.1);
	glVertex2f(2.9, 11.5);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.21f);
	glBegin(GL_POLYGON);
	glVertex2f(1.0, 10.3);
	glVertex2f(4.0, 9.5);
	glVertex2f(2.9, 11.5);
	glEnd();

	glColor3f(0.74f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(1.0, 10.3);
	glVertex2f(4.0, 9.5);
	glVertex2f(0.9, 8.1);
	glEnd();
	///
	glColor3f(0.76f, 0.53f, 0.37f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(0.9, 8.1);
	glVertex2f(1.6, 7.0);
	glEnd();

	glColor3f(0.54f, 0.35f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(4.3, 6.0);
	glVertex2f(1.6, 7.0);
	glEnd();

	glColor3f(0.44f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(4.3, 6.0);
	glVertex2f(5.5, 7.6);
	glEnd();

	glColor3f(0.54f, 0.45f, 0.51f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(2.9, 11.5);
	glVertex2f(5.8, 12.0);
	glEnd();

	glColor3f(0.64f, 0.55f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(4.0, 9.5);
	glVertex2f(7.2, 9.3);
	glVertex2f(5.8, 12.0);
	glEnd();

	glColor3f(0.64f, 0.45f, 0.31f);
	glBegin(GL_POLYGON);
	glVertex2f(9.1, 12.0);
	glVertex2f(7.2, 9.3);
	glVertex2f(5.8, 12.0);
	glEnd(); ///END OF TURTLE BODY

	glColor3f(0.97f, 0.91f, 0.85f);//Tail
	glBegin(GL_POLYGON);
	glVertex2f(0.1, 6.0);
	glVertex2f(1.6, 7.0);
	glVertex2f(0.9, 8.1);
	glEnd();

	//TURTLE BOTTOM LEFT LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(0.7, 3.8);
	glVertex2f(3.3, 5.0);
	glVertex2f(3.5, 2.9);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(5.8, 3.6);
	glVertex2f(3.3, 5.0);
	glVertex2f(3.5, 2.9);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(5.8, 3.6);
	glVertex2f(4.1, 4.6);
	glVertex2f(5.1, 4.7);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(5.8, 3.6);
	glVertex2f(4.3, 6.0);
	glVertex2f(6.4, 5.9);
	glEnd();

	//TURTLE BOTTOM Right LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(9.9, 3.9);
	glVertex2f(12.6, 5.1);
	glVertex2f(11.0, 6.7);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(11.0, 6.7);
	glVertex2f(12.6, 5.1);
	glVertex2f(14.0, 8.0);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(12.4, 7.3);
	glVertex2f(11.6, 8.0);
	glVertex2f(14.0, 8.0);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(11.7, 9.7);
	glVertex2f(10.4, 8.0);
	glVertex2f(14.0, 8.0);
	glEnd();

	//TURTLE TOP Right LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(1.8, 16.9);
	glVertex2f(5.0, 16.0);
	glVertex2f(4.9, 18.0);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(5.0, 16.0);
	glVertex2f(4.9, 18.0);
	glVertex2f(7.9, 17.5);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(7.9, 17.5);
	glVertex2f(7.0, 16.1);
	glVertex2f(7.0, 17.1);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(7.9, 17.5);
	glVertex2f(6.4, 15.1);
	glVertex2f(8.3, 15.4);
	glEnd();

	//TURTLE TOP LEFT LEG
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.9, 10.3);
	glVertex2f(-3.0, 7.5);
	glVertex2f(-0.8, 9.7);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.9, 10.3);
	glVertex2f(-0.8, 12.5);
	glVertex2f(-0.8, 9.7);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 12.5);
	glVertex2f(-0.8, 10.7);
	glVertex2f(-0.2, 11.6);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8, 12.5);
	glVertex2f(1.6, 12.1);
	glVertex2f(1.0, 10.3);
	glEnd();


	//TURTLE HEAD
	glColor3f(0.21f, 0.29f, 0.17f);
	glBegin(GL_POLYGON);
	glVertex2f(10.8, 14.0);
	glVertex2f(12.7, 15.2);
	glVertex2f(11.3, 13.1);
	glEnd();

	glColor3f(0.32f, 0.38f, 0.22f);
	glBegin(GL_POLYGON);
	glVertex2f(12.7, 15.2);
	glVertex2f(11.3, 13.1);
	glVertex2f(13.8, 13.1);
	glEnd();

	glColor3f(0.67f, 0.63f, 0.39f);
	glBegin(GL_POLYGON);
	glVertex2f(11.3, 13.1);
	glVertex2f(13.8, 13.1);
	glVertex2f(11.7, 12.3);
	glEnd();

	glColor3f(0.41f, 0.46f, 0.30f);
	glBegin(GL_POLYGON);
	glVertex2f(12.7, 15.2);
	glVertex2f(15.1, 15.2);
	glVertex2f(13.8, 13.1);
	glEnd();
}

void fish_3()
{
	glColor3f(0.972f, 1.0f, 0.051f);
	glBegin(GL_POLYGON);
	glVertex2f(0.702, 0.044);
	glVertex2f(0.688, -0.439);
	glVertex2f(1.088, -0.283);
	glEnd();

	glColor3f(0.99f, 0.7647f, 0.2117f);
	glBegin(GL_POLYGON);
	glVertex2f(0.702, 0.044);
	glVertex2f(1.1, -0.194);
	glVertex2f(1.088, -0.283);
	glEnd();

	glColor3f(0.99f, 0.7411f, 0.121f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1004, -0.3383);
	glVertex2f(0.688, -0.439);
	glVertex2f(1.088, -0.283);
	glEnd();

	glColor3f(0.913f, 0.9333f, 0.403f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1004, -0.3383);
	glVertex2f(1.7, -0.444);
	glVertex2f(1.088, -0.283);
	glEnd();

	glColor3f(0.8509f, 0.870f, 0.3294f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, -0.194);
	glVertex2f(1.7, -0.444);
	glVertex2f(1.088, -0.283);
	glEnd();

	glColor3f(1.0f, 0.4627f, 0.1019f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1, -0.194);
	glVertex2f(1.7, -0.444);
	glVertex2f(1.804, -0.212);
	glEnd();

	glColor3f(1.0f,0.6f,0.29f);
	glBegin(GL_POLYGON);
	glVertex2f(1.1004, -0.3383);
	glVertex2f(2.25, -0.539);
	glVertex2f(1.777, -0.597);
	glEnd();

	glColor3f(1.0f, 1.0f, 0.2078f);
	glBegin(GL_POLYGON);
	glVertex2f(1.426, -0.062);
	glVertex2f(1.478, -0.211);
	glVertex2f(1.804, -0.212);
	glEnd();

	glColor3f(1.0f,0.6196f,0.117f);
	glBegin(GL_POLYGON);
	glVertex2f(1.777, -0.597);
	glVertex2f(2.252, -0.539);
	glVertex2f(2.222, -0.67);
	glEnd();

	glColor3f(1.0f, 0.898f, 0.207f);
	glBegin(GL_POLYGON);
	glVertex2f(1.881, -0.723);
	glVertex2f(1.9263, -0.507);
	glVertex2f(2.25, -0.539);
	glEnd();

	glColor3f(1.0f, 0.7176f, 0.3411f);
	glBegin(GL_POLYGON);
	glVertex2f(1.7, -0.444);
	glVertex2f(1.804, -0.212);
	glVertex2f(2.262, -0.34);
	glVertex2f(2.25, -0.539);
	glEnd();

	//face
	glColor3f(0.960f, 1.0f, 0.345f);
	glBegin(GL_POLYGON);
	glVertex2f(2.553, -0.556);
	glVertex2f(2.25, -0.539);
	glVertex2f(2.262, -0.34);
	glEnd();

	glColor3f(0.917f, 0.960f, 0.3215f);
	glBegin(GL_POLYGON);
	glVertex2f(2.553, -0.556);
	glVertex2f(2.25, -0.539);
	glVertex2f(2.23, -0.66);
	glEnd();

}

void nemo()
{
	//tail
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.916, -0.127);
	glVertex2f(-2.856, -0.264);
	glVertex2f(-2.494, -0.333);
	glVertex2f(-2.53, -0.25);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.916, -0.127);
	glVertex2f(-2.856, -0.264);
	glVertex2f(-2.93, -0.6);
	glVertex2f(-3.06, -0.31);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.825, -1.235);
	glVertex2f(-2.992, -1.167);
	glVertex2f(-3.06, -0.31);
	glVertex2f(-2.93, -0.6);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.992, -1.167);
	glVertex2f(-2.825, -1.235);
	glVertex2f(-2.64, -1.42);
	glVertex2f(-2.856, -1.47);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.54, -1.65);
	glVertex2f(-2.338, -1.563);
	glVertex2f(-2.64, -1.42);
	glVertex2f(-2.856, -1.47);
	glEnd();

	glColor3f(0.8549f, 0.298f, 0.145f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.825, -1.235);
	glVertex2f(-2.64, -1.42);
	glVertex2f(-2.338, -1.563);
	glVertex2f(-1.99, -1.25);
	glEnd();

	glColor3f(0.9529f, 0.3568f, 0.1411f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.856, -0.264);
	glVertex2f(-2.93, -0.6);
	glVertex2f(-2.825, -1.235);
	glVertex2f(-1.99, -1.25);
	glEnd();

	glColor3f(0.898f, 0.4235f, 0.1411f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.856, -0.264);
	glVertex2f(-2.494, -0.333);
	glVertex2f(-1.99, -1.25);
	glEnd();

	//first white stripe by tail
	glColor3f(0.6823f, 0.6588f, 0.6078f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.56, -0.21);
	glVertex2f(-1.736, -0.957);
	glVertex2f(-1.736, -1.246);
	glVertex2f(-1.99, -1.25);
	glEnd();

	glColor3f(0.6823f, 0.6588f, 0.6078f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.736, -0.957);
	glVertex2f(-1.736, -1.246);
	glVertex2f(-1.56, -1.013);
	glEnd();


	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.56, -0.21);
	glVertex2f(-2.034, -0.19);
	glVertex2f(-1.736, -0.957);
	glEnd();

	//bottom black outline
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.286, -1.5);
	glVertex2f(-1.99, -1.25);
	glVertex2f(-1.736, -1.246);
	glVertex2f(-1.702, -1.394);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.736, -1.246);
	glVertex2f(-1.702, -1.394);
	glVertex2f(-1.64, -1.51);
	glVertex2f(-1.56, -1.25);
	glVertex2f(-1.56, -1.013);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.64, -1.51);
	glVertex2f(-1.406, -1.687);
	glVertex2f(-1.33, -1.41);
	glVertex2f(-1.56, -1.25);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.724, -1.565);
	glVertex2f(-1.406, -1.687);
	glVertex2f(-1.33, -1.41);
	glVertex2f(-0.685, -1.37);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.724, -1.565);
	glVertex2f(-0.685, -1.37);
	glVertex2f(-0.243, -1.07);
	glVertex2f(-0.22, -1.24);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.25, -1.07);
	glVertex2f(0.367, -0.725);
	glVertex2f(1.05, -0.82);
	glVertex2f(0.583, -1.26);
	glEnd();

	//2nd orange stripe from the back
	glColor3f(0.760f, 0.2274f, 0.1019f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.56, -1.013);
	glVertex2f(-1.56, -1.25);
	glVertex2f(-1.33, -1.41);
	glVertex2f(-0.685, -1.37);
	glEnd();

	glColor3f(0.709f, 0.2117f, 0.137f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.736, -0.957);
	glVertex2f(-0.685, -1.37);
	glVertex2f(-0.724, -0.105);
	glVertex2f(-1.221, -0.637);
	glEnd();

	glColor3f(0.756f, 0.2549f, 0.1019f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.736, -0.957);
	glVertex2f(-1.221, -0.637);
	glVertex2f(-2.034, -0.19);
	glEnd();


	glColor3f(0.8823f, 0.419f, 0.1803f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.944, -0.13);
	glVertex2f(-1.221, -0.637);
	glVertex2f(-2.034, -0.19);
	glEnd();

	glColor3f(0.9137f, 0.435f, 0.1333f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.944, -0.13);
	glVertex2f(-2.1, 0.23);
	glVertex2f(-0.724, -0.105);
	glVertex2f(-1.221, -0.637);
	glEnd();

	glColor3f(0.874f, 0.360f, 0.1176f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.29, 0.78);
	glVertex2f(-2.1, 0.23);
	glVertex2f(-0.724, -0.105);
	glVertex2f(-0.75, 0.284);
	glEnd();

	glColor3f(0.964f, 0.545f, 0.1411f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.29, 0.78);
	glVertex2f(-2.1, 0.23);
	glVertex2f(-2.003, 0.78);
	glVertex2f(-1.747, 1.05);
	glEnd();

	glColor3f(0.623f, 0.176f, 0.1019f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.75, 0.284);
	glVertex2f(-0.685, -1.37);
	glVertex2f(-0.243, -1.07);
	glVertex2f(-0.23, -0.974);
	glEnd();

	//rest of black accents
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.1, 0.23);
	glVertex2f(-2.1, 0.84);
	glVertex2f(-2.003, 0.783);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-2.1, 0.84);
	glVertex2f(-2.003, 0.783);
	glVertex2f(-1.747, 1.05);
	glVertex2f(-1.8, 1.17);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.36, 1.115);
	glVertex2f(-1.29, 0.78);
	glVertex2f(-1.747, 1.05);
	glVertex2f(-1.8, 1.17);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.36, 1.115);
	glVertex2f(-1.29, 0.78);
	glVertex2f(-0.75, 0.284);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.995, 1.35);
	glVertex2f(-0.665, 0.985);
	glVertex2f(0.174, 0.65);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.487, 0.487);
	glVertex2f(0.077, 0.532);
	glVertex2f(-0.127, 0.654);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.174, 0.397);
	glVertex2f(0.077, 0.532);
	glVertex2f(-0.127, 0.654);
	glVertex2f(-0.36, 0.615);
	glEnd();


	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.174, 0.397);
	glVertex2f(-0.22, 0.064);
	glVertex2f(-0.484, 0.174);
	glVertex2f(-0.36, 0.615);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.033, -0.334);
	glVertex2f(-0.22, 0.064);
	glVertex2f(-0.484, 0.174);
	glVertex2f(-0.21, -0.44);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.033, -0.334);
	glVertex2f(0.242, -0.574);
	glVertex2f(0.16, -0.7);
	glVertex2f(-0.21, -0.44);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.646, -0.546);
	glVertex2f(0.242, -0.574);
	glVertex2f(0.16, -0.7);
	glVertex2f(0.367, -0.725);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.995, 1.35);
	glVertex2f(-1.154, 1.44);
	glVertex2f(-1.13, 1.61);
	glVertex2f(-0.86, 1.685);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.295, 2.074);
	glVertex2f(-0.75, 1.96);
	glVertex2f(-1.13, 1.61);
	glVertex2f(-0.86, 1.685);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.295, 2.074);
	glVertex2f(-0.13, 2.14);
	glVertex2f(0.06, 2.07);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.084, 1.844);
	glVertex2f(1.234, 1.82);
	glVertex2f(0.91, 1.324);
	glVertex2f(0.86, 1.374);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.806, 1.104);
	glVertex2f(0.87, 0.91);
	glVertex2f(0.91, 1.324);
	glVertex2f(0.86, 1.374);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.806, 1.104);
	glVertex2f(0.87, 0.91);
	glVertex2f(1.015, 0.596);
	glVertex2f(1.05, 0.477);
	glVertex2f(0.68, 0.86);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.53, 0.07);
	glVertex2f(1.474, 0.293);
	glVertex2f(1.015, 0.596);
	glVertex2f(1.05, 0.477);
	glVertex2f(1.19, 0.22);
	glEnd();


	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.973, 0.06);
	glVertex2f(2.06, 0.174);
	glVertex2f(1.785, 0.409);
	glVertex2f(1.72, 0.3);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.539, 0.328);
	glVertex2f(1.48, 0.585);
	glVertex2f(1.445, 0.733);
	glVertex2f(1.785, 0.409);
	glVertex2f(1.72, 0.3);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.445, 0.733);
	glVertex2f(1.48, 0.585);
	glVertex2f(1.33, 0.836);
	glVertex2f(1.414, 0.861);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.376, 1.165);
	glVertex2f(1.298, 1.216);
	glVertex2f(1.33, 0.836);
	glVertex2f(1.414, 0.861);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.376, 1.165);
	glVertex2f(1.298, 1.216);
	glVertex2f(1.55, 1.752);
	glVertex2f(1.666, 1.75);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.541, 1.31);
	glVertex2f(1.64, 1.474);
	glVertex2f(1.81, 1.35);
	glVertex2f(1.677, 1.19);
	glEnd();

	//middle white stripe
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-1.36, 1.115);
	glVertex2f(-1.154, 1.44);
	glVertex2f(-0.995, 1.35);
	glVertex2f(-0.665, 0.985);
	glVertex2f(-0.75, 0.284);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.484, 0.174);
	glVertex2f(-0.36, 0.615);
	glVertex2f(-0.665, 0.985);
	glVertex2f(-0.75, 0.284);
	glEnd();


	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.487, 0.487);
	glVertex2f(-0.127, 0.654);
	glVertex2f(-0.36, 0.615);
	glVertex2f(-0.665, 0.985);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.75, 0.284);
	glVertex2f(-0.484, 0.174);
	glVertex2f(-0.21, -0.44);
	glVertex2f(-0.23, -0.974);
	glEnd();

	glColor3f(0.537f, 0.6039f, 0.533f);
	glBegin(GL_POLYGON);
	glVertex2f(0.25, -1.07);
	glVertex2f(0.367, -0.725);
	glVertex2f(0.16, -0.7);
	glVertex2f(-0.21, -0.44);
	glVertex2f(-0.22, -1.24);
	glEnd();

	//third white stripe
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.234, 1.82);
	glVertex2f(1.55, 1.752);
	glVertex2f(1.298, 1.216);
	glVertex2f(0.91, 1.324);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.298, 1.216);
	glVertex2f(1.33, 0.836);
	glVertex2f(1.48, 0.585);
	glVertex2f(1.539, 0.328);
	glVertex2f(1.474, 0.293);
	glVertex2f(1.015, 0.596);
	glVertex2f(0.87, 0.914);
	glVertex2f(0.91, 1.324);
	glEnd();

	glColor3f(0.596f, 0.8509f, 0.8352f);
	glBegin(GL_POLYGON);
	glVertex2f(1.474, 0.293);
	glVertex2f(1.539, 0.328);
	glVertex2f(1.72, 0.3);
	glVertex2f(1.973, 0.06);
	glVertex2f(1.53, 0.07);
	glEnd();

	//orange middle

	glColor3f(0.870f, 0.4f, 0.168f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.995, 1.35);
	glVertex2f(-0.86, 1.685);
	glVertex2f(-0.295, 2.074);
	glVertex2f(0.06, 2.07);
	glVertex2f(0.22, 1.965);
	glVertex2f(-0.45, 1.63);
	glEnd();


	glColor3f(0.976f, 0.839f, 0.196f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.995, 1.35);
	glVertex2f(-0.45, 1.63);
	glVertex2f(0.22, 1.965);
	glVertex2f(0.63, 1.44);
	glEnd();

	glColor3f(1.0f, 0.713f, 0.192f);
	glBegin(GL_POLYGON);
	glVertex2f(1.084, 1.844);
	glVertex2f(0.674, 1.965);
	glVertex2f(0.22, 1.965);
	glVertex2f(0.63, 1.44);
	glEnd();

	glColor3f(0.9921f, 0.494f, 0.0823f);
	glBegin(GL_POLYGON);
	glVertex2f(0.806, 1.104);
	glVertex2f(0.63, 1.44);
	glVertex2f(0.174, 0.65);
	glEnd();

	glColor3f(0.9058f, 0.407f, 0.2274f);
	glBegin(GL_POLYGON);
	glVertex2f(0.806, 1.104);
	glVertex2f(0.63, 1.44);
	glVertex2f(0.86, 1.374);
	glEnd();

	glColor3f(0.772f, 0.321f, 0.2117f);
	glBegin(GL_POLYGON);
	glVertex2f(1.084, 1.844);
	glVertex2f(0.63, 1.44);
	glVertex2f(0.86, 1.374);
	glEnd();

	glColor3f(0.925f, 0.470f, 0.137f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.995, 1.35);
	glVertex2f(0.63, 1.44);
	glVertex2f(0.174, 0.65);
	glEnd();

	glColor3f(0.850f, 0.352f, 0.164f);
	glBegin(GL_POLYGON);
	glVertex2f(0.806, 1.104);
	glVertex2f(0.68, 0.86);
	glVertex2f(0.606, 0.703);
	glVertex2f(0.65, 0.406);
	glVertex2f(0.487, 0.487);
	glVertex2f(0.174, 0.65);
	glEnd();

	glColor3f(0.6270f, 0.235f, 0.1411f);
	glBegin(GL_POLYGON);
	glVertex2f(1.05, 0.477);
	glVertex2f(0.68, 0.86);
	glVertex2f(0.606, 0.703);
	glVertex2f(0.65, 0.406);
	glVertex2f(1.19, 0.22);
	glEnd();


	glColor3f(0.9215f, 0.580f, 0.164f);
	glBegin(GL_POLYGON);
	glVertex2f(0.077, 0.532);
	glVertex2f(-0.174, 0.397);
	glVertex2f(-0.22, 0.064);
	glVertex2f(0.65, 0.406);
	glEnd();

	glColor3f(0.7843f, 0.2f, 0.1568f);
	glBegin(GL_POLYGON);
	glVertex2f(0.43, 0.167);
	glVertex2f(-0.033, -0.334);
	glVertex2f(-0.22, 0.064);
	glVertex2f(0.65, 0.406);
	glEnd();


	glColor3f(0.854f, 0.384f, 0.243f);
	glBegin(GL_POLYGON);
	glVertex2f(0.43, 0.167);
	glVertex2f(0.726, 0.333);
	glVertex2f(0.65, 0.406);
	glEnd();

	glColor3f(0.6313f, 0.2f, 0.149f);
	glBegin(GL_POLYGON);
	glVertex2f(0.43, 0.167);
	glVertex2f(0.726, 0.333);
	glVertex2f(0.885, -0.295);
	glVertex2f(-0.033, -0.334);
	glEnd();

	glColor3f(0.725f, 0.243f, 0.145f);
	glBegin(GL_POLYGON);
	glVertex2f(0.242, -0.574);
	glVertex2f(0.646, -0.546);
	glVertex2f(0.885, -0.295);
	glVertex2f(-0.033, -0.334);
	glEnd();

	glColor3f(0.419f, 0.105f, 0.054f);
	glBegin(GL_POLYGON);
	glVertex2f(0.885, -0.295);
	glVertex2f(1.42, -0.48);
	glVertex2f(1.05, -0.82);
	glVertex2f(0.646, -0.546);
	glEnd();

	glColor3f(0.419f, 0.105f, 0.054f);
	glBegin(GL_POLYGON);
	glVertex2f(0.367, -0.729);
	glVertex2f(1.05, -0.82);
	glVertex2f(0.646, -0.546);
	glEnd();

	glColor3f(0.392f, 0.0705f, 0.0509f);
	glBegin(GL_POLYGON);
	glVertex2f(0.885, -0.295);
	glVertex2f(0.726, 0.333);
	glVertex2f(0.65, 0.406);
	glVertex2f(1.19, 0.22);
	glVertex2f(1.42, -0.48);
	glEnd();

	glColor3f(0.63f, 0.243f, 0.149f);
	glBegin(GL_POLYGON);
	glVertex2f(0.68, 0.86);
	glVertex2f(0.606, 0.703);
	glVertex2f(0.65, 0.406);
	glVertex2f(1.19, 0.22);
	glVertex2f(1.05, 0.477);
	glEnd();

	glColor3f(0.278f, 0.0901f, 0.0274f);
	glBegin(GL_POLYGON);
	glVertex2f(1.42, -0.48);
	glVertex2f(1.19, 0.22);
	glVertex2f(1.53, 0.07);
	glVertex2f(1.973, 0.06);
	glEnd();

	//nemo face 
	glColor3f(0.964f, 0.898f, 0.274f);
	glBegin(GL_POLYGON);
	glVertex2f(1.45, 1.33);
	glVertex2f(1.666, 1.75);
	glVertex2f(1.88, 1.767);
	glVertex2f(1.82, 1.457);
	glVertex2f(1.64, 1.474);
	glEnd();

	glColor3f(0.984f, 0.9411f, 0.392f);
	glBegin(GL_POLYGON);
	glVertex2f(2.523, 1.321);
	glVertex2f(2.517, 1.42);
	glVertex2f(1.88, 1.767);
	glVertex2f(1.826, 1.52);
	glVertex2f(2.3, 0.987);
	glEnd();

	glColor3f(0.909f, 0.517f, 0.51764f);
	glBegin(GL_POLYGON);
	glVertex2f(2.523, 1.321);
	glVertex2f(2.636, 1.17);
	glVertex2f(2.4, 0.92);
	glVertex2f(2.278, 0.948);
	glEnd();

	glColor3f(0.6039f, 0.247f, 0.180f);
	glBegin(GL_POLYGON);
	glVertex2f(1.376, 1.165);
	glVertex2f(1.45, 1.33);
	glVertex2f(1.64, 1.474);
	glVertex2f(1.82, 1.457);
	glVertex2f(1.81, 1.35);
	glVertex2f(1.677, 1.19);
	glEnd();


	glColor3f(0.823f, 0.305f, 0.1176f);
	glBegin(GL_POLYGON);
	glVertex2f(1.376, 1.165);
	glVertex2f(1.83, 1.07);
	glVertex2f(1.81, 1.35);
	glVertex2f(1.677, 1.19);
	glEnd();

	glColor3f(0.9411f, 0.3333f, 0.176f);
	glBegin(GL_POLYGON);
	glVertex2f(1.376, 1.165);
	glVertex2f(1.83, 1.07);
	glVertex2f(2.278, 0.948);
	glVertex2f(2.4, 0.92);
	glVertex2f(2.24, 0.77);
	glVertex2f(1.445, 0.733);
	glVertex2f(1.414, 0.861);
	glEnd();


	glColor3f(0.9411f, 0.3333f, 0.176f);
	glBegin(GL_POLYGON);
	glVertex2f(2.6, 0.87);
	glVertex2f(2.636, 1.17);
	glVertex2f(2.4, 0.92);
	glVertex2f(2.24, 0.77);
	glVertex2f(1.445, 0.733);
	glVertex2f(2.416, 0.58);
	glEnd();

	glColor3f(0.635f, 0.207f, 0.149f);
	glBegin(GL_POLYGON);
	glVertex2f(2.06, 0.174);
	glVertex2f(1.785, 0.409);
	glVertex2f(1.445, 0.733);
	glVertex2f(2.416, 0.58);
	glEnd();

	glColor3f(0.929f, 0.435f, 0.1333f);
	glBegin(GL_POLYGON);
	glVertex2f(1.826, 1.52);
	glVertex2f(1.83, 1.07);
	glVertex2f(2.278, 0.948);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(1.541, 1.31);
	glVertex2f(1.64, 1.474);
	glVertex2f(1.81, 1.35);
	glVertex2f(1.677, 1.19);
	glEnd();
}
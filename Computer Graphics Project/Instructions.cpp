//libraries

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/glut.h>
#include <string.h>
#include "game.h"

extern bool instructions_clicked; 
extern char instructions1[15];
char instructions2[80]; 
char instructions3[80];
char instructions4[80]; 
char instructions5[80];
char instructions6[80];
char instructions7[80];
char instructions8[80];
char instructions9[80];

void instructions_screen()
{
	
	strcpy_s(instructions2, "1. Use the arrow keys to move the turtle");
	strcpy_s(instructions3, "2. Eat the pieces of algae for your health");
	strcpy_s(instructions4, "3. Avoid the pieces of plastic in the ocean");
	strcpy_s(instructions5, "4. Eating plastic will decrease your health");
	strcpy_s(instructions6, "5. Avoid predators such as sharks");
	strcpy_s(instructions7, "6. You have 1 attempt to finish the game");
	strcpy_s(instructions8, "7. Press P at anytime to pause the game");
	strcpy_s(instructions9, "Press B to return to the main screen");
	drawStrokeText(instructions1, -4.75, 8.0, 0, 80.0);
	drawStrokeText(instructions2, -10.0, 5.0, 0, 160.0);
	drawStrokeText(instructions3, -10.0, 3.0, 0, 160.0);
	drawStrokeText(instructions4, -10.0, 1.0, 0, 160.0);
	drawStrokeText(instructions5, -10.0, -1.0, 0, 160.0);
	drawStrokeText(instructions6, -10.0, -3.0, 0, 160.0);
	drawStrokeText(instructions7, -10.0, -5.0, 0, 160.0);
	drawStrokeText(instructions8, -10.0, -7.0, 0, 160.0);
	drawStrokeText(instructions9, -8.75, -9.0, 0, 160.0);
}
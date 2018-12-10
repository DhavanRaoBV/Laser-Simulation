#ifndef WEL_H
#define WEL_H

#include<stdio.h>
#include<GL/glut.h>
#include <stdlib.h>
#include<string.h>


void *font5=GLUT_BITMAP_8_BY_13;//all of these are different types of font present//smallest font
void *font6=GLUT_BITMAP_9_BY_15;//smallest
void *font0=GLUT_BITMAP_TIMES_ROMAN_24;//largest
void *font1=GLUT_BITMAP_TIMES_ROMAN_24;
void *font=GLUT_BITMAP_HELVETICA_18;//normal font


void output(int x,int y,char *string,void *fontt)//for printing text
{
	int len,siz;
	glRasterPos2f(x,y);//specifies position for pixel operation
	len=(int) strlen(string);
	for(siz=0;siz<len;siz++)
	{
		glutBitmapCharacter(fontt,string[siz]);//can use bitmap font
	}
}


/*void myinit()//general beginning intializations
{
	glClearColor(1.0,1.0,1.0,1.0);
	glColor3f(0.0,0.0,1.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}
*/


void display1(void)      //front page
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1,0.1,1);
    output(180,440,"Mangalore Institute of Technology and Engineering",font0);//largest font//pass x,y axis,text,font
	glColor3f(1,0,0.5);
    output(205,375,"Computer Graphics And Visualization Lab",font);//normal font
	output(710,520,"",font);
    glColor3f(1,0,0);
    output(230,330,"A Mini Project on",font);
	glColor3f(1,0.5,0);
    output(218,300,"LASER SIMULATION",font0);
	glColor3f(1.0,0.0,1.0);
	output(50,250,"By: ",font);
    glColor3f(1.0,1.0,0.0);
	output(50,230,"Dhavan Rao B V                ",font);
	output(50,210,"Krishnamoorthy K Bhat              ",font);
	output(110,230,"       4MT15CS031",font);
	output(110,210,"       4MT15CS051",font);

   glColor3f(0.0,1.0,1.0);
	output(205,170,"Press ENTER key to view simulations",font);
  glColor3f(0.0,1.0,1.0);
	output(218,140,"Right click for the MENU",font);

    glColor3f(1.0,0.0,1.0);
	output(335,250,"Submitted to: ",font);
    glColor3f(1.0,1.0,0.0);
	output(335,230,"Mr.John Prakash",font);
	output(335,210,"Mr.Prashanth B.S",font);
        output(400,230,"       Sr.Asst.Professor",font);
	output(400,210,"       Asst.Professor",font);
	glColor3f(0.0,1.0,1.0);
	glutSwapBuffers();
	glFlush();
}





#endif 








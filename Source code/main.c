#include "wel.h"

#include<stdio.h>
#include<GL/glut.h>



GLint x1=250,y=150,x2=350,y2=150,x3=350,y3=200,x4=250,y4=200;
GLfloat theta[]={0.0,0.0,0.0};
GLint axis=2;
int a;

int flag=0;
int strflag=0;

void init(void)
{
    
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0,499.0,0.0,499.0);
     glMatrixMode(GL_MODELVIEW);
     
     
}


void icon()
{  //1
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,303);
     glVertex2d(120,303);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(120,310);
     glVertex2d(20,310);
     glEnd();
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,400);
     glVertex2d(120,400);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(120,410);
     glVertex2d(20,410);
     glEnd();
     
     
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(99,330);
      glVertex2d(99,380);
      glVertex2d(101,330);
      glVertex2d(101,380);
      glEnd();
      
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(97,380);
      glVertex2d(103,380);
      glVertex2f(100,389);
      glEnd();
      
      
      
     
     glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(60,313);
     glEnd();
     
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(100,413);
     glEnd(); 
     
     //lines
     glColor3f(1.0,1.0,1.0);
     glBegin(GL_LINES);
     glVertex2d(250,0);
     glVertex2d(250,450);
     glEnd();
     
      glBegin(GL_LINES);
      glVertex2d(0,250);
      glVertex2d(1000,250);
      glEnd();
     
      glBegin(GL_LINES);
      glVertex2d(0,450);
      glVertex2d(1000,450);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(4,350);
      glVertex2d(30,350);
      glVertex2d(4,353);
      glVertex2d(30,353);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(6,350);
      glVertex2d(10,353);
      glVertex2d(14,350);
      glVertex2d(18,353);
      glVertex2d(22,350);
      glVertex2d(24,353);
      glVertex2d(30,350);
      glEnd();
      
      
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(29,345);
      glVertex2d(29,357);
      glVertex2f(33,352);
      glEnd();
      
    //2
       glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(140,303);
     glVertex2d(240,303);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(240,310);
     glVertex2d(140,310);
     glEnd();
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(140,400);
     glVertex2d(240,400);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(240,410);
     glVertex2d(140,410);
     glEnd();
     
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(180,413);
     glEnd(); 
      
      
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(200,313);
     glEnd(); 
      
       glColor3f(1.0,1.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(179,335);
      glVertex2d(179,385);
      glVertex2d(181,335);
      glVertex2d(181,385);
      glEnd();
      
       glColor3f(1.0,1.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(177,335);
      glVertex2d(183,335);
      glVertex2f(180,325);
      glEnd();
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(204,350);
      glVertex2d(230,350);
      glVertex2d(204,353);
      glVertex2d(230,353);
      glEnd();
      
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(229,345);
      glVertex2d(229,357);
      glVertex2f(233,352);
      glEnd();
      
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(206,350);
      glVertex2d(210,353);
      glVertex2d(214,350);
      glVertex2d(218,353);
      glVertex2d(222,350);
      glVertex2d(226,353);
       glVertex2d(230,350);
      glEnd();
      
      
      
      //3
      glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(270,303);
     glVertex2d(370,303);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(370,310);
     glVertex2d(270,310);
     glEnd();
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(270,400);
     glVertex2d(370,400);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(370,410);
     glVertex2d(270,410);
     glEnd();
     
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(300,350);
     glVertex2d(390,350);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(390,356);
     glVertex2d(300,356);
     glEnd();
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(288,313);
     glEnd(); 
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(294,313);
     glEnd(); 
     
     
     glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(300,313);
     glEnd();
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(306,313);
     glEnd();
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(312,313);
     glEnd();
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(318,313);
     glEnd(); 
     
      
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(324,313);
     glEnd(); 
      
      
       
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(330,313);
     glEnd(); 
      
      
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(292,321);
     glEnd(); 
      
      
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(298,321);
     glEnd(); 
      
      
      
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(304,321);
     glEnd(); 
     
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(310,321);
     glEnd(); 
     
      glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(316,321);
     glEnd();
     
     
       glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(322,321);
     glEnd(); 
     
     
       glColor3f(1.0,1.0,1.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(328,321);
     glEnd(); 
     
     
     
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(288,413);
     glEnd();
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(298,413);
     glEnd();
     
     glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(308,413);
     glEnd();
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(318,413);
     glEnd();
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(328,413);
     glEnd();
     
      glColor3f(1.0,0.0,0.0);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(338,413);
     glEnd();
     
     
      glColor3f(0.0,10.0,0.2);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(327,372);
     glEnd();
     
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(278,330);
      glVertex2d(278,380);
      glVertex2d(280,330);
      glVertex2d(280,380);
      glEnd();
      
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(310,400);
      glVertex2d(320,365);
      glVertex2d(312,400);
      glVertex2d(322,365);
      glEnd();
      
       glColor3f(1.0,1.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(276,380);
      glVertex2d(282,380);
      glVertex2f(279,389);
      glEnd();
      
       glColor3f(1.0,1.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(318,365);
      glVertex2d(324,369);
      glVertex2f(322,360);
      glEnd();
      
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(250,350);
      glVertex2d(272,350);
      glVertex2d(250,353);
      glVertex2d(272,353);
      glEnd();
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(272,346);
      glVertex2d(272,357);
      glVertex2f(275,352);
      glEnd();

      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(250,370);
      glVertex2d(272,370);
      glVertex2d(250,373);
      glVertex2d(272,373);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(272,366);
      glVertex2d(272,377);
      glVertex2f(275,372);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(250,350);
      glVertex2d(254,353);
      glVertex2d(258,350);
      glVertex2d(262,353);
      glVertex2d(266,350);
      glVertex2d(270,353);
      glVertex2d(272,350);
      glEnd();
      
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(250,370);
      glVertex2d(254,373);
      glVertex2d(258,370);
      glVertex2d(262,373);
      glVertex2d(266,370);
      glVertex2d(270,373);
      glVertex2d(272,370);
      glEnd();
      
      
     
      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(330,360);
     glEnd();

    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(336,360);
     glEnd();
     
      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(342,360);
     glEnd();

    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(348,360);
     glEnd();
     
      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(354,360);
     glEnd();

      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(360,360);
     glEnd();
    
     glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(366,360);
     glEnd();
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(372,360);
     glEnd();
     
     
      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(378,360);
     glEnd();

    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(339,368);
     glEnd();
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(345,368);
     glEnd();
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(351,368);
     glEnd();
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(357,368);
     glEnd(); 
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(363,368);
     glEnd();
     
    glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(370,368);
     glEnd();
     
       glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(366,376);
     glEnd();

      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(360,376);
     glEnd();
     
      glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(354,376);
     glEnd();
     
     glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(348,376);
     glEnd();


     glColor3f(0.0,3.5,3.7);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(342,376);
     glEnd();


     glColor3f(1.0,0.0,0.0);
     glPointSize(10.5);
     glBegin(GL_POINTS);
     glVertex2d(323,384);
     glEnd();
     


      
       
      
      
      
   //4
      glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,90);
     glVertex2d(120,90);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(120,97);
     glVertex2d(20,97);
     glEnd();
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,190);
     glVertex2d(120,190);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(120,200);
     glVertex2d(20,200);
     glEnd();
     
     glColor3f(0.0,4.0,5.3);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(60,205);
     glEnd();
     
      glColor3f(1.0,1.0,1.2);
     glPointSize(11.5);
     glBegin(GL_POINTS);
     glVertex2d(90,101);
     glEnd();
     
     
     
     glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(4,130);
      glVertex2d(30,130);
      glVertex2d(4,134);
      glVertex2d(30,134);
      glEnd();
     
     
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(29,125);
      glVertex2d(29,139);
      glVertex2f(33,132);
      glEnd();
     
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(6,130);
      glVertex2d(10,134);
      glVertex2d(14,130);
      glVertex2d(18,134);
      glVertex2d(22,130);
      glVertex2d(24,134);
      glVertex2d(30,130);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(120,130);
      glVertex2d(146,130);
      glVertex2d(120,134);
      glVertex2d(146,134);
      glEnd();
      
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(146,126);
      glVertex2d(146,138);
      glVertex2f(149,133);
      glEnd();
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(122,130);
      glVertex2d(126,134);
      glVertex2d(130,130);
      glVertex2d(134,134);
      glVertex2d(138,130);
      glVertex2d(142,134);
      glVertex2d(146,130);
      glEnd();
      
      glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(120,154);
      glVertex2d(146,154);
      glVertex2d(120,158);
      glVertex2d(146,158);
      glEnd();
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
      glVertex2d(122,154);
      glVertex2d(126,158);
      glVertex2d(130,154);
      glVertex2d(134,158);
      glVertex2d(138,154);
      glVertex2d(142,158);
      glVertex2d(146,154);
      glEnd();
      
       glColor3f(1.0,0.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(146,150);
      glVertex2d(146,162);
      glVertex2f(149,157);
      glEnd();
      
      
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_LINES);
      glVertex2d(59,130);
      glVertex2d(59,180);
      glVertex2d(61,130);
      glVertex2d(61,180);
      glEnd();
      
      glColor3f(1.0,1.0,0.0);
      glBegin(GL_TRIANGLES);
      glVertex2d(56,130);
      glVertex2d(64,130);
      glVertex2f(60,122);
      glEnd();
      
      
      
      
}





void quad(int x1,int y,int x2,int y2,int x3,int y3,int x4,int y4)
{
          glClearColor(0.0,0.0,0.0,0.0);
          glColor3f(1.0,5.0,0.0);
          glBegin(GL_LINE_LOOP);
          glVertex2i(x1,y);
          glVertex2i(x2,y2);
          glVertex2i(x3,y3);
          glVertex2i(x4,y4);
          glEnd();
          glFlush();
          
}


void laser()
{
     GLint i;
     for(i=0;i<30;i+=3)
     {
                      quad(x1+i,y+i,x2+i,y2,x3+i,y3,x4+i,y4+i);
                     
       }
    
       glBegin(GL_POLYGON);
       glColor3f(1.0,0.0,0.0);
       glVertex2f(350,170);
       glVertex2f(590,170);
       glVertex2f(590,175);
       glVertex2f(350,175);
       glEnd();
}


void sphere()
{     
       
       glPushMatrix();
       glColor3f(0.0,0.0,5.0);
       glTranslated(345,195,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
       glPushMatrix();
       glColor3f(0.0,5.0,5.0);
       glTranslated(340,180,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        glPushMatrix();
       glColor3f(1.0,4.0,5.0);
       glTranslated(330,170,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        
        glPushMatrix();
       glColor3f(1.0,0.0,0.0);
       glTranslated(300,175,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        
        glPushMatrix();
       glColor3f(1.0,4.0,5.0);
       glTranslated(280,180,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
      
       glPushMatrix();
       glColor3f(0.0,3.0,4.0);
       glTranslated(290,195,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        glPushMatrix();
       glColor3f(0.0,0.0,5.0);
       glTranslated(310,194,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
       glPushMatrix();
       glColor3f(1.0,0.0,0.0);
       glTranslated(320,185,10);
       glScaled(2,4,6);
       glRotatef(30,1.0,0.0,0.0);
       glutSolidSphere(2,10,10);
       theta[axis]+=0.2;
       glPopMatrix();
       
}



void spin()
{
theta[axis]+=0.2;
if(theta[axis]>360.0) 
theta[axis]-=360.0;
glutPostRedisplay();
}




void Write(char *string)
{
    while(*string)
    {
                   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}


     

/*
void mymouse(int btn,int state,int x,int y)
{
if(btn==GLUT_RIGHT_BUTTON&&state==GLUT_DOWN) 
     glutIdleFunc(NULL);   

if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN) 
    glutIdleFunc(spin);
}
*/

void display()
{
    
     glClear(GL_COLOR_BUFFER_BIT);
     
     icon();
     
    
     
     glColor3f(1.0,1.0,1.0);
     glRasterPos2f(30,280);
     Write("1]ABSORPTION");
     
     glColor3f(1.5,3.5,4.0);
     glRasterPos2f(130,280);
     Write("2]SPONTANEOUS EMISSION");
     
     glColor3f(0.0,3.0,4.0);
     glRasterPos2f(70,460);
     Write("LASER -");                                                                                                                                        				
     
     glColor3f(1.0,2.1,0.8);
     glRasterPos2f(100,460);
     Write(" 'LIGHT");
     glColor3f(1.0,2.1,0.8);
     glRasterPos2f(135,460);
     Write("AMPLIFICATION by");
     glColor3f(1.0,2.1,0.8);
     glRasterPos2f(210,460);
     Write("STIMULATED  EMISSION  of    ");
     glColor3f(1.0,2.1,0.8);
     glRasterPos2f(310,460);
     Write(" RADIATION'");
     
     glColor3f(0.0,3.0,4.0);
     glRasterPos2f(355,460);
     Write("  (PRINCIPLE AND WORKING)..."); 

      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(9,400);
     Write("Ex");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(129,400);
     Write("Ex");
     
     
     glColor3f(1.0,1.0,1.0);
     glRasterPos2f(9,300);
     Write("Eg");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(129,300);
     Write("Eg");
     
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(400,350);
     Write("Metastable State (E2)");
     
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(380,375);
     Write("(n2>n1)         [E3-E2]");
     
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(340,320);
     Write("(n1)                                  [E3-E1]");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(400,400);
     Write("Excited State  (E3)");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(400,300);
     Write("Ground State  (E1)");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(130,90);
     Write("(E1)");
     
      glColor3f(1.0,1.0,1.0);
     glRasterPos2f(130,190);
     Write("(E2)");
     
     

      glColor3f(1.0,0.1,0.3);
     glRasterPos2f(270,260);
     Write("3]PUMPING AND POPULATION INVERSION");
     
     glColor3f(0.0,3.5,3.7);
     glRasterPos2f(30,50);
     Write("4]INDUCED AND STIMULATED EMISSION");
     
     glColor3f(1.0,1.0,1.0);
     glRasterPos2f(10,150);
     Write("hv=(E2-E1)");
     
      glColor3f(0.0,3.5,3.7);
     glRasterPos2f(150,140);
     Write("coherent beam");
     
     glColor3f(1.0,0.1,0.3);
     glRasterPos2f(145,220);
     Write("Incident light gets amplified");
      glColor3f(1.0,0.1,0.3);
     glRasterPos2f(168,200);
     Write("& appears as");
     glColor3f(0.0,3.0,4.0);
     glRasterPos2f(165,180);
     Write("LASER BEAM"); 
     
     
      glColor3f(0.0,1.0,0.0);
     glRasterPos2f(385,130);
     Write("Coherent beam"); 
     
     glColor3f(1.3,1.7,5.0);
     glRasterPos2f(365,110);
     Write("Monochromatic-single wavelength"); 
     
     glColor3f(1.5,0.2,0.5);
     glRasterPos2f(380,90);
     Write("Unidirectional"); 
     
     glColor3f(4.0,0.0,0.0);
     glRasterPos2f(385,70);
     Write("High Intensity"); 
     
       if(a==1)
       {       
       glColor3f(1.5,1.7,0.0); 
       glRasterPos2f(280,100);
       Write("L");
       
      glColor3f(0.0,1.0,1.0); 
      glRasterPos2f(300,80);
      Write("A");
    
    
      glColor3f(1.0,0.0,0.0); 
      glRasterPos2f(320,60);
      Write("S");
    

      glColor3f(1.0,0.0,1.0); 
      glRasterPos2f(340,40);
     Write("E");
    

      glColor3f(1.0,1.0,0.0); 
      glRasterPos2f(360,20);
      Write("R");
    }
    
     glColor3f(0.0,3.5,3.7); 
    glRasterPos2f(360,20);
    Write("     -->   BY    Dhavan and Krishnamoorthy ");
 

     laser();
     sphere();
     
     glFlush();
          
}

/*void mydisplay(void)
{
glViewport(10,-50,980,700);
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 if(flag==1)
 {
  display();
 }
glutSwapBuffers();
}*/



void drawstring(float x,float y,float z,const char *str)
{
unsigned int c;
glRasterPos3f(x,y,z);
for(c=0;c<strlen(str);c++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str[c]);
}

void drawstring1(float x,float y,float z,const char *str)
{
unsigned int c;
glRasterPos3f(x,y,z);
if(strflag==0)
for(c=0;c<strlen(str);c++)
glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,str[c]);
if(strflag==1)
for(c=0;c<strlen(str);c++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[c]);
if(strflag==2)
for(c=0;c<strlen(str);c++)
glutBitmapCharacter(GLUT_BITMAP_9_BY_15,str[c]);
}

 /*void desc()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(17, 40, 60);//border
glBegin(GL_LINE_LOOP);
glVertex3f(47,50,0);
glVertex3f(-45,50,0);
glVertex3f(-45,-40,0);
glVertex3f(47,-40,0);
glEnd();
glLineWidth(2.5);
glBegin(GL_LINE_LOOP);
glVertex3f(48,51,0);
glVertex3f(-46,51,0);
glVertex3f(-46,-41,0);
glVertex3f(48,-41,0);
glEnd();
glColor3ub(58, 62, 73);
//strflag=1;
drawstring1(-25,45,0.0,"HUMAN ANATOMY AND PHYSIOLOGY");

glColor3ub(159, 34, 70);
drawstring(-37,30,0.0," The human body is the entire structure of a human being. It is composed");
drawstring(-37,26,0.0,"of many different types of cells that together create tissues and subse-"); 
drawstring(-37,22,0.0,"quently organ systems. They ensure homeostasis and the viability of the ");
drawstring(-37,18,0.0,"human body.");
drawstring(-37,13,0.0," It comprises a head, neck, trunk (which includes the thorax and abdomen)");
drawstring(-37,9,0.0,"arms and hands, legs and feet.");
drawstring(-37,4,0.0," The study of the human body involves anatomy, physiology, histology and");
drawstring(-37,0,0.0,"embryology. The body varies anatomically in known ways.Physiology focus-");
drawstring(-37,-4,0.0,"-es on the systems and organs of the human body and their functions. Many");
drawstring(-37,-8,0.0,"systems and mechanisms interact in order to maintain homeostasis, with safe");
drawstring(-37,-12,0.0,"levels of substances such as sugar and oxygen in the blood.");

//glutPostRedisplay();
}
*/



void keys(unsigned char key,int x,int y)
{ 
    
     
if(flag==0 && key==13) //Ascii of 'enter' key is 13
   glutIdleFunc(display);
        
     if(key=='Q' || key=='q' || key==27)
     exit(1);
     
     if(key=='L'|'A'|'S'|'E'|'R')
     {
                 a=1;
                 glutPostRedisplay();
     }    
     
}



void mymenu(int id)
{
switch(id)
{
case 1:flag=0;
 glutIdleFunc(display1);
break;
case 2:flag=1;
glutIdleFunc(display);
break;
/*case 3:flag=2;
glutIdleFunc(desc);
break;*/
case 4:exit(0);
}
}




int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1600,750);
    glutCreateWindow("Laser-working & principle");
 glutDisplayFunc(display1);
    glutIdleFunc(spin);
   // glutMouseFunc(mymouse);
    glutKeyboardFunc(keys);
glutCreateMenu(mymenu);
glutAddMenuEntry("1) Welcome Screen",1);
glutAddMenuEntry("2) Simulation",2);
//glutAddMenuEntry("3) Description",3);
glutAddMenuEntry("3) EXIT",4);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutKeyboardFunc(keys);
    init();
    glutMainLoop();
    return 0;
}
   

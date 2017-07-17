#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include "Singleton.h"
using namespace std;
void disp(void);
void initFunc();
void idleFunc(void);
int main(int argc,char** argv)
{
	cout<<"Basic OpenGl code"<<endl;
	cout<<"Edited in Git"<<endl;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Sample Window");
	initFunc();
	glutDisplayFunc(disp);
	
	glutIdleFunc(idleFunc);
	glutMainLoop();

	return 0;
}
void initFunc()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glViewport(0,0,500,500);
	glOrtho(0.0,500,0.0,500.0,-1,1);
}
int x;
void disp(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2f(x,100.0);
	glVertex2f(150.0,150.0);
	glEnd();
	glColor3f(1,0,0);
	glBegin(GL_TRIANGLES);
	glVertex2f(120,100);
	glVertex2f(240,100);
	glVertex2f(180,210);
	glEnd();
	glColor3f(0,1,1);
	glBegin(GL_POLYGON);
	glVertex2f(120,50);
	glVertex2f(240,50);
	glVertex2f(180,110);
	glEnd();
	glColor3f(1,1,0);
	glBegin(GL_QUADS);
	glVertex2f(150,50);
	glVertex2f(340,50);
	glVertex2f(340,110);
	glVertex2f(150,110);
	glEnd();
	glFlush();
}

void idleFunc()
{
	Singleton::getInstance();
	Singleton::stptr->show();
	glutPostRedisplay();
}

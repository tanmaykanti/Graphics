#include "Build.h"
#include "Singleton.h"
using namespace std;
void disp(void);
void initFunc();
void idleFunc(void);
Circle_t circl;
Ellipse_t elps(0,0,300,200);
int main(int argc,char** argv)
{
	cout<<"Basic OpenGl code"<<endl;

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
	glutInitWindowSize(WIDTH,HEIGHT);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Solar System");
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
	glViewport(0,0,WIDTH,HEIGHT);
	glOrtho(0.0,WIDTH,0.0,HEIGHT,-400,400);
}

void disp(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glTranslatef(WIDTH/2,HEIGHT/2,0);
//	circl.drawFlag();
	circl.drawCircle(0,0,40,EnumDataTypes_t::YELLOW,true);
	elps.drawEllipse();
	glPopMatrix();
	glFlush();
}

void idleFunc()
{
//	Singleton::getInstance();
//	Singleton::stptr->show();
	glutPostRedisplay();
}

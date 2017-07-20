#include "Build.h"
#include "Singleton.h"
using namespace std;
void disp(void);
void initFunc();
void idleFunc(void);
Shape_t circl;
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
	glOrtho(0.0,WIDTH,0.0,HEIGHT,-1,1);
}

void disp(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	circl.drawFlag();
	circl.drawCircle(WIDTH/2,HEIGHT/2,120,EnumDataTypes_t::BLUE,false);
	glFlush();
}

void idleFunc()
{
//	Singleton::getInstance();
//	Singleton::stptr->show();
	glutPostRedisplay();
}

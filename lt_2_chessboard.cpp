#include <stdio.h>
#include <GL/glut.h>
void myDisplay(void)
{
{
int x1=20,y1=20,x3=70,y3=70;
glClear(GL_COLOR_BUFFER_BIT);
int change=1;
for(int i=0;i<8;i++)
{
for(int j=0;j<8;j++)
{
change=change*(-1);

if(change==-1)
glColor3f(1.0, 1.0, 1.0);
else
glColor3f(0.0, 0.0, 0.0);
x1+=50;x3+=50;
glRecti(x1,y1,x3,y3);
}
y1+=50;y3+=50;x1=20;x3=70;
change=change*(-1);
}

glFlush();
}
}
void init (void)
{
glClearColor(0.0, 0.5, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Chess Board");
glutDisplayFunc(myDisplay);
init ();
glutMainLoop();
}


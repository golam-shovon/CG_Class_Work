#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

 void myDisplaytricolor()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glEnd();
glFlush ();
}
 void myDisplaytrinocolor()
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 1.0);
glPointSize(5.0);
glBegin(GL_TRIANGLES);
glVertex2i(100, 50);
glVertex2i(100, 130);
glVertex2i(150, 130);
glEnd();
glFlush ();
}
 void myInit1 ()
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 120.0, 0.0, 240.0);
}
 void myIni2 ()
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 260.0, 0.0, 320.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
glutInitWindowSize (120, 240);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Hello World");
glutDisplayFunc(myDisplaytricolor);
myInit1 ();
glutInitDisplayMode (GLUT_MULTISAMPLE | GLUT_RGB);
glutInitWindowSize (120, 240);
glutInitWindowPosition (400, 450);
glutCreateWindow ("Hello ");
glutDisplayFunc(myDisplaytrinocolor);
myIni2 ();
glutMainLoop();
return 0;
}

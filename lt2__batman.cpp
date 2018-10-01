#include <stdio.h>
#include <GL/glut.h>
void trainglefilled(void)
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

void batman(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 1.0, 0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
glVertex2i(480, 405);
glVertex2i(784, 396);
glVertex2i(845, 343);
glVertex2i(847, 186);
glVertex2i(801, 134);
glVertex2i(477, 133);
glVertex2i(396, 198);
glVertex2i(396, 360);

glEnd();

glFlush ();
}


void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize (1920,1080);
glutInitWindowPosition (0, 0);
glutCreateWindow ("Batman");
glutDisplayFunc(batman);
myInit ();


glutMainLoop();

}


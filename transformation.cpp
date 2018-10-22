#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
int number;
int ed[100];
void polygon(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    for(int i=1;i<=number;i++)
    {
        glVertex2i(ed[i-1],ed[i]);
    }
    glEnd();
    glFlush ();
}
void polygontranslated(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POLYGON);
    for(int i=1;i<=number;i++)
    {

    }
    glEnd();
    glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
printf("1.Enter Edge of the POlygon:  ");
scanf("%d",&number);
int i=0;
for(i=1;i<=number*2;i++)
{
    printf("Enter the Co-Ordinate of vertex %d:",&i);
    scanf("%d%d",&ed[i-1],&ed[i]);
    i++;
}
glutInitWindowSize (640,480);
glutInitWindowPosition (0, 0);
glutCreateWindow ("circle");
glutDisplayFunc(polygon);
myInit ();
glutMainLoop();
}

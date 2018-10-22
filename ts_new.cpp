#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include <glm/ext.hpp>
#include<math.h>
int number;
int ed[100];
float sx,sy;
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
        glm::mat3 m = glm::mat3(1.0f);
        m[2].x=sx;
        m[2].y=sy;
        glm::vec3 v( ed[i-1],ed[i],1.0f);
        glm::vec3 result=m*v;
        glVertex2i(round(v.x),round(v.y) );
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
for(int i=1;i<=number*2;i++)
{
    printf("Enter the Co-Ordinate of vertex %d:",&i);
    scanf("%d%d",&ed[i-1],&ed[i]);
}
printf("Enter the Translation factor for x and y:");
scanf("%lf%lf",&sx,&sy);
glutInitWindowSize (640,480);
glutInitWindowPosition (0, 0);
glutCreateWindow ("polygon");
glutDisplayFunc(polygon);
glutDisplayFunc(polygontranslated);
myInit ();
glutMainLoop();
}


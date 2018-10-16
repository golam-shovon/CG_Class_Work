#include <stdio.h>

#include <GL/glut.h>
double x1[1000][10000],x2[1000][1000];
int x,y;
void normal(void)
{


glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(5.0);
glBegin(GL_POLYGON);
for(int i=0;i<x;i++)
{glutCreateWindow ("Chess Board");

    glVertex2i(x1[i][i], x1[i][i+1]);
}
glEnd();
glFlush();
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
int n;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
printf("1.Translation \n2. Scaling\n3.exit\n");
scanf("%d",&n);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("display");

if(n==1)
{
    printf("enter edges");
    scanf("%d",&x);

    printf("enter points");
    for(int j=0;j<=x;j++)
        for(int k=0;k<x/2;k++)
    {
        scanf("%f",&x1[j][k]);
    }

    glutDisplayFunc(normal);
    /*glutDisplayFunc(scaled);*/
    init();

}
glutCreateWindow ("Chess Board");

glutMainLoop();
}

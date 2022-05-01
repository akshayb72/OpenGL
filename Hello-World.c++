#include<GL/glut.h>

void display(void)
{   
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.5,-0.5);
glEnd();
glutSwapBuffers();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
glutCreateWindow("Hello World");
glutDisplayFunc(display);
glutMainLoop();
}

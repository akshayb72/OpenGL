#include<GL/glut.h>

void display(void)
{   
glClear(GL_COLOR_BUFFER_BIT);//glclear clears everything that was previous done
glBegin(GL_POLYGON);//glbegin initializes the program
glVertex2f(-0.5,-0.5);//glvertex2f draws a vertex with two coordinates
glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.5,-0.5);
glEnd();//glend completes the function
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

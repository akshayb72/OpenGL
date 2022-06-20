
#include "Angel.h"

void init ( void )
{
vec2 points [6] =
{
vec2 ( -0.5 , -0.5 ) , vec2 ( 0.5 , -0.5 ) ,
vec2 ( 0.5 , 0.5 ) , vec2 ( 0.5 , 0.5 ) ,
vec2 ( -0.5 , 0.5 ) , vec2 ( -0.5 , -0.5 )
};

GLuint vao;
GLuint buffer;

GLuint glGenVertexArrays(1,&vao);
glBindVertexArray(vao) ;

GLuint glGenBuffers(1, &buffer);
glBindBuffer(GL_ARRAY_BUFFER,buffer);

glBufferData(GL_ARRAY_BUFFER,sizeof(points),points,GL_STATIC_DRAW);

GLuint program = InitShader("vsimple.glsl","fsimple.glsl");
glUseProgram(program);

GLuint loc = glGetAttribLocation(program,"vPosition");
glEnableVertexAttribArray(loc);
glVertexAttribPointer(loc,2,GL_FLOAT,GL_FALSE,0,0);

glClearColor(0.0,0.0,0.0,1.0);
}

void display (void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glDrawArrays(GL_TRIANGLES,0,6);
    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("NewStyle-Open-GL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}

#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

void bangladesh_flag()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    ///GREEN
    glBegin(GL_QUADS);
    glColor3ub(0, 102, 0);
    glVertex2f(-0.7f, 0.50f); // top left
    glVertex2f(0.7f, 0.50f); // top right
    glVertex2f(0.7f, -0.50f); // bottom right
    glVertex2f(-0.7f, -0.50f); // bottom left
    glEnd();

    ///RED
    int i;

	GLfloat x=0.0f;
	GLfloat y=0.0f;
	GLfloat radius =.30f;

	int triangleAmount = 100; //# of triangles used to draw circle

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(204, 0, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)), y+(radius*sin(i*twicePi/triangleAmount)));
    }
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(350, 320);
	glutCreateWindow("BANGLADESH FLAG");
	glutDisplayFunc(bangladesh_flag);
	glutMainLoop();
	return 0;
}

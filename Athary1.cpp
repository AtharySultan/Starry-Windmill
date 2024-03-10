#include <GL\glew.h>
#include <GL\glut.h>
#include <GL\freeglut.h>
#include <iostream>
#include <math.h>

float angle;

void init() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION); // set the projection parameters
}

void reshapeFunc(GLint new_width, GLint new_hight)
{
	glViewport(0, 0, 1000, 1000);

}





void display() {

	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

	
	glEnable(GL_BLEND);
	glBegin(GL_QUADS);
	glColor4f(0.0f, 0.0f, 0.0f,0.0);
	glVertex2f(-2.0f, 2.0f);
	glColor4f(0.0f, 0.0f, 0.0f, 0.0);
	glVertex2f(2.0f, 2.0f);
	glColor4f(0.0f, 0.0f, 0.5f, 0.0);
	glVertex2f(2.0f, -2.0f);
	glColor4f(0.0f, 0.0f, 0.5f, 0.0);
	glVertex2f(-2.0f, -2.0f);
	glEnd();
	glDisable(GL_BLEND);

	
	glBegin(GL_POLYGON);
	glColor4f(0.1f, 0.1f, 0.1f, 1.0f);
	glVertex2f(1.00f, -1.00f);
	glVertex2f(1.00f, -0.5f);
	glVertex2f(0.8f, -0.55f);
	glVertex2f(0.5f, -0.7f);
	glVertex2f(0.3f, -0.8f);
	glVertex2f(0.2f, -1.00f);
	glVertex2f(1.00f, -1.00f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-1.00f, -1.00f);
	glVertex2f(-1.00f, -0.7f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.5f, -0.7f);
	glVertex2f(-0.2f, -0.8f);
	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.6f, -1.00f);
	glVertex2f(0.8f, -0.9f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.698f, 0.69f);
	glVertex2f(-0.698f, 0.56f);
	glVertex2f(-0.65f, 0.63f);
	glVertex2f(-0.75f, 0.63f);
	glVertex2f(-0.66f, 0.6f);
	glVertex2f(-0.73f, 0.66f);
	glVertex2f(-0.66f, 0.66f);
	glVertex2f(-0.73f, 0.6f);

	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.5f, 0.25f);
	glVertex2f(0.54f, 0.2f);
	glVertex2f(0.46f, 0.2f);
	glVertex2f(0.47f, 0.18f);
	glVertex2f(0.53f, 0.22f);
	glVertex2f(0.47f, 0.22f);
	glVertex2f(0.53f, 0.18f);
	

	////////////////////
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.95f, 0.7f);
	glVertex2f(0.95f, 0.7f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.6f, 0.6f);

	glVertex2f(-0.99f, 0.5f);
	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.7f, 0.2f);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.9f, 0.1f);
	
	glVertex2f(-0.1f, 0.8f);
	glVertex2f(-0.2f, 0.9f);
	glVertex2f(-0.2f, 0.9f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.4f, 0.7f);

	glEnd();

	glPointSize(7);
	glBegin(GL_POINTS);
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.95f, 0.7f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.6f, 0.6f);

	glVertex2f(-0.99f, 0.5f);
	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-0.85f, 0.3f);
	glVertex2f(-0.7f, 0.2f);
	glVertex2f(-0.9f, 0.1f);

	glVertex2f(-0.1f, 0.8f);
	glVertex2f(-0.2f, 0.9f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(-0.4f, 0.7f);
	glEnd();


	glPointSize(3);
	glBegin(GL_POINTS);
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(-0.3f, 0.1f);
	glVertex2f(-0.99f, 0.2f);
	glVertex2f(-0.1f, 0.3f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.7f, 0.4f);
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.2f, 0.55f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(-0.6f, 0.6f);
	glVertex2f(-0.9f, 0.75f);
	glVertex2f(-0.5f, 0.75f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.5f, 0.9f);
	glVertex2f(-0.9f, 0.8f);
	glVertex2f(-0.5f, 0.99f);
	glVertex2f(-0.3f, 0.85f);

	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.3f, 0.1f);
	glVertex2f(0.99f, 0.2f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.5f, 0.35f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.2f, 0.55f);
	glVertex2f(0.3f, 0.6f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.9f, 0.75f);
	glVertex2f(0.5f, 0.75f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.5f, 0.9f);
	glVertex2f(0.9f, 0.8f);
	glVertex2f(0.5f, 0.99f);
	glVertex2f(0.3f, 0.85f);

	glVertex2f(0.1f, 0.8f);
	glVertex2f(-0.1f, 0.95f);
	glVertex2f(0.0f, 0.6f);


	glEnd();


	glEnable(GL_BLEND);
	glBegin(GL_QUADS);
	glColor3f(0.3f, 0.4f, 0.5f);
	glVertex2f(-0.12f, -0.15f);
	glColor3f(0.3f, 0.3f, 0.6f);
	glVertex2f(-0.2f, -0.95f);
	glColor3f(0.3f, 0.4f, 0.5f);
	glVertex2f(0.2f, -0.95f);
	glColor3f(0.3f, 0.3f, 0.6f);
	glVertex2f(0.12f, -0.15f);

	glColor3f(0.1f, 0.3f, 0.4f);
	glVertex2f(-0.18f, -0.05f);
	glVertex2f(-0.18f, -0.15f);
	glColor3f(0.1f, 0.1f, 0.4f);
	glVertex2f(0.18f, -0.15f);
	glVertex2f(0.18f, -0.05f);

	glColor3f(0.1f, 0.3f, 0.4f);
	glVertex2f(-0.15f, 0.05f);
	glVertex2f(0.15f, 0.05f);
	glColor3f(0.1f, 0.1f, 0.4f);
	glVertex2f(0.23f, -0.05f);
	glVertex2f(-0.23f, -0.05f);

	glColor3f(0.5f, 0.6f, 0.6f);
	glVertex2f(-0.23f, -0.05f);
	glVertex2f(-0.23f, -0.07f);
	glVertex2f(0.23f, -0.07f);
	glVertex2f(0.23f, -0.05f);
	glEnd();
	glDisable(GL_BLEND);

	

	glPushMatrix();
	glRotatef(angle, 0, 0, 1);
	glLineWidth(5);
	glBegin(GL_LINES);
	glColor3f(0.2f, 0.1f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.35f, 0.55f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.6f, -0.39f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.43f, -0.65f);
	glEnd();
	glPopMatrix();

	glPointSize(30);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();

	
	glPushMatrix();
	glRotatef(angle, 0, 0, 1);
	glBegin(GL_QUADS);
	//glColor3f(0.7f, 0.5f, 0.2f);
	glColor4f(0.9f, 0.7f, 0.4f,1.0f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.54f, 0.49f);
	glVertex2f(0.05f, 0.15f);
	glVertex2f(0.09f, 0.07f);

	glVertex2f(-0.1f, -0.07f);
	glVertex2f(-0.61f, -0.4f);
	glVertex2f(-0.54f, -0.49f);
	glVertex2f(-0.05f, -0.15f);

	glVertex2f(-0.35f, 0.55f);
	glVertex2f(-0.45f, 0.5f);
	glVertex2f(-0.15f, 0.03f);
	glVertex2f(-0.07f, 0.1f);

	glVertex2f(0.43f, -0.65f);
	glVertex2f(0.52f, -0.61f);
	glVertex2f(0.15f, -0.05f);
	glVertex2f(0.06f, -0.08f);
	glEnd();
	glPopMatrix();



	glFlush();
}

void spin() {
	angle += 0.1;
	if (angle >= 360)
		angle = 0;

	glutPostRedisplay();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv); // Initialize GLUT
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Specify the display Mode – RGB, RGBA or color

	// Index, single or double Buffer
	glutCreateWindow("flag"); // Create a window with the given title
	glutInitWindowSize(500, 500); // Set the window's initial width & height
	glutInitWindowPosition(720, 490); // Position the window's initial top-left corner
	init();
     angle = 0;
	glutIdleFunc(spin);
	glutDisplayFunc(display);
	glutReshapeFunc(reshapeFunc);

	glutMainLoop(); // Enter the infinitely event-processing loop
	return 0;
}
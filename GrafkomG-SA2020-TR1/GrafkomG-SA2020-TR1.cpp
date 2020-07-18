#include <iostream>
#include <GL/freeglut.h>
#include "Controller.h"

controller cc;

void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / tinggi, 5.0, 1000.0);
	glTranslatef(0.0, -5.0, -400.0);
	glMatrixMode(GL_MODELVIEW);
}

void tampil(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	glutSwapBuffers();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Taman Anggrek Mall - 3D");
	cc.init();
	glutDisplayFunc(tampil);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}


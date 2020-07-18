#include <iostream>
#include <GL/freeglut.h>
#include "Controller.h"

controller cc;

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Taman Anggrek Mall - 3D");
	cc.init();
	glutMouseFunc(cc.mouse);
	glutDisplayFunc(cc.tampil);
	glutReshapeFunc(cc.ukuran);
	glutMainLoop();
	return 0;
}


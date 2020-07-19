#include <iostream>
#include <GL/freeglut.h>
#include "Controller.h"

controller *cc;
void tampilFunc( void ) {
	cc->tampil();
}
void initFunc( void) {
	cc->init();
}
void mouseFunc(int button, int state, int x, int y) {
	cc->mouse(&button, &state, &x, &y);
}

void keyboardFunc(unsigned char key, int x, int y) {
	cc->keyboard(&key, &x, &y);
}

void ukuranFunc(int lebar, int tinggi) {
	cc->ukuran(&lebar, &tinggi);
}
void MouseMotionFunc(int x, int y) {
	cc->MouseMotion(&x, &y);
}
int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_MULTISAMPLE);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Taman Anggrek Mall - 3D");
	initFunc();
	glutMouseFunc(mouseFunc);
	glutDisplayFunc(tampilFunc);
	glutReshapeFunc(ukuranFunc);
	glutKeyboardFunc(keyboardFunc);
	glutMotionFunc(MouseMotionFunc);
	glutMainLoop();

	return 0;
}


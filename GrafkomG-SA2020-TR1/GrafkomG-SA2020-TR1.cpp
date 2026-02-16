#include <iostream>
#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif
#include "Controller.h"

int R = 255, G = 255, B = 255;
controller *cc;
void tampilFunc( void ) {
	cc->tampil(R, G, B);
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

void mouseWheelFunc(int button, int state, int x, int y) {
	cc->mouseWheel(&button, &state, &x, &y);
}

void idleFunc() {
	cc->Idle();
}

void Animation(int) {

	glutPostRedisplay();
	glutTimerFunc(1000, Animation, 0);
	R = rand() % 255;
	G = rand() % 255;
	B = rand() % 255;

}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_MULTISAMPLE);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Taman Anggrek Mall - 3D");
	initFunc();
	glutMouseFunc(mouseFunc);
	glutDisplayFunc(tampilFunc);
	glutReshapeFunc(ukuranFunc);
	glutKeyboardFunc(keyboardFunc);
	glutMotionFunc(MouseMotionFunc);
	#if !defined(__APPLE__)
	glutMouseWheelFunc(mouseWheelFunc);
	#endif
	glutTimerFunc(1000, Animation, 0);
	//glutIdleFunc(idleFunc);
	glutMainLoop();

	return 0;
}


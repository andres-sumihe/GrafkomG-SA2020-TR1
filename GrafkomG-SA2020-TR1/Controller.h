//Author : Andres Sumihe
#include <GL/freeglut.h>
#include "Mall.h"
#include "Tower.h"


tower tw;
Mall dd;

int is_depth;

class controller {
public:
	void tampil() {
		if (is_depth)
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		else
			glClear(GL_COLOR_BUFFER_BIT);
		//Lantai 1
		dd.dinding(0.0, 35.0);
		dd.garis_dinding(0.0, 35.0);
		dd.atas_bawah(173, 216, 230, 0);
		dd.atas_bawah(154, 205, 50, 33);

		//Tower
		tw.dinding_tower(0, 0);
		tw.dinding_tower(13.77, -52.08);
		tw.dinding_tower(58.58, -23.08);
		tw.dinding_tower(93.18, -61.83);
		tw.dinding_tower(119.11, -14.63);
		tw.dinding_tower(190.02, 30.5);
		tw.dinding_tower(170.74, -18.53);
		tw.dinding_tower(48.58, -103.08);

		//Garis Tower
		tw.garis_dinding_tower(0, 0);
		tw.garis_dinding_tower(13.77, -52.08);
		tw.garis_dinding_tower(58.58, -23.08);
		tw.garis_dinding_tower(93.18, -61.83);
		tw.garis_dinding_tower(119.11, -14.63);
		tw.garis_dinding_tower(190.02, 30.5);
		tw.garis_dinding_tower(170.74, -18.53);
		tw.garis_dinding_tower(48.58, -103.08);

		//Penutup Atas
		tw.penutup_atas(0, 0);
		tw.penutup_atas(13.77, -52.08);
		tw.penutup_atas(58.58, -23.08);
		tw.penutup_atas(93.18, -61.83);
		tw.penutup_atas(119.11, -14.63);
		tw.penutup_atas(190.02, 30.5);
		tw.penutup_atas(170.74, -18.53);
		tw.penutup_atas(48.58, -103.08);

		//Octagon
		tw.octagon(0, 0);
		tw.octagon(13.77, -52.08);
		tw.octagon(58.58, -23.08);
		tw.octagon(93.18, -61.83);
		tw.octagon(119.11, -14.63);
		tw.octagon(190.02, 30.5);
		tw.octagon(170.74, -18.53);
		tw.octagon(48.58, -103.08);

		//Dinding Octagon
		tw.dinding_octagon(0, 0);
		tw.dinding_octagon(13.77, -52.08);
		tw.dinding_octagon(58.58, -23.08);
		tw.dinding_octagon(93.18, -61.83);
		tw.dinding_octagon(119.11, -14.63);
		tw.dinding_octagon(190.02, 30.5);
		tw.dinding_octagon(170.74, -18.53);
		tw.dinding_octagon(48.58, -103.08);

		//Biru-Biru
		tw.biru_biru(0, 0);
		tw.biru_biru(13.77, -52.08);
		tw.biru_biru(58.58, -23.08);
		tw.biru_biru(93.18, -61.83);
		tw.biru_biru(119.11, -14.63);
		tw.biru_biru(190.02, 30.5);
		tw.biru_biru(170.74, -18.53);
		tw.biru_biru(48.58, -103.08);

		//Octagon-Atas
		tw.octagon_atas(0, 0);
		tw.octagon_atas(13.77, -52.08);
		tw.octagon_atas(58.58, -23.08);
		tw.octagon_atas(93.18, -61.83);
		tw.octagon_atas(119.11, -14.63);
		tw.octagon_atas(190.02, 30.5);
		tw.octagon_atas(170.74, -18.53);
		tw.octagon_atas(48.58, -103.08);

		//Dinding-Octagon-Atas
		tw.dinding_octagon_atas(0, 0);
		tw.dinding_octagon_atas(13.77, -52.08);
		tw.dinding_octagon_atas(58.58, -23.08);
		tw.dinding_octagon_atas(93.18, -61.83);
		tw.dinding_octagon_atas(119.11, -14.63);
		tw.dinding_octagon_atas(190.02, 30.5);
		tw.dinding_octagon_atas(170.74, -18.53);
		tw.dinding_octagon_atas(48.58, -103.08);
		glutSwapBuffers();
	}
	void init() {
		glClearColor(224 / 255, 255 / 255, 255 / 255, 0.0);
		glMatrixMode(GL_PROJECTION);
		glEnable(GL_DEPTH_TEST);
		is_depth = 1;
		glMatrixMode(GL_MODELVIEW);
		glPointSize(9.0);
		glLineWidth(1.0f);
	}
	void mouse(int* button, int* state, int* x, int* y) {
		if ((*button == 3) || (*button == 4)) {
			//zoom dengan scrolling mouse
			if (*state == GLUT_UP) return;
			(*button == 3) ? glScalef(.99f, .99f, 0.99f) : glScalef(1.01f, 1.01f, 1.01f);
		}
		glutPostRedisplay();
	}

	void keyboard(unsigned char* key, int* x, int* y) {
		switch (*key) {
		case 'w':
		case 'W':
			glTranslatef(0.0, 3.0, 0.0);
			break;
		case 'd':
		case 'D':
			glTranslatef(3.0, 0.0, 0.0);
			break;
		case 's':
		case 'S':
			glTranslatef(0.0, -3.0, 0.0);
			break;
		case 'a':
		case 'A':
			glTranslatef(-3.0, 0.0, 0.0);
			break;
		case 'g':
		case 'G':
			glRotatef(2.0, 1.0, 0.0, 0.0);
			break;
		case 'b':
		case 'B':
			glRotatef(-2.0, 1.0, 0.0, 0.0);
			break;
		case 'h':
		case 'H':
			glRotatef(2.0, 0.0, 1.0, 0.0);
			break;
		case 'n':
		case 'N':
			glRotatef(-2.0, 0.0, 1.0, 0.0);
			break;
		case 'j':
		case 'J':
			glRotatef(2.0, 0.0, 0.0, 1.0);
			break;
		case 'm':
		case 'M':
			glRotatef(-2.0, 0.0, 0.0, 1.0);
			break;
		case 'z':
		case 'Z':
			glScalef(0.8f, 0.8f, 0.8f);
			break;
		case 'x':
		case 'X':
			glScalef(1.2f, 1.2f, 1.2f);
			break;
		}
		glutPostRedisplay();
	}

	void ukuran(int *lebar, int *tinggi) {
		if (*tinggi == 0) *tinggi = 1;
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(50.0, *lebar / *tinggi, 5.0, 1000.0);
		glTranslatef(0.0, -70.0, -600.0);
		glMatrixMode(GL_MODELVIEW);
	}

};
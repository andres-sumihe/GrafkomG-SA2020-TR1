//Author : Andres Sumihe
#include <GL/freeglut.h>
#include "Mall.h"
#include "Tower.h"
#include "Object.h"


float xpos = 0.0f;
float ypos = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
bool scrollDown = false;
bool scrollUp = false;

tower tw;
Mall dd;
object obj;
int is_depth;

class controller {
public:
	void tampil() {
		if (is_depth)
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		else
			glClear(GL_COLOR_BUFFER_BIT);

		gluLookAt(0.0f, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
		glPushMatrix();
		//Lantai 1
		dd.dinding(0.0, 35.0);
		dd.garis_dinding(0.0, 35.0);
		dd.atas_bawah(173, 216, 230, 0);
		dd.atas_bawah(154, 205, 50, 33);

		//Pohon
		obj.PohonBatang(0, 0);
		obj.PohonDaun(0, 0, 0, 0);
		obj.PohonBatang(20, 20);
		obj.PohonDaun(20, 20, 20, 20);
		obj.PohonBatang(40, 40);
		obj.PohonDaun(40, 40, 40, 40);
		obj.PohonBatang(60, 60);
		obj.PohonDaun(60, 60, 60, 60);
		obj.PohonBatang(80, 80);
		obj.PohonDaun(80, 80, 80, 80);
		obj.PohonBatang(-80, 15);
		obj.PohonDaun(-80, -80, 15, 15);
		obj.PohonBatang(-100, 20);
		obj.PohonDaun(-100, -100, 20, 20);
		obj.PohonBatang(-125, 20);
		obj.PohonDaun(-125, -125, 20, 20);

		//Tanah
		obj.Tanah(-180, 160, 160, -200);

		//Jalan
		obj.Jalan(-170, 140, 100, 140);

		//Trotoar
		obj.Trotoar(-170, 140, 141, 143);
		obj.Trotoar(-170, 140, 99, 97);

		//Strip Jalan
		obj.StripJalan(-170, -160, 119, 120);
		obj.StripJalan(-140, -130, 119, 120);
		obj.StripJalan(-110, -100, 119, 120);
		obj.StripJalan(-80, -70, 119, 120);
		obj.StripJalan(-50, -40, 119, 120);
		obj.StripJalan(-20, -10, 119, 120);
		obj.StripJalan(10, 20, 119, 120);
		obj.StripJalan(40, 50, 119, 120);
		obj.StripJalan(70, 80, 119, 120);
		obj.StripJalan(100, 110, 119, 120);
		obj.StripJalan(130, 140, 119, 120);

		//Awan
		obj.Awan(-5, 5, 0, 0);
		obj.Awan(-30, -10, -50, -50);
		obj.Awan(30, 40, -30, -30);
		obj.Awan(-140, -120, -30, -30);
		obj.Awan(-70, -60, -70, -100);

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

		//Garis Biru-Biru
		tw.garis_biru_biru(0, 0);
		tw.garis_biru_biru(13.77, -52.08);
		tw.garis_biru_biru(58.58, -23.08);
		tw.garis_biru_biru(93.18, -61.83);
		tw.garis_biru_biru(119.11, -14.63);
		tw.garis_biru_biru(190.02, 30.5);
		tw.garis_biru_biru(170.74, -18.53);
		tw.garis_biru_biru(48.58, -103.08);

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
		
		glPopMatrix();
		glutSwapBuffers();
	}
	void init() {
		glClearColor(224 / 255, 255 / 255, 255 / 255, 0.0);
		glOrtho(-200.0, 200.0, -200.0, 200.0, -200.0, 200.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glEnable(GL_LIGHTING);
		glEnable(GL_COLOR_MATERIAL);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glEnable(GL_LINE_SMOOTH);
		glEnable(GL_POINT_SMOOTH);
		glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
		glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
		
		is_depth = 1;
		glMatrixMode(GL_MODELVIEW);
		glPointSize(9.0);
		glLineWidth(1.0f);
	}
	void mouse(int* button, int* state, int* x, int* y) {
		
		std::cout << *button << std::endl;
		
		if (*button == GLUT_LEFT_BUTTON && *state == GLUT_DOWN) {
			mouseDown = true;
			xdiff = (*x - ypos);
			ydiff = (-*y + xpos);
			
		}
		else {
			mouseDown = false;
		}
		
	}
	

	void Idle() {
		if (!mouseDown) {
			ypos += 0.3f;
		}
		glutPostRedisplay();
	}

	void keyboard(unsigned char* key, int* x, int* y) {
		switch (*key) {
		case 'd':
		case 'D':
			glTranslatef(3.0, 0.0, 0.0);
			glutPostRedisplay();
			break;
		case 'a':
		case 'A':
			glTranslatef(-3.0, 0.0, 0.0);
			glutPostRedisplay();
			break;	
		default:
			glTranslatef(0.0, 0.0, 0.0);
			break;
		}
		
	}
	void mouseWheel(int* button, int* state, int* x, int* y) {
		std::cout << *state << std::endl;
		if (*state < 0) {
			glScalef(.99f, .99f, 0.99f);
			glutPostRedisplay();
			std::cout << "zoom out" << std::endl;
		}
		else {
			glScalef(1.01f, 1.01f, 1.01f);
			glutPostRedisplay();
		}


	}
	void MouseMotion(int *x, int *y) {
		if (mouseDown) {
			ypos = *x - xdiff;
			xpos = *y + xdiff;
			glLoadIdentity();
			glRotatef(xpos, 1.0f, 0.0f, 0.0f);
			glRotatef(ypos, 0.0f, 1.0f, 0.0f);
			std::cout << ypos << " : " << xpos << std::endl;
			glutPostRedisplay();
		}
	}

	void ukuran(int *lebar, int *tinggi) {
		if (*tinggi == 0) *tinggi = 1;
		glViewport(0, 0, *lebar, *tinggi);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0f, *lebar / *tinggi, 5.0, 1000.0);
		glTranslatef(0.0, -70.0, -600.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

	}

};
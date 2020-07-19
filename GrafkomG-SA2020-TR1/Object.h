#pragma once
#include <GL/freeglut.h>

using namespace std;

class object {
public:
	void PohonBatang(int x, int z) {
		float y1 = 0;
		float y2 = 10;

		glColor3ub(139, 69, 19);
		//Bawah
		glBegin(GL_POLYGON);
		glVertex3d(0 + x, y1, 60 + z);
		glVertex3d(0 + x, y1, 62 + z);
		glVertex3d(2 + x, y1, 62 + z);
		glVertex3d(2 + x, y1, 60 + z);
		glEnd();
		//Atas
		glBegin(GL_POLYGON);
		glVertex3d(0 + x, y2, 60 + z);
		glVertex3d(0 + x, y2, 62 + z);
		glVertex3d(2 + x, y2, 62 + z);
		glVertex3d(2 + x, y2, 60 + z);
		glEnd();
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(0 + x, y2, 62 + z);
		glVertex3d(2 + x, y2, 62 + z);
		glVertex3d(2 + x, y1, 62 + z);
		glVertex3d(0 + x, y1, 62 + z);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(0 + x, y2, 60 + z);
		glVertex3d(2 + x, y2, 60 + z);
		glVertex3d(2 + x, y1, 60 + z);
		glVertex3d(0 + x, y1, 60 + z);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(0 + x, y2, 60 + z);
		glVertex3d(0 + x, y2, 62 + z);
		glVertex3d(0 + x, y1, 62 + z);
		glVertex3d(0 + x, y1, 60 + z);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(2 + x, y2, 60 + z);
		glVertex3d(2 + x, y2, 62 + z);
		glVertex3d(2 + x, y1, 62 + z);
		glVertex3d(2 + x, y1, 60 + z);
		glEnd();
	}

	void KotakShape1(int x1, int x2, int z1, int z2, int y1, int y2) {
		//Atas
		glColor3ub(0, 128, 0);
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		//Bawah
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 59 - z1);
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 59 - z1);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		glEnd();
	}
	void KotakShape2(int x1, int x2, int z1, int z2, int y1, int y2) {
		//Atas
		glColor3ub(255, 255, 254);
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		//Bawah
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 59 - z1);
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 59 - z1);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		glEnd();
	}

	void KotakShape3(int x1, int x2, int z1, int z2, int y1, int y2) {
		//Atas
		glColor3ub(160, 82, 45);
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		//Bawah
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 59 - z1);
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 59 - z1);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		glEnd();
	}

	void KotakShape4(int x1, int x2, int z1, int z2, int y1, int y2) {
		//Atas
		glColor3ub(0, 0, 0);
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		//Bawah
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 59 - z1);
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 59 - z1);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		glEnd();
	}

	void KotakShape5(int x1, int x2, int z1, int z2, int y1, int y2) {
		//Atas
		glColor3ub(255, 255, 0);
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		//Bawah
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y2, 59 - z1);
		//Depan
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glEnd();
		//Belakang
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y1, 59 - z1);
		glVertex3d(-1 - x1, y1, 59 - z1);
		//Kiri
		glBegin(GL_POLYGON);
		glVertex3d(-1 - x1, y2, 59 - z1);
		glVertex3d(-1 - x1, y2, 63 + z2);
		glVertex3d(-1 - x1, y1, 63 + z2);
		glVertex3d(-1 - x1, y1, 59 - z1);
		glEnd();
		//Kanan
		glBegin(GL_POLYGON);
		glVertex3d(3 + x2, y2, 59 - z1);
		glVertex3d(3 + x2, y2, 63 + z2);
		glVertex3d(3 + x2, y1, 63 + z2);
		glVertex3d(3 + x2, y1, 59 - z1);
		glEnd();
	}

	void PohonDaun(int x1, int x2, int z1, int z2) {
		KotakShape1(1 - x1, 1 + x2, 1 - z1, 1 + z2, 10, 11);
		KotakShape1(2 - x1, 2 + x2, 2 - z1, 2 + z2, 11, 12);
		KotakShape1(3 - x1, 3 + x2, 3 - z1, 3 + z2, 12, 13);
		KotakShape1(5 - x1, 5 + x2, 5 - z1, 5 + z2, 13, 14);
		KotakShape1(4 - x1, 4 + x2, 4 - z1, 4 + z2, 14, 15);
		KotakShape1(3 - x1, 3 + x2, 3 - z1, 3 + z2, 15, 16);
		KotakShape1(2 - x1, 2 + x2, 2 - z1, 2 + z2, 16, 17);
		KotakShape1(1 - x1, 1 + x2, 1 - z1, 1 + z2, 17, 18);
		KotakShape1(0 - x1, 0 + x2, 0 - z1, 0 + z2, 18, 19);
	}
	void Awan(int x1, int x2, int z1, int z2) {
		KotakShape2(1 - x1, 1 + x2, 1 - z1, 1 + z2, 250, 252);
		KotakShape2(2 - x1, 2 + x2, 2 - z1, 2 + z2, 252, 254);
		KotakShape2(3 - x1, 3 + x2, 3 - z1, 3 + z2, 254, 256);
		KotakShape2(5 - x1, 5 + x2, 5 - z1, 5 + z2, 256, 258);
		KotakShape2(4 - x1, 4 + x2, 4 - z1, 4 + z2, 258, 260);
		KotakShape2(3 - x1, 3 + x2, 3 - z1, 3 + z2, 260, 262);
		KotakShape2(2 - x1, 2 + x2, 2 - z1, 2 + z2, 262, 264);
		KotakShape2(1 - x1, 1 + x2, 1 - z1, 1 + z2, 264, 266);
		KotakShape2(0 - x1, 0 + x2, 0 - z1, 0 + z2, 266, 268);
	}

	void Tanah(int x1, int x2, int z1, int z2) {
		KotakShape3(1 - x1, 1 + x2, 1 - z1, 1 + z2, 0, -30);
	}
	void Jalan(int x1, int x2, int z1, int z2) {
		KotakShape4(1 - x1, 1 + x2, 1 - z1, 1 + z2, 0, 1);
	}
	void StripJalan(int x1, int x2, int z1, int z2) {
		glLineWidth(1.0);
		KotakShape5(1 - x1, 1 + x2, 1 - z1, 1 + z2, 1, 2);
	}
	void Trotoar(int x1, int x2, int z1, int z2) {
		glLineWidth(1.0f);
		KotakShape2(1 - x1, 1 + x2, 1 - z1, 1 + z2, 1, 4);
	}
};
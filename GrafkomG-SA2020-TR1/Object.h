#pragma once
#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

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
	void PapanReklame(double y1, double y2, int R, int G, int B) {
		glColor3ub(102, 102, 102);
		//dinding
		glBegin(GL_POLYGON);
		glVertex3d(-23.66, y1, 51.38);
		glVertex3d(-22.04, y1, 51.38);
		glVertex3d(-22.04, y2, 51.38);
		glVertex3d(-23.66, y2, 51.38);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-22.04, y1, 51.38);
		glVertex3d(-22.04, y2, 51.38);
		glVertex3d(-22.04, y2, 49.35);
		glVertex3d(-22.04, y1, 49.35);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-22.04, y2, 49.35);
		glVertex3d(-22.04, y1, 49.35);
		glVertex3d(-23.66, y1, 49.35);
		glVertex3d(-23.66, y2, 49.35);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-23.66, y1, 49.35);
		glVertex3d(-23.66, y2, 49.35);
		glVertex3d(-23.66, y2, 51.38);
		glVertex3d(-23.66, y1, 51.38);
		glEnd();

		//Alas Bagian Atas
		glBegin(GL_POLYGON);
		glVertex3d(-14.74, y2, 51.38);
		glVertex3d(-14.74, y2, 49.35);
		glVertex3d(-30.95, y2, 49.35);
		glVertex3d(-30.95, y2, 51.38);
		glEnd();

		//Papan
		glBegin(GL_POLYGON);
		glVertex3d(-30.95, 12, 49.35);
		glVertex3d(-30.95, 32, 49.35);
		glVertex3d(-14.74, 32, 49.35);
		glVertex3d(-14.74, 12, 49.35);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-14.74, 32, 49.35);
		glVertex3d(-14.74, 12, 49.35);
		glVertex3d(-14.74, 12, 51.38);
		glVertex3d(-14.74, 32, 51.38);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-14.74, 12, 51.38);
		glVertex3d(-14.74, 32, 51.38);
		glVertex3d(-15.37, 32, 51.38);
		glVertex3d(-15.37, 12, 51.38);
		glEnd();
		//Latar 
		glColor3ub(0, 0, 255);
		glBegin(GL_POLYGON);
		glVertex3d(-15.37, 32, 51.38);
		glVertex3d(-15.37, 12, 51.38);
		glVertex3d(-15.37, 12, 50.08);
		glVertex3d(-15.37, 32, 50.08);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-15.37, 12, 50.08);
		glVertex3d(-15.37, 32, 50.08);
		glVertex3d(-29.98, 32, 50.08);
		glVertex3d(-29.98, 12, 50.08);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-29.98, 32, 50.08);
		glVertex3d(-29.98, 12, 50.08);
		glVertex3d(-29.98, 12, 51.38);
		glVertex3d(-29.98, 32, 51.38);
		glEnd();
		//
		glColor3ub(102, 102, 102);
		glBegin(GL_POLYGON);
		glVertex3d(-29.98, 12, 51.38);
		glVertex3d(-29.98, 32, 51.38);
		glVertex3d(-30.95, 32, 51.38);
		glVertex3d(-30.95, 12, 51.38);
		glEnd();
		//Atas Papan
		glBegin(GL_POLYGON);
		glVertex3d(-30.95, 32, 49.35);
		glVertex3d(-29.98, 32, 49.35);
		glVertex3d(-29.98, 32, 51.38);
		glVertex3d(-30.95, 32, 51.38);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-29.98, 32, 49.35);
		glVertex3d(-15.37, 32, 49.35);
		glVertex3d(-15.37, 32, 50.08);
		glVertex3d(-29.98, 32, 50.08);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-15.37, 32, 49.35);
		glVertex3d(-15.37, 32, 50.08);
		glVertex3d(-14.74, 32, 49.35);
		glVertex3d(-14.74, 32, 51.38);
		glVertex3d(-15.37, 32, 51.38);
		glEnd();

		//Huruf T
		glColor3ub(R, G, B);
		glBegin(GL_POLYGON);
		glVertex3d(-27.89, 30, 50.08);
		glVertex3d(-22.77, 30, 50.08);
		glVertex3d(-22.77, 30, 50.85);
		glVertex3d(-27.89, 30, 50.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-22.77, 30, 50.85);
		glVertex3d(-27.89, 30, 50.85);
		glVertex3d(-27.89, 29, 50.85);
		glVertex3d(-25.75, 29, 50.85);
		glVertex3d(-22.77, 29, 50.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-25.75, 18, 50.85);
		glVertex3d(-24.91, 18, 50.85);
		glVertex3d(-24.91, 29, 50.85);
		glVertex3d(-25.75, 29, 50.85);
		glEnd();

		//
		glBegin(GL_POLYGON);
		glVertex3d(-22.77, 30, 50.08);
		glVertex3d(-22.77, 30, 50.85);
		glVertex3d(-22.77, 29, 50.85);
		glVertex3d(-22.77, 29, 50.08);
		glEnd();
		//
		glBegin(GL_POLYGON);
		glVertex3d(-22.77, 29, 50.85);
		glVertex3d(-22.77, 29, 50.08);
		glVertex3d(-24.01, 29, 50.08);
		glVertex3d(-24.01, 29, 50.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-24.91, 29, 50.08);
		glVertex3d(-24.91, 29, 50.85);
		glVertex3d(-24.91, 18, 50.85);
		glVertex3d(-24.91, 18, 50.08);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-24.91, 18, 50.85);
		glVertex3d(-24.91, 18, 50.08);
		glVertex3d(-25.75, 18, 50.08);
		glVertex3d(-25.75, 18, 50.85);
		glEnd();


		glBegin(GL_POLYGON);
		glVertex3d(-25.75, 18, 50.08);
		glVertex3d(-25.75, 18, 50.85);
		glVertex3d(-25.75, 29, 50.85);
		glVertex3d(-25.75, 29, 50.08);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-25.75, 29, 50.85);
		glVertex3d(-25.75, 29, 50.08);
		glVertex3d(-27.89, 29, 50.08);
		glVertex3d(-27.89, 29, 50.85);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex3d(-27.89, 29, 50.08);
		glVertex3d(-27.89, 29, 50.85);
		glVertex3d(-27.89, 30, 50.85);
		glVertex3d(-27.89, 30, 50.08);
		glEnd();

		//A
		glBegin(GL_LINE_LOOP);
		glVertex3d(-22.82, 18, 50.08);
		glVertex3d(-22.82, 18, 50.85);
		glVertex3d(-20.67, 30, 50.85);
		glVertex3d(-20.67, 30, 50.08);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-20.67, 30, 50.85);
		glVertex3d(-20.67, 30, 50.08);
		glVertex3d(-19.63, 30, 50.08);
		glVertex3d(-19.63, 30, 50.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-19.63, 30, 50.08);
		glVertex3d(-19.63, 30, 50.85);
		glVertex3d(-17.48, 18, 50.85);
		glVertex3d(-17.48, 18, 50.08);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-17.48, 18, 50.85);
		glVertex3d(-17.48, 18, 50.08);
		glVertex3d(-18.37, 18, 50.08);
		glVertex3d(-18.37, 18, 50.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-18.37, 18, 50.08);
		glVertex3d(-18.37, 18, 50.85);
		glVertex3d(-18.95, 20.3, 50.85);
		glVertex3d(-18.95, 20.3, 50.08);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-18.95, 20.3, 50.85);
		glVertex3d(-18.95, 20.3, 50.08);
		glVertex3d(-21.38, 20.3, 50.08);
		glVertex3d(-21.38, 20.3, 50.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-21.38, 20.3, 50.08);
		glVertex3d(-21.38, 20.3, 50.85);
		glVertex3d(-21.96, 18, 50.85);
		glVertex3d(-21.96, 18, 50.08);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3d(-21.96, 18, 50.85);
		glVertex3d(-21.96, 18, 50.08);
		glVertex3d(-22.82, 18, 50.08);
		glVertex3d(-22.82, 18, 50.85);
		glEnd();

		glBegin(GL_LINE_LOOP);
		glVertex3f(-20.17, 28, 50.85);
		glVertex3f(-21.15, 21.3, 50.85);
		glVertex3f(-19.19, 21.3, 50.85);
		glEnd();

	}
};
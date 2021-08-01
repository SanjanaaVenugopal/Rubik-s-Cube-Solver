#include "Cube.h"
#include <iostream>

void Cube::R() {
	right.CW();
	Row temp = front.getrightside();
	front.setrightside(down.getrightside());
	down.setrightside(back.getleftside().flip());
	back.setleftside(up.getrightside().flip());
	up.setrightside(temp);
	cout << "R ";
}

void Cube::Rp() {
	right.CCW();
	Row temp = front.getrightside();
	front.setrightside(up.getrightside());
	up.setrightside(back.getleftside().flip());
	back.setleftside(down.getrightside().flip());
	down.setrightside(temp);
	cout << "R' ";
}

void Cube::R2() {
	R();
	R();
	//cout << "(R2) ";
}
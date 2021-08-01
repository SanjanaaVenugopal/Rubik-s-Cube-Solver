#include "Cube.h"
#include <iostream>

void Cube::F() {
	front.CW();
	Row temp = up.getlower();
	up.setlower(left.getrightside().flip());
	left.setrightside(down.getupper());
	down.setupper(right.getleftside().flip());
	right.setleftside(temp);
	cout << "F ";
}

void Cube::Fp() {
	front.CCW();
	Row temp = up.getlower();
	up.setlower(right.getleftside());
	right.setleftside(down.getupper().flip());
	down.setupper(left.getrightside());
	left.setrightside(temp.flip());
	cout << "F' ";
}

void Cube::F2() {
	F();
	F();
	//cout << "(F2) ";
}
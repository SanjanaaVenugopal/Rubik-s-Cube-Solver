#include "Cube.h"
#include <iostream>

void Cube::D() {
	down.CW();
	Row temp = front.getlower();
	front.setlower(left.getlower());
	left.setlower(back.getlower());
	back.setlower(right.getlower());
	right.setlower(temp);
	cout << "D ";
}

void Cube::Dp() {
	down.CCW();
	Row temp = front.getlower();
	front.setlower(right.getlower());
	right.setlower(back.getlower());
	back.setlower(left.getlower());
	left.setlower(temp);
	cout << "D' ";
}

void Cube::D2() {
	D();
	D();
	//cout << "(D2) ";
}
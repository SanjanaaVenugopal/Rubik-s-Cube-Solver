#include<iostream>
#include "Cube.h"

void Cube::B() {
	back.CW();
	Row temp = right.getrightside();
	right.setrightside(down.getlower().flip());
	down.setlower(left.getleftside());
	left.setleftside(up.getupper().flip());
	up.setupper(temp);
	cout << "B ";
}

void Cube::Bp() {
	back.CCW();
	Row temp = right.getrightside();
	right.setrightside(up.getupper());
	up.setupper(left.getleftside().flip());
	left.setleftside(down.getlower());
	down.setlower(temp.flip());
	cout << "B' ";
}

void Cube::B2() {
	B();
	B();
	//cout << "(B2) ";
}
#include "Cube.h"
#include <iostream>

void Cube::L() {
	left.CW();
	Row temp = front.getleftside();
	front.setleftside(up.getleftside());
	up.setleftside(back.getrightside().flip());
	back.setrightside(down.getleftside().flip());
	down.setleftside(temp);
	cout << "L ";
}

void Cube::Lp() {
	left.CCW();
	Row temp = front.getleftside();
	front.setleftside(down.getleftside());
	down.setleftside(back.getrightside().flip());
	back.setrightside(up.getleftside().flip());
	up.setleftside(temp);
	cout << "L' ";
}

void Cube::L2() {
	L();
	L();
	//cout << "(L2) ";
}

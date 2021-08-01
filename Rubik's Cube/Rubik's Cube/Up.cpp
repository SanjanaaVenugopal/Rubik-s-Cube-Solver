#include "Cube.h"
#include <iostream>

void Cube::U() {
	up.CW(); // turn clockwise on "up" side
	Row temp = front.getupper(); // save to a temporary row as it will be replaced
	front.setupper(right.getupper());
	right.setupper(back.getupper());
	back.setupper(left.getupper());
	left.setupper(temp);
	cout << "U ";
}

void Cube::Up() {
	up.CCW();
	Row temp = front.getupper();
	front.setupper(left.getupper());
	left.setupper(back.getupper());
	back.setupper(right.getupper());
	right.setupper(temp);
	cout << "U' ";
}

void Cube::U2() {
	U();
	U();
	//cout << "U2 ";
}

#include "flat.h"

Flat::Flat() {
	Flat::setInfo(0,0);
}
void Flat::setInfo(double _sq, double _for1) {
	Flat::square = _sq;
	Flat::for1 = _for1;
}
double Flat::getInfoSquare() {
	return Flat::square;
}
double Flat::getInfoFor() {
	return Flat::for1;
}
double Flat::FullPrice() {
	return Flat::square * Flat::for1;
}

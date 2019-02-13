#include "flat.h"

Flat::Flat() {
	Flat::set_Info(0,0);
}
void Flat::set_Info(double _sq, double _for1) {
	Flat::square = _sq;
	Flat::for1 = _for1;
}
double Flat::get_InfoSquare() {
	return Flat::square;
}
double Flat::get_InfoFor() {
	return Flat::for1;
}
double Flat::get_FullPrice() {
	return Flat::square * Flat::for1;
}

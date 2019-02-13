/* main.cpp */
#include "pch.h"
#include <iostream>
#include <vector>
#include "flat.h"

using namespace std;

int main()
{
	Flat kv;
	kv.setInfo(1.0, 1.0);
	/*double sum = 0;
	int n = 4;
	vector <flat> blockofflats(n);
	for (auto& it : blockofflats) {
		it.setInfo(rand() % 10+2, rand() % 200 + 100);
		it.getInfo();
		cout << endl;
		it.FullPrice();
		sum += it.FullPrice();
	}
	cout << "sum=" << sum;*/
	return 0;
} 
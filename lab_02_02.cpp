// lab_02_02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a, b, c, x, y,max_brick_1,max_brick_2;
	cout << "Brick dimensions:" << endl;
	cout << "Length(a) = "; cin >> a;
	cout << "Width(b) = "; cin >> b;
	cout << "Height(c) = "; cin >> c;
	cout << "Hole dimensions:" << endl;
	cout << "Height(x) = "; cin >> x;
	cout << "Width(y) = "; cin >> y;
	if ((a<=y && c<=x)||(b<=y && c<=x)||(a<=x && c<=y)||(b<=x && c<=y)||(a<=x && b<=y)||(a<=y && b<=x)){
		cout << "Brick can go through the hole."<<endl;
	}
	else{
		cout << "Brick can't go through the hole."<<endl;
	}
	system("pause");
	return 0;
}

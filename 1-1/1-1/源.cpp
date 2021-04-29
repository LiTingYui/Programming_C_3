#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y, z, a, b;
	x = 0.61;
	y = 0.9;
	z = 0.3;
	a = (pow(z, 2 * x) + pow(y, -x) * cos(z + y) * x) / (x + 1);
	b = sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin((x + z) / x), 3);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "a = : " << a << endl;
	cout << "b = : " << b << endl;
	return 0;
}
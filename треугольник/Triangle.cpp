#include"Triangle.h"

double a, b, c;
bool Triangle::exst_tr()
{
	return((a + b > c) && (b + c > a) && (a + c > b));
}

void Triangle::set(double a1, double b1, double c1)
{
	a = a1;
	b = b1;
	c = c1;
}

void Triangle::show()
{
	cout << "1st side of a triangle " << a << endl;
	cout << "2nd side of a triangle " << b << endl;
	cout << "3rd side of a triangle " << c << endl;
}

double Triangle::Perimetr()
{
	double p = a + b + c;
	return p;
}

double Triangle::square()
{
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

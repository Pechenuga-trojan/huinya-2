#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double A, x1, dx, x, y;
	int n, i;
	cout << "n="; cin >> n;
	cout << "A="; cin >> A;
	x1 = -A;
	dx = 3 * A / 10;
	x = x1;
	for (i = 1; i <= n; i++)
	{
		if (x < 0)
		{
			y = 2*A*sqrt(1- pow(x/A, 2));
		}
		else
		{
			y = A/2 * cos(x) + 3*A/2;
		}

		cout << "x=" << x << "\t" << "y=" << y << endl;
		x = x + dx;
	}
	return 0;
}
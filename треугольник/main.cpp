#include<cmath>
#include"Triangle.h"

int main()
{
	Triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++)
	{
		cout << "input a, b and c for triangle number: " << i+1 << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst_tr()))
		{
			mas[i].show();
			cout << "there is no triangle with such sides, try again" << endl;
			i--;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl << endl;
		mas[i].show();
		cout << "Perimetr = " << mas[i].Perimetr() << endl;
		cout << "S = " <<  mas[i].square() << endl;
	}
	return 0;
}
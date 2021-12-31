#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void wordShit()
{
	string str = "Christopher Robin";
	string display = "";

	for (int i = 0; i < str.length() + 1; i++)
	{
		display += str.substr(0, i) + "\n";
		if (str.length() == i)
		{
			for (int i = str.length() - 1; i > 0; i--)
			{
				display += str.substr(0, i) + "\n";
			}
		}
	}
	cout << display << endl;

}

void quadraticEquation(float a, float b, float c)
{
	float discriminant, x1, x2, imaginaryPart, realPart;

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0)
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "When discriminant is positive, we get two Real solutions" << endl;
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2 << endl;
	}
	else if (discriminant == 0)
	{
		x1 = -b / (2 * a);
		cout << "When discriminant is zero we get just ONE real solution (both answers are the same)" << endl;
		cout << "x1 / x2: " << x1 << endl;
	}
	else
	{
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "x1: " << realPart << "+" << imaginaryPart << "i" << endl;
		cout << "x2: " << realPart << "-" << imaginaryPart << "i" << endl;
	}
	cout << "Discriminant: " << discriminant << endl;
}
typedef long long ll;
typedef long double ld;
void aboveAverage()
{
	int cases;
	cin >> cases;

	while (cases--)
	{
		ll s;
		cin >> s;
		vector<ll> stud(s);

		for (auto& i : stud)
		{
			cin >> i;
		}

		ll total = 0;
		for (auto i : stud)
		{
			total += i;
		}
		ll better = 0;
		ld average = total / ld(s);
		for (auto i : stud)
		{
			if (i > average)
			{
				better++;
			}
		}

		cout << fixed;
		cout.precision(3);
		cout << 100 * better / double(s) << "%" << endl;
	}
}


int main()
{
	aboveAverage();

	return 0;
}
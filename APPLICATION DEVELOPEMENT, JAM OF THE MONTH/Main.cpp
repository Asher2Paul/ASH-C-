#include<iostream>
#include<string>

using namespace std;

int main()
{
	int x,y,z;
	char package;
	string name;
	
	cout << "WHAT IS YOUR NAME?" << endl;
	getline(cin, name);
	
	cout << "WELCOME TO THE CLUB! "<<name<< endl;

	
	cout << "WHAT PACKAGE HAVE YOU PURCHASED? A,B or C"<<endl;
	cin >> package;
	

	{

		if (package == 'A' || package == 'a')
		{
			cout << "HOW MANY JAMS,JELLIES OR PRESERVES HAVE YOU PURCHASED THIS MONTH?" << endl;
			cin >> x;
			if (x == 2)
			{
				cout << "THE CHARGE IS $8" << endl;
			}
			else if (x > 2)
			{
				x = 8 + 5 * (x - 2);
				cout << "THE TOTAL CHARGE IS" << " $" << x << endl;
			}
		}

		if (package == 'B' || package == 'b')
		{
			cout << "HOW MANY JAMS,JELLIES OR PRESERVES HAVE YOU PURCHASED THIS MONTH?" << endl;
			cin >> y;
			if (y == 4)
			{
				cout << "THE CHARGE IS $12" << endl;
			}
			else if (y > 4)
			{
				y = 12 + 4 * (y - 4);
				cout << "THE TOTAL CHARGE IS" << " $" << y << endl;
			}
		}

		if (package == 'C' || package == 'c')
		{
			cout << "HOW MANY JAMS,JELLIES OR PRESERVES HAVE YOU PURCHASED THIS MONTH?" << endl;
			cin >> z;
			if (z == 6)
			{
				cout << "THE MONTHLY CHARGE IS $15" << endl;
			}
			else if (z > 6)
			{
				z = 15 + 3 * (z - 6);
				cout << "THE TOTAL CHARGE IS" << " $" << z << endl;
			}
		}
	 	
		if (package != 'A' && package != 'a' && package != 'B' && package != 'b' && package != 'C' && package != 'c')
		{
			cout << "invalid package entered" << endl;
		}
		else if (package == 'A' && package == 'a' && package == 'B' && package == 'b' && package == 'C' && package == 'c')
		{
			cout << endl;
		}

		if (package == 'A' || package == 'a' && package == 'B' && package == 'b' && package == 'C' && package == 'c')
		{
			cout << "THANKS ! DO VISIT US AGAIN!" << endl;
			return 0;
		}

	  }
	
	
}
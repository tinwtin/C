#include <iostream>
using namespace std;
main() 
{
	double  h,a,b,S,V;
	int tin,TIN; 
	int i;
	
	for (i = 0;i == 0;)
	{
		cout << "1,S" << endl;
		cout << "2,V" << endl;
		cout << "0,exit" << endl;
		cout << "Please input your choise : " ;
		cin >> tin;
		
		if (tin == 1)
		{
			cout << "1,S长方形" << endl;
			cout << "2,S正方形" << endl;
			cout << "Please input your choise : " ;
			cin >> TIN;
			if (TIN == 1)
			{
				cout << "Please input a : ";
				cin >> a;
				cout << "Please input b : ";
				cin >> b;
				S = a*b;
				cout << "It's " << S << endl;
				
			}
			else if (TIN == 2)
			{
				cout << "Please input a : ";
				cin >> a;
				S = a*a;
				cout << "It's " << S << endl;
			}
			 
		}
		else if (tin == 2)
		{
			cout << "1,V长方体" << endl;
			cout << "2,V正方体" << endl;
			cout << "Please input your choise : " ;	
			cin >> TIN; 
			if (TIN == 1)
			{
				cout << "Please input a : ";
				cin >> a;
				cout << "Please input b : ";
				cin >> b;
				cout << "Please input h : ";
				cin >> h;
				V = a*b*h;
				cout << "It's " << V << endl;		
			}	
			else if (TIN == 2)
			{
				cout << "Please input a : ";
				cin >> a;
				V = a*a*a;
				cout << "It's " << V << endl;
			}
		}
		else if (tin == 0)
		{
			i=1;
		}
	}
	
}

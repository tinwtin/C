#include <iostream>
using namespace std;
main() 
{
	double  h,a,r,s;
	int tin; 
	int i,j;
	
	//cout << "please input the times:" << endl;
	//cin >> j;
	
	for (i=0;i==0;)
	{
		cout << "1.S3" << endl;
		cout << "2.Syuan"<< endl;
		cout << "0.exit"<< endl;
		cout << "please input your choise" << endl;
		cin >> tin;
		
		if (tin == 1)
		{
			cout << "please input h : ";
			cin >> h;
			cout << "please input a : ";
			cin >> a;
			s = h*a/2;
			cout << "it's " << s << endl;
		}
		
		else if (tin == 2)
		{
			cout << "please input r : ";
			cin >> r;
			s = 3.14*r*r;
			cout << "it's " << s << endl;	
		}
		else if (tin == 0)
		{
			i=1;
		}
	}

}

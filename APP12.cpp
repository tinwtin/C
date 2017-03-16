#include <iostream>
using namespace std;
main()
{
	double d1,d2,d3,dTotal,dAvg;
	cout << "please input the frist : ";
	cin >> d1;
	cout << "please input the second : ";
	cin >> d2;
	cout << "please input the third : ";
	cin >> d3;
	dTotal = d1+d2+d3;
	dAvg = dTotal /3;
	cout << "the three nember are: " << d1 <<"  "<< d2 <<"  "<< d3 <<endl;
	cout << "the total is: " << dTotal << endl;
	cout << "the avg is: " << dAvg; 
}

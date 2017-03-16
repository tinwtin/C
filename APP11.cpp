#include <iostream>
using namespace std;
#define PI 3.14
main ()
{
	double r,S,C;
	cout << "please input r : ";
	cin >> r;
	S=PI*r*r;
	C=PI*r*2;
	cout << "It's : S="<< S <<" C= " << C;
} 

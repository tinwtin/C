#include <iostream>
 using namespace std;
 main()
 {
 	double dA,dBj,dLl,dT,dLx,dAll,dB;
 	cout << "please input the 本金 : ";
	cin >>  dBj;
	cout << "please input the 利率 : ";
	cin >>  dA;
	cout << "please input the 时间 : ";
	cin >>  dT;
	dLl = dA / 100;
	for (dB=0;dB <dT;dB++)
	{
		dLx = dBj*dLl;
		dAll = dLx + dBj;
		dBj = dAll;
	}
	cout << dAll;
 } 

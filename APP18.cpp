#include <iostream>
 using namespace std;
 main()
 {
 	double dA,dBj,dLl,dT,dLx,dAll,dB;
 	cout << "please input the ���� : ";
	cin >>  dBj;
	cout << "please input the ���� : ";
	cin >>  dA;
	cout << "please input the ʱ�� : ";
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

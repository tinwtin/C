#include <iostream>
 using namespace std;
 main()
 {
 	double dA,dBj,dLl,dT,dLx,dAll;
 	cout << "please input the ���� : ";
	cin >>  dBj;
	cout << "please input the ���� : ";
	cin >>  dA;
	cout << "please input the ʱ�� : ";
	cin >>  dT;
	dLl = dA / 100;
	dLx = dBj*dLl*dT;
	dAll = dLx + dBj;
	cout << dAll;
 }

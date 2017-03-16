#include <iostream>
 using namespace std;
 main()
 {
 	double dA,dBj,dLl,dT,dLx,dAll;
 	cout << "please input the 本金 : ";
	cin >>  dBj;
	cout << "please input the 利率 : ";
	cin >>  dA;
	cout << "please input the 时间 : ";
	cin >>  dT;
	dLl = dA / 100;
	dLx = dBj*dLl*dT;
	dAll = dLx + dBj;
	cout << dAll;
 }

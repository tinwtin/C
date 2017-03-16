#include <iostream>
 using namespace std;
 main ()
 {
 	double di,dj,dk;
 	cout << "please input the number one : ";
 	cin >> di;
 	cout << "please input the number two : ";
 	cin >> dj;
 	cout << "please input the number three : ";
 	cin >> dk;
 	if ((dk < di + dj)&&(di < dk +dj)&&(dj < di +dk))
 	{
 		cout << "that's okay";
 	}
 	else
 	{
 		cout << "no";
 	}
 } 

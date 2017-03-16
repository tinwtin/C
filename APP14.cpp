#include <iostream> 
using namespace std;
main()
{
	int year;
	cout << "please input year : ";
	cin >> year;
	if(year %4==0&&year %100 !=0 || year %400==0)
	{
		cout << "run nian"<<endl;
	}
	else
	{
		cout << "ping nian"<< endl;
	}
}


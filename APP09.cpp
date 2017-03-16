#include <iostream>
using namespace std;
main ()
{	
	int i,j,k,l;
	int iTrue;
	iTrue =1;
	cout << "请输入数字：" ;
	cin >> j; 
	for (i=2;i<j/2;i++)
	{	
		l=j%i;
		if (l==0) iTrue = 0;	
	}	
	if (iTrue ==0)
	{
		cout << "不是质数" ;	
	}
	else 
	{
		cout << "质数"; 	
	}
}  

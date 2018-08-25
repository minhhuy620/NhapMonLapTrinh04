#include<iostream>
using namespace std;

int ptb1(int a, int b,int x){
	return x;
}

main(){
	int n1, n2,n3;
	cin >> n1 >> n2;
	if(n1 == 0 && n2 != 0)
	{
	    int kq1 = ptb1(n1,n2,n3);
	    if( kq1 == 2 )
	  cout << "phuong trinh vo nghiem" << kq1;
	}
	else if(n1 == 0 && n2 == 0)
	{
		int kq2 = ptb1(n1,n2,n3);
		if( kq2 == 0 )
	  cout << "phuong trinh vo so nghiem" << kq2;
	}
	else if(n1 != 0)
	{
		int kq3 = ptb1(n1,n2,n3);
		kq3 = -n2 / n1;
		if( kq3 != 0 ) 
	  cout << "x =" << kq3;
	}
	
}


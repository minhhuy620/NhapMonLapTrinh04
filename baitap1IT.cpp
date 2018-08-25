#include<iostream>
using namespace std;

int tinh(int i, int n, int f =1 ){
	for( i = 1; i < n; i++){
	    f = f * i;
		}
	    return f;
}

main(){
	int x , y ,z;
	cin >> y;
	int kq = tinh(x,y,z);
	cout << kq;
	return kq;
}
// viet game doan so 
// nhap vao n xuat ra tong tu 1 den n



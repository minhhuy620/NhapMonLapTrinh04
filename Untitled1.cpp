#include<iostream>
using namespace std;

int max(int a, int b, int c){
	    if(a > b > c)
            return a;
		else if (b > c > a)
			return b;
        else
        	return c;
	}
    
main(){
      int x, y, z;
      cin >> x >> y >> z;
      
      int kq = max(x, y,z);
      cout << kq;
  }

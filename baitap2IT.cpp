#include <iostream>
using namespace std;

int main(){
  int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  
  for(int i = 0; i < 20 ; i++)
      {
      cout << arr[i]; // xuat gia tri cua mang
      }
      // in ra cac so chan~
      cout << "\n cac so chan :";
     for(int i = 2; i <= 20 ; i++)
	    {
	    	if(arr[i]%2 == 0)
			  cout  << arr[i] ;
		}
		// in ra cac so le
		cout << "\n cac so le :";
	  for(int i = 1; i <= 20 ; i++)
	    {
	    	if(arr[i]%2 != 0)
			   cout << arr[i];  
		}  	  
  // tinh tong mang
    int sum = 0;
    for(int i = 0; i <= 20 ; i++){
    	sum += arr[i];
	}
    cout << "\n tong cua mang :" << sum;
  //  tinh tong so le
    int sum1 =0;
    for(int i = 0; i <= 20 ; i++){
    	if(arr[i]%2 != 0)
    	 sum1 += arr[i];
	}
    cout << "\n tong cac so le :" << sum1;
  // tinh tong so chan
     int sum2 =0;
    for(int i = 0; i <= 20 ; i++){
    	if(arr[i]%2 == 0)
    	 sum2 += arr[i];
	}
    cout << "\n tong cac so chan :" << sum2;
     
  // tim phan tu lon nhat
    int max;
     max = arr[0];
     for(int i = 0; i <= 20 ; i++)
    {
    	if(max < arr[i])
    	    max = arr[i];
    	    
	}
	cout << "\n phan tu lon nhat :" << max;
   // tim phan tu nho nhat 
   int min;
     min = arr[0];
     for(int i = 0; i < 20 ; i++)
    {
    	if(min > arr[i])
    	    min = arr[i];
    	    
	}
	cout << "\n phan tu nho nhat :" << min;
     them phan tu va xoa phan tu em doc tren google em khong hieu nen doi anh giang luon
     Con bai 3 va bai 4 em khong hieu duoc quy luat no xay ra the nao
    
    
    
    
}

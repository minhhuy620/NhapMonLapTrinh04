#include<iostream>
using namespace std;

int main()
{ 
  int a,b,c;
  cout << " nhap so diem 3 mon toan ly hoa :";
  cin >> a >> b >> c;
  int d;
  d = (a+b+c)/3;
  cout << d;
  if(d >= 8)
     cout << "\nhoc sinh xuat sac " << "Vu Minh Huy";
     
  else if(7 <= d < 8)
     cout << " \nhoc sinh gioi " << " Le Duc Tai";
     
  else if(6 <= d < 7)
     cout << " \nhoc sinh kha" << "Nguyen Tuan";
     
  else if(5 <= d < 6)
    cout << " \nhoc sinh trung binh" << "Le Can Duc";
    
  else if( d < 5)
    cout << " \nhoc sinh yeu" << "Tran Tuc Tien";
    
    return 0;
}




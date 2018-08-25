#include<iostream>
using namespace std;

 int xuatngay(int thang , int nam){
      switch(thang){
      	case 1 :
      	case 3 :
      	case 5 :
     	case 7 :
      	case 8 :
      	case 10:
      	case 12 :
      	      return 31;
      	      break;
        case 4:
        case 6:
        case 9:
        case 11 :
        	  break;
        	  return 30;
        case 2 :
        	if(nam % 4 == 0 && nam % 100 == 0 || nam % 400 == 0 )
        	return 29;
            else
            return 28;
	  
	  default :
	  	  if(thang > 0)
	      return 0;
	      else if(thang < 0)
	      return -1;
      }
	  }
 main()
 {
 	int x,y;
 	cin >> x;
 	int kq = xuatngay(x,y);
 	cout << kq;
 }

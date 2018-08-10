#include<iostream>
using namespace std;

int main()
{  
    int thang;
    int nam;
    cin >> thang >> nam;
    switch(thang){
	
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10 :
        case 12 :      	 	 	 	 	
      	cout << " thang nay co 31 ngay";
          break;
        
      	
        case 4 :
        case 6 :
       	case 9 :
       	case 11 :
       	      cout << " thang nay co 30 ngay";
  	     break;
  	     
  	    case 2:
  	        if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 ==0 ){
			     cout << "thang nay co 29 ngay";}
  	    		
  	    		else {
  	    			 cout << " thang nay co 28 ngay";
				  }
	    default :
	    	if(thang = 0){cout << "khong xax dinh ";}
			
  	         
  	}
    
	return 0;	 
}

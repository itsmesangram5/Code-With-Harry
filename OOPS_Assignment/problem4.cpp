#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" ";   
 for(i=2;i<number;++i)     
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }  
//Output
//Enter the number of elements: 10
//0 1 1 2 3 5 8 13 21 34
//--------------------------------
//Process exited after 5.46 seconds with return value 0
//Press any key to continue . . .   

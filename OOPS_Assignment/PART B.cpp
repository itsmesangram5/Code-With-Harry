# include <iostream>
#include<cmath>
using namespace std;

int main()
   {
     int n,i,f,g,h,e,z;
   	 float a,b,c,d;
	 float myscore[n];
	 cout<<"Enter the Number of Players "<<endl;
	 cin>>n;
	 for(i=1;i<n+1;i++)
	    {
	      cout<<"Enter the throw value of player "<<n<<endl;
		 cin>>a>>b>>c;
		 d=(a+b+c)/3;
		 myscore[i]=d;
		}
	     int max = 0;
         for(int h = 0; h < 5; h++)
		   {
              if(myscore[h] > max)
			   {
                  max = myscore[h];
               }
            }
                  for(g=0; g<n+1; g++)
                    {
                     if(myscore[g]=max)
                        {
                               c=1;
                               z=i+1;
                               break;
                        }
                    }
                                     e=z-1;    
    cout<<"The winner is player"<<d<<" and his score is"<<myscore[e]<<endl;
    return 0;
   }

#include <iostream>
using namespace std;
 
int main() 
{
    short t;
    cin>>t;
    
    int a,b;
    
    while(t--) 
    {
        cin>>a>>b;
        cout<<-(a%b);
    }
    return 0;
}

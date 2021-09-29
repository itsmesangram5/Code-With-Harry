#include<iostream>
using namespace std;

int main()
{
        int arr[10], i, num, n, c=0, d;
        cout<<"\n Enter Array Size : ";
        cin>>n;
        cout<<"\n Enter Array Elements : \n";
        for(i=0; i<n; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }
        cout<<"\n Enter Element to be Searched : ";
        cin>>num;
        for(i=0; i<n; i++)
        {
                if(arr[i]==num)
                {
                        c=1;
                        d=i+1;
                        break;
                }
        }
        if(c==0)
        {
                cout<<"\n Element Not Found..!!";
        }
        else
        {
                cout<<"\n Element "<<num<<" Found At Position "<<d;
        }
        return 0;
}
//Output
// Enter Array Size : 5
//
// Enter Array Elements :
// 4
// 5
// 6
// 8
// 9
//
// Enter Element to be Searched : 8
//
// Element 8 Found At Position 4
//--------------------------------
//Process exited after 11.67 seconds with return value 0
//Press any key to continue . . .

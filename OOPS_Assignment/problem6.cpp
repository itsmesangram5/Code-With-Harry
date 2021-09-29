#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(10); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
//Output
//Enter 10 Array Elements: 1
//5
//45
//5
//78
//597
//45
//5
//1
//0
//
//The Original Array is:
//1 5 45 5 78 597 45 5 1 0
//
//The Reverse of Given Array is:
//0 1 5 45 597 78 5 45 5 1
//
//--------------------------------
//Process exited after 22.63 seconds with return value 0
//Press any key to continue . . .

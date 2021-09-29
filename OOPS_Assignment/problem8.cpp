#include <iostream>
using namespace std;
# define MAX 100
int main()
{
	int arr[MAX];
	int n,i,j,temp;
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	if(n<0 or n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	
	return 0;
	
}
//Output
//Enter total number of elements to read: 10
//Enter element [1] 10
//Enter element [2] 9
//Enter element [3] 8
//Enter element [4] 7
//Enter element [5] 6
//Enter element [6] 5
//Enter element [7] 4
//Enter element [8] 3
//Enter element [9] 2
//Enter element [10] 1
//Unsorted Array elements:
//10      9       8       7       6       5       4       3       2       1
//Sorted (Ascending Order) Array elements:
//1       2       3       4       5       6       7       8       9       10
//
//--------------------------------
//Process exited after 14.4 seconds with return value 0
//Press any key to continue . . .

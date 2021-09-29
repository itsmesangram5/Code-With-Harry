#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element  " << max;
    cout << "    Smallest element  " << min;
    return 0;
}
//Output
//Enter the size of the array : 5
//Enter the elements of the array : 5
//4
//8
//9
//712
//Largest element  712    Smallest element  4
//--------------------------------
//Process exited after 17.09 seconds with return value 0
//Press any key to continue . . .


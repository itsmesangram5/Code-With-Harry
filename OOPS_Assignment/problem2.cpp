# include <iostream>
# include<cmath>
using namespace std;
 
int main()
{
    int a, b, i, j,z;
    cout << "Enter the range from  ";
    cin >> a;
    cout << "\n to ";
    cin >> b; 
    cout << "\nPrime numbers between "
         << a << " and " << b << " are: ";
    for (i = a; i <= b; i++) {
        if (i == 1 or i == 0)
            continue;
        z = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                z = 0;
                break;
            }
        }
        if (z== 1)
            cout << i << "\n ";
    }
 
    return 0;
}
//output
//Enter the range from  1
//
// to 50
//
//Prime numbers between 1 and 50 are: 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19
// 23
// 29
// 31
// 37
// 41
// 43
// 47
//
//--------------------------------
//Process exited after 4.189 seconds with return value 0
//Press any key to continue . . .


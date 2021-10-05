#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class typestr
{
    string s;

public:
    string getdata()
    {
        cin >> s;
        return s;
    }
    void diffstr()
    {
        int a = s.length();
        int sumo = 0;
        for (int i = 0; i < a; i++)
        {
            int m = remainder(i, 2);
            if (m != 0)
            {
                char p = s.at(i);
                sumo = sumo + int(p);
            }
        }
        int sume = 0;
        for (int j = 0; j < a; j++)
        {
            int m = remainder(j, 2);
            if (m == 0)
            {
                char q = s.at(j);
                sume = sume + int(q);
            }
        }
        int diff = (sumo - sume);
        diff = abs(diff);
        int x = remainder(diff, 3);
        int y = remainder(diff, 5);
        int z = remainder(diff, 7);
        if (x == 0 || y == 0 || z == 0)
        {
            cout << "Prime String" << endl;
        }
        else
        {
            cout << "Casual String" << endl;
        }
    }
};
int main()
{
    int n;
    cout << "How many strings do you want to enter ?" << endl;
    cin >> n;
    cout << "Enter the strings" << endl;
    typestr obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        obj[i].diffstr();
    }
    return 0;
}
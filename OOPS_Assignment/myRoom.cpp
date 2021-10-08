#include <iostream>
using namespace std;
class Hotelroom
{
    int bedrooms, bathrooms;
    float friend getdata();

public:
    float room_profit(int a, int b)
    {
        return ((a*50)+(b*100));
    }
};
class Hotelapartment : public Hotelroom
{
    int bedrooms, bathrooms;
    float friend getdata();

public:
    float apartment_profit(int c, int d)
    {
        return ((c*50)+(d*100)+100);
    }
};
float getdata()
{
    string s;
    int bedrooms, bathrooms;
    cin >> s >> bedrooms >> bathrooms;
    if (s == "standard")
    {
        Hotelroom p;
        return p.room_profit(bedrooms,bathrooms) ;

    }
    if (s == "apartment")
    {
        Hotelapartment q;
        return q.apartment_profit(bedrooms,bathrooms);
    }
    else
    {
        cout << "Please check your input !!";
        return 0.0;
    }
}
int main()
{
    int n , total_profit=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        float q=getdata();
        total_profit=total_profit+ q;
    }
    cout<<total_profit;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
float a,b;
char c;
cout<<"Enter the first number "<<endl;
cin>>a;
cout<<"Enter the second number "<<endl;
cin>>b;
cout<<"Enter the operation you want to perform"<<endl;
cin>>c;
switch (c)
{
case '+':
    cout<<"The value of "<<a<<" + "<<b<<" is "<<float(a+b)<<endl;
    break;
case '-' :
    cout<<"The value of "<<a<<" - "<<b<<" is "<<float(a-b)<<endl;
    break;
case '*':
    cout<<"The value of "<<a<<" * "<<b<<" is "<<float(a*b)<<endl;
    break;
case '/':
    cout<<"The value of "<<a<<" / "<<b<<" is "<<float(a/b)<<endl;
    break;            

default:
    cout<<"You have entered wrong operator .....Please check your operator ";
    break;
}
}
#include<iostream>
#include<string>
using namespace std;
class student
{
private:
string name;
int age;
int year;
int byear;
string branch;
string div;
int roll;
public:
student(){
name="Sangram_Nangare";
age=18;
year=2;
byear=2002;
branch= "Computer Science";
div="B";
roll=20118;
}
student(string name,int age,int year,int byear,string branch,string div,int roll){

}
void getdata(){
    cout<<"Enter Your Name "<<endl;
    cin>>name;
    cout<<"Enter Roll No. "<<endl;
    cin>>roll;
    cout<<"Enter Division "<<endl;
    cin>>div;
    cout<<"Enter Branch "<<endl;
    cin>>branch;
    cout<<"Enter your Year of Birth  "<<endl;
    cin>>byear;
    cout<<"Enter the year in wich you are studying "<<endl;
    cin>>year;
}
void displaydata(){
    cout<<"Name of the student is "<<name<<endl;
    cout<<"Roll No. is "<<roll<<endl;
    cout<<"Division is "<<div<<endl;
    cout<<"Branch is "<<branch<<endl;
    cout<<"Year of Birth is "<<byear<<endl;
    cout<<"Year in Which studying is "<<year<<endl;
    cin>>year;

}
~student(){
}
};
int main(){
    student stud1;
    stud1.getdata();
    stud1.displaydata();
    student stud2;
    stud2.displaydata();
    student stud3("ABCde",18,2,2002,"Meche","cb",20518);
    stud3.displaydata();

}
#include<iostream>
using namespace std;
class personal
{
 protected:
  char name[50];
  char address[50];
  char birthdate[50];
  char gender;
 public:
  void get_personal();
};
class professional
{
 protected:
  int noofyearsexp;
  char orgname[50];
  char projname[50];
  char projdetails[50];
 public:
  void get_professional();
};

class academic
{
 protected:
  int year;
  int marks;
  int percentage;
  char Class[50];
 public:
  void get_academic();
};
class biodata: public personal,public academic,public professional
{
 public:void display();
};
void personal::get_personal()
{
 cout<<"Enter name ";
 cin>>name;
 cout<<"\nEnter Address::";
 cin>>address;
 cout<<"\nEnter Birthdate(dd/mm/yyyy)::";
 cin>>birthdate;
 cout<<"\nEnter gender(M/F)::";
 cin>>gender;
}
void professional::get_professional()
{
 cout<<"\nEnter number of years of exp::";
 cin>>noofyearsexp;
 cout<<"\nEnter organization name::";
 cin>>orgname;
 cout<<"\nEnter project name::";
 cin>>projname;
 cout<<"\nEnter project Details::";
 cin>>projdetails;
}
void academic::get_academic()
{
 cout<<"\nEnter academic year::";
 cin>>year;
 cout<<"\nEnter total marks::";
 cin>>marks;
 cout<<"\nEnter percentage::";
 cin>>percentage;
 cout<<"\nEnter class::";
 cin>>Class;
}
void biodata::display()
{

 cout<<"Employee Biodata"<<endl;
 cout<<"Personal Details"<<endl;
 cout<<"Name::"<<name<<endl;
 cout<<"address::"<<address<<endl;
 cout<<"birthdate::"<<birthdate<<endl;
 cout<<"Gender::"<<gender<<endl;
 cout<<"\nAcademic Details"<<endl;
 cout<<"Academic Year "<<"marks "<<"percentage "<<"class "<<endl;
 cout<<year<<"\t\t0"<<marks<<"\t"<<percentage<<"\t"<<Class<<endl;
 cout<<"Professional Details"<<endl;
 cout<<"\nOrganization Name::"<<orgname;
 cout<<"\nYears of Experince::"<<noofyearsexp;
 cout<<"\nProject Done::"<<projname;
 cout<<"\nProject Details::"<<projdetails;
}
int main()
{
 biodata b;
 b.get_personal();
 b.get_professional();
 b.get_academic();
 b.display();
}
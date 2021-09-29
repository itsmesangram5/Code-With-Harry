#include<iostream>

using namespace std;

class Book{

string a;

string t;

int p;

int noc;

public:

Book(){

    string a="";

    string t="";

    int p=0;

    int noc=0;

    int stock=1;

}

Book(string author,string title,int price,int copies){

    a=author;

    t=title;

    p=price;

    noc=copies;

}

void getdata(){

    cout<<"Enter the following details please -->"<<endl;

    cout<<"Author of Book :"<<endl;

    cin>>a;

    cout<<"Title of Book :"<<endl;

    cin>>t;

    cout<<"Price of Book :"<<endl;

    cin>>p;

    cout<<"Number of Copies of Book :"<<endl;

    cin>>noc;

}

void search(){

    string author;

    string title;

    int copies;

    cout<<"Enter title of book to search for :"<<endl;

    cin>>title;

    cout<<"Enter author of book to search for :"<<endl;

    cin>>author;

    cout<<"Enter number of Copies"<<endl;

    cin>>copies;

    if((author==a)&&(title==t)&&(copies<=noc)){

        cout<<"Book is available !!!"<<endl;

        cout<<"The price of Books will be :"<<p*copies<<endl;

    }

    else{

        cout<<"Sorry the Book is not available :( "<<endl;

    }

}

};

int main()

{

    Book b;

    b.getdata();    

    b.search();

 return 0;

}
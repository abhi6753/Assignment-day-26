//6. Define a class student and write a program to enter student details using constructor\
and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int clas;
    string name;
    int roll_num;
    long long int mob_num;
    string email;
    public:
    Student(int c,string n,int roll,long long int mob,string e_mail)
    {
        clas = c;
        name = n;
        roll_num = roll;
        mob_num = mob;
        email = e_mail;
    }
    void display()
    { 
        cout<<"Class    = "<<clas<<endl;
        cout<<"Name     = "<<name<<endl;
        cout<<"Roll no. = "<<roll_num<<endl;
        cout<<"Mob no.  = "<<mob_num<<endl;
        cout<<"Email    = "<<email<<endl<<endl;
    }   
};
int main()
{
    int clas,rol_num;
    long long int mob;
    char name[50];
    string email;
    cout<<"Enter your class: "<<endl;
    cin>>clas;
    cin.ignore();
    cout<<"Enter your name: "<<endl;
    cin.getline(name,50);
   // 
    cout<<"Enter roll num:  "<<endl;
    cin>>rol_num;
    cout<<"Enter mobile num: "<<endl;
    cin>>mob;
    cout<<"Enter mail id: "<<endl;
    cin>>email;
    Student s1(clas,name,rol_num,mob,email);
    cout<<"\n*****************Student DATA******************"<<endl;
    s1.display();
    cin.get();
    return 0;
}
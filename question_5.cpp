//5. Define a class Date and write a program to Display Date and initialise date object\
using Constructors.
#include<cstdio>
#include<iostream>
using namespace std;
class Date
{
    int dd,mm,yy;
    public:
    Date(int d,int m,int y)
    {
       dd = d;
       mm = m;
       yy = y;
    }
    void DisplayDate()
    {
        printf("%.2d-%.2d-%.2d\n",dd,mm,yy);
        //cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }

};
int main()
{
    Date d1(14,01,2023);
    d1.DisplayDate();
    cin.get();
    return 0;
}
/*2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
       h=m=s=0;
    }
    void setTime(int hr,int min,int sec)
    {
       h=hr;
       m=min;
       s=sec;
    }
    void showTime()
    {
        cout<<h<<" hour "<<m<<" minute "<<s<<" second"<<endl;
    }
    void normalize()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s = s+t.s;
        temp.m = m+t.m;
        temp.h = h+t.h;
        temp.normalize();
        return temp;
    }

};
int main()
{
    Time t1,t2,t3;
    int h,m,s;
    cout<<"Enter Hour, Minute and Second:"<<endl;
    cin>>h>>m>>s;
    t1.setTime(h,m,s);
    cout<<"Enter Hour, Minute and Second:"<<endl;
    cin>>h>>m>>s;
    t2.setTime(h,m,s);
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    cout<<"Total time = ";
    t3.showTime();
    cin.get();
    return 0;
}
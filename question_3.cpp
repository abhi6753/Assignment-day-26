//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor
#include<iostream>
using namespace std;
class Volume 
{
    int a,volume;
    public:
    Volume()
    {
        a=0;
    }
    void setA(int x)
    {
        a=x;
    }
    int getA()
    {
        return a;
    }
    void calculateVolume()
    {
        volume = a*a*a;
    }
    int getVolume()
    {
        return volume;
    }
};
int main()
{
    Volume v;
    int x,volume;
    cout<<"Enter length of edge:"<<endl;
    cin>>x;
    v.setA(x);
    v.calculateVolume();
    volume=v.getVolume();
    cout<<"Volume = "<<volume<<endl;
    cin.get();
    return 0;
}
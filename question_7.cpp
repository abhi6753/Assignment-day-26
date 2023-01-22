/*7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/
#include <iostream>
using namespace std;
class Box
{
    int length, breadth, height, volume;

public:
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
        volume = 0;
    }
    void setLength(int len)
    {
        length = len;
    }
    void setBreadth(int bre)
    {
        breadth = bre;
    }
    void setHeight(int hei)
    {
        height = hei;
    }
    void claulateVolume()
    {
        volume = length * breadth * height;
    }
    int getVolume()
    {
        return volume;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
};
int main()
{
    Box b;
    int l,bre,h,volume;
    cout<<"Enter length, breadth and height of the box:"<<endl;
    cin>>l>>bre>>h;
    b.setLength(l);
    b.setBreadth(bre);
    b.setHeight(h);
    b.claulateVolume();
    volume = b.getVolume();
    cout<<"Volume of the box = "<<volume<<endl;
    cin.get();
    return 0;
}
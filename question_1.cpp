/*1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/
#include<iostream>
using namespace std;
class Complex
{
   int a,b;
   public:
   Complex()
   {
      a=b=0;
   }
   void setData(int x,int y)
   {
     a=x;
     b=y;
   }
   void showData()
   {
      cout<<"Real = "<<a<<"\nImaginary = "<<b<<"i"<<endl;
   }
   Complex add(Complex c)
   {
      Complex temp;
      temp.a = a + c.a;
      temp.b = b + c.b;
      return temp;
   }

};
int main()
{
  Complex s1,s2,s3;
  int a,b; 
  cout<<"Enter real part and imaginary part of Complex number:"<<endl;
  cin>>a>>b;
  s1.setData(a,b);
  cout<<"Enter real part and imaginary part of Complex number:"<<endl;
  cin>>a>>b;
  s2.setData(a,b);
  cout<<"First Complex number:"<<endl;
  s1.showData();
  cout<<"Second Complex number:"<<endl;
  s2.showData();
  s3=s1.add(s2);
  cout<<"Add : \n";
  s3.showData();
  cin.get();
  return 0;
}
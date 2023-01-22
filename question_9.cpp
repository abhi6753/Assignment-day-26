/*9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.*/
#include<iostream>
using namespace std;
class Bill
{
   float unit,bill;
   public:
   Bill()
   {
      unit=bill=0;
   }
   void get(float x)
   {
    unit = x;
   }
   void calculateBill()
   {
      if(unit>=0&&unit<=100)
      {
        bill = unit*1.20;
      }
      else if(unit>100&&unit<=200)
      {
        bill = unit*2.0;
      }
      else if(unit>200)
      {
        bill = unit*3.0;
      }
   }
   float getBill()
   {
      return bill;
   }
};
int main()
{
    Bill a;
    float unit;
    cout<<"Enter your meter unit to generate bill:"<<endl;
    cin>>unit;
    a.get(unit);
    a.calculateBill();
    cout<<"Total ammount = ";
    a.getBill();
    cin.get();
    return 0;

}
/*8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor*/
#include<iostream>
using namespace std;
class Bank
{
    static int principle;
    static float roi;
    static int year;
    static float intrest;
    public:
    Bank()
    { principle=0;
      roi=0;
      year=0;
    }
    static void setPrinciple(int p)
    {
        principle = p;
    }
    static void setROI(float r)
    {
        roi =r;
    }
    static void setYear(int yr)
    {
        year = yr;
    }
    static void CalculateSi()
    {
       intrest =(principle*roi*year)/100.0; 
    }
    static void displaySi()
    {
        cout<<"Intrest = "<<intrest<<endl;
    }

};
int Bank::principle;
int Bank::year;
float Bank::roi;
float Bank::intrest;

int main()
{
    int p,year;
    float roi;
    cout<<"Enter Principal ammount :"<<endl;
    cin>>p;
    Bank::setPrinciple(p);
    cout<<"Enter rate of intrest :"<<endl;
    cin>>roi;
    Bank::setROI(roi);
    cout<<"Enter year: "<<endl;
    cin>>year;
    Bank::setYear(year);
    Bank::CalculateSi();
    Bank::displaySi();
    cin.get();
    return 0;
}
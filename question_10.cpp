//10. Define a class StaticCount and create a static variable. Increment this variable in a\
function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{
    static int a;
    public:
    void static fun()
    {
        ++a;
        cout<<a<<endl;
    }
};
int StaticCount::a;
int main()
{
   StaticCount::fun();
   StaticCount::fun();
   StaticCount::fun();
   cin.get();
   return 0;
}
//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    static int count;
    public:
    Counter()
    {
        count++;
        cout<<"count = "<<count<<endl;
    }

};
int Counter::count;
int main()
{
    Counter c,c2;
    cin.get();
    return 0;
}
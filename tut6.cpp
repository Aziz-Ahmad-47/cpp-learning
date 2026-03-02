#include<iostream>
using namespace std;
union employ
{
    int rice;
    char car;
    float mony;

};
int main()
{
    union employ e;
    e.rice= 2;
    cout<<e.rice<<endl;
    e.car='c';
    e.mony= 200.1;
    // cout<<e.mony<<endl;
    // e.mony=2000;
    // cout<<e.mony<<endl;
    return 0;
}
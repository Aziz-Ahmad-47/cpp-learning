#include<iostream>
using namespace std;
int pro(int a,int b)
{
    static int c=0;
    c = c + 1 ;
    return a*b+c;
    }
int main()
{
    int a, b;

     cin>>a;
     cin>>b;
     cout<<"the value of product of a and b is "<<pro(a,b)<<endl;
     cout<<"the value of product of a and b is "<<pro(a,b)<<endl;
     cout<<"the value of product of a and b is "<<pro(a,b)<<endl;
     cout<<"the value of product of a and b is "<<pro(a,b)<<endl;
    return 0;
}
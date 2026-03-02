#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b, c;
    cout<<" the value sum of two number is "<<sum(10,20)<<endl;
    cout<<" the value sum of three number is "<<sum(30,2,40)<<endl;
    return 0;
}
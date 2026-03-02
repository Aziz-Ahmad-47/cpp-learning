#include<iostream>
using namespace std;
int sum(int a, int b)
{     
    int c = a + b;
    return c;
}
int getdata(int c, int d)
{

    int num1, num2;
    cout<<"enter num1 "<< endl;
    cin>> num1;
    cout<<"enter num2 "<< endl;
    cin>> num2;
    cout<<"the sum of the numbers is "<< sum(num1,num2)<<endl;
    return 0;
}
int main()
{
    int num1, num2;
    sum(num1,num2);
    getdata(num1, num2);
    return 0;
}
#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mult(int a, int b)
{
    return a*b;
}
int divde(int a, int b)
{
    return a/b;
}
int getdata(int a, int b)
{
    int num1,num2;
    cout<<"enter first number "<<endl;
    cin>> num1;
    cout<<"enter secound number "<<endl;
    cin>> num2;
}
void display(int a, int b)
{
    int num1,num2;
  cout<<"sum"<<sum(num1,num2)<<endl;
  cout<<"sub"<<sub(num1,num2)<<endl;
  cout<<"mult"<<mult(num1,num2)<<endl;
  cout<<"divede"<<divde(num1,num2)<<endl;  
}
int main()
{
  int num1,num2;
    getdata(num1,num2);
    display(num1,num2);
    return 0;
}
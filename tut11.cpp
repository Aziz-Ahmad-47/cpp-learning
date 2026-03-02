#include<iostream>
using namespace std;
int swap(int *a,int *b);
int & swap2(int &a,int &b);
int main()
{
    int a = 4;
    int b = 5;
    cout<<" the value before swap is of a is "<< a <<" and b is "<< b << endl;
    // swap(&a,&b);
    // cout<<" the value after swap is of a is "<< a <<" and b is "<< b << endl;
    // cout<<"and"<<endl;
    swap2(a,b) = 700,800;
    cout<<" the value after swap is of a is "<< a <<" and b is "<< b << endl;
   
    return 0;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int & swap2(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}
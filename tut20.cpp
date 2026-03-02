#include <iostream>
using namespace std;
class C1
{
private:
    int a, b, c;
public:
    void v1(int a1, int b1, int c1);
    void v2();
};
void C1 ::v1(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
void C1 ::v2()
{
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
}
int main()
{
    C1 d;
    d.v1(21, 22, 23);

    d.v2();
    cout << " At D2 " << endl;

    C1 d2;
    d2.v1(24, 25, 26);
    d2.v2();

    return 0;
}
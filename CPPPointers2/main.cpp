#include <iostream>

using namespace std;

void swapRef(int& a, int& b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=20;
    int* xp=&x;
    int** xpp=&xp;

    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of *xp: "<<*xp<<endl;
    cout<<"Value of **xpp: "<<**xpp<<endl;

    int a=8;
    float b=23.5f;
    int& aRef=a;
    float& bRef=b;

    cout<<"Value of aRef: "<<aRef<<endl;
    cout<<"Value of bRef: "<<bRef<<endl;

    ++aRef;
    ++bRef;
    cout<<"Value of a after incremented by aRef: "<<a<<endl;
    cout<<"Value of b after incremented by bRef: "<<b<<endl;

    int u=88;
    int v=75;
    swapRef(u, v);
    cout<<"Value of u after swap: "<<u<<endl;
    cout<<"Value of v after swap: "<<v<<endl;
    return 0;
}

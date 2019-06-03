#include <iostream>

using namespace std;

int callByValue(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

void callByReference(int &a, int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

void callByPointer(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int x=10, y=8, sum=0;
    sum=callByValue(x, y);
    //cout<<"Call by value sum: "<<sum<<endl;
    //callByReference(x, y);
    //cout<<"X after call by ref: "<<x<<", Y after call by ref: "<<y<<endl;
    callByPointer(&x, &y);
    cout<<"X after call by pointer: "<<x<<", Y after call by pointer: "<<y<<endl;
    return 0;
}

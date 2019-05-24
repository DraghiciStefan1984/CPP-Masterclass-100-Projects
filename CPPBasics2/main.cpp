#include <iostream>

using namespace std;

void callByValue(int num1, int num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}

void callByPointer(int* num1, int* num2)
{
    int* temp=num1;
    num1=num2;
    num2=temp;
}

void callByReference(int &num1, int &num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}

int main()
{
    int x=8, y=88;

    cout<<"Before swap (value): x="<<x<<", y="<<y<<endl;
    callByValue(x, y);
    cout<<"After swap (value): x="<<x<<", y="<<y<<endl;

    cout<<"Before swap (pointer): x="<<x<<", y="<<y<<endl;
    callByPointer(&x, &y);
    cout<<"After swap (pointer): x="<<x<<", y="<<y<<endl;

    cout<<"Before swap (reference): x="<<x<<", y="<<y<<endl;
    callByReference(x, y);
    cout<<"After swap (reference): x="<<x<<", y="<<y<<endl;
    return 0;
}

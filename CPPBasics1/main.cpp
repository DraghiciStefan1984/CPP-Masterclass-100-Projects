#include <iostream>

#define CONSTANT_NUMBER_ONE 100

using namespace std;

int globalVariable=88;

static int x=9;

void staticFunc()
{
    static int y=2;
    y++;
    cout<<"while x= "<<x<<", y= "<<y<<endl;
}

int main()
{
    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Size of short int = " << sizeof(short int) << endl;
    cout << "Size of long int = " << sizeof(long int) << endl;
    cout << "Size of float = " << sizeof(float) << endl;
    cout << "Size of double = " << sizeof(double) << endl;
    cout << "Size of bool = " << sizeof(bool) << endl;

    int localVariable=8;
    cout << "Local variable: " << localVariable << endl;
    cout << "Global variable: " << globalVariable << endl;

    const int CONSTANT_NUMBER_TWO=120;

    cout << CONSTANT_NUMBER_ONE+CONSTANT_NUMBER_TWO << endl;
    return 0;
}

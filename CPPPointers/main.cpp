#include <iostream>

using namespace std;

int main()
{
    int integer = 23;
    float floatingPoint = 44.5f;
    double doublePrecision = 23.866412302;
    char character = 'B';

    int* integerP=&integer;
    float* floatingPointP=&floatingPoint;
    double* doublePrecisionP=&doublePrecision;
    char* characterP=&character;

    cout<<"memory address of integer: "<<&integer<<endl;
    cout<<"memory address of floatingPoint: "<<&floatingPoint<<endl;
    cout<<"memory address of doublePrecision: "<<&doublePrecision<<endl;
    cout<<"memory address of character: "<<&character<<endl;

    cout<<"memory address pointed at by *integer: "<<integerP<<endl;
    cout<<"memory address pointed at by *floatingPoint: "<<floatingPointP<<endl;
    cout<<"memory address pointed at by *doublePrecision: "<<doublePrecisionP<<endl;
    cout<<"memory address pointed at by *character: "<<characterP<<endl;

    cout<<"memory address of *integer: "<<&integerP<<endl;
    cout<<"memory address of *floatingPoint: "<<&floatingPointP<<endl;
    cout<<"memory address of *doublePrecision: "<<&doublePrecisionP<<endl;
    cout<<"memory address of *character: "<<&characterP<<endl;

    cout<<"value of *integer: "<<*integerP<<endl;
    cout<<"value of *floatingPoint: "<<*floatingPointP<<endl;
    cout<<"value of *doublePrecision: "<<*doublePrecisionP<<endl;
    cout<<"value of *character: "<<*characterP<<endl;

    cout<<"value of incremented *integer: "<<++*integerP<<endl;
    cout<<"value of incremented *floatingPoint: "<<++*floatingPointP<<endl;
    cout<<"value of incremented *doublePrecision: "<<++*doublePrecisionP<<endl;
    cout<<"value of incremented *character: "<<++*characterP<<endl;

    cout<<"value of integer incremented by *integer: "<<integer<<endl;
    cout<<"value of floatingPoint incremented by *floatingPoint: "<<floatingPoint<<endl;
    cout<<"value of doublePrecision incremented by *doublePrecision: "<<doublePrecision<<endl;
    cout<<"value of character incremented by *character: "<<character<<endl;

    return 0;
}

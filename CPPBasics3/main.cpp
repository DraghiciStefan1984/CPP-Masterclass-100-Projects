#include <iostream>

using namespace std;

double getArrayAverage(double arr[])
{
    double sum=0;
    int length=sizeof(arr)/sizeof(double);
    double avg=0;

    for(int i=0; i<length; i++)
    {
        sum+=arr[i];
    }

    avg=sum/(double)length;
    return avg;
}

int main()
{
    int arr[5]={4,5,1,35,44};
    int* p=arr;
    cout<<"p points to the memory address of the first entry in the array: "<<p<<endl;
    cout<<"*p points to the value of the first entry in the array: "<<*p<<endl;
    cout<<"&p points to the memory address of it's self: "<<&p<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<p++<<", "<<*p++<<endl;
    }

    double avg=getArrayAverage(arr);
    cout<<"Average of array is: "<<avg<<endl;
    return 0;
}

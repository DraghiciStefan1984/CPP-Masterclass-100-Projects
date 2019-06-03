#include <iostream>

using namespace std;

double average()
{
    int arraySize=0;
    int arr[arraySize];
    cout<<"Enter the size of the array: ";
    cin>>arraySize;
    for(int i=0; i<arraySize; i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    double arraySum, arrayAvg=0.0;
    for(int i=0; i<arraySize; i++) arraySum+=arr[i];
    arrayAvg=(double)arraySum/arraySize;
    cout<<"The average of the arrays is: "<<arrayAvg<<endl;
}

double maxNum()
{
    int arraySize=0;
    int arr[arraySize];
    double maxNumber=arr[0];
    cout<<"Enter the size of the array: ";
    cin>>arraySize;
    for(int i=0; i<arraySize; i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    for(int i=1; i<=arraySize; i++)
    {
        if(arr[i]>arr[i+1]) maxNumber=arr[i];
    }
    cout<<"The max num of the array is: "<<maxNumber<<endl;
}

void revArray()
{
    int x, y, z;
    int arr1[x];
    int arr2[x];
    cout<<"Enter the size of the array: ";
    cin>>x;
    for(y=0; y<x; y++)
    {
        cout<<"Enter a number: ";
        cin>>arr1[y];
    }
    for(y=y-1, z=0; y>=0; y--, z++) arr2[z]=arr1[y];
    for(y=0; y<x; y++) arr1[y]=arr2[y];
    for(y=0; y<x; y++) cout<<arr1[y]<<",";
}

void mergeArrays()
{

}

int main()
{
    revArray();
    return 0;
}

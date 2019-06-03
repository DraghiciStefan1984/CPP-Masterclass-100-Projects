#include <iostream>

using namespace std;

void enterArray()
{
    int A[200], n, x, sw;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Insert the elements of the array: "<<endl;
    for(x=0; x<n; x++)
    {
        cin>>A[x];
    }
}

void bubbleSort(int A[], int n)
{
    int x;
    for(int y=0; y<(n-1); y++)
    {
        for(int z=0; z<n-y-1; z++)
        {
            if(A[z]>A[z+1])
            {
                x=A[z];
                A[z]=A[z+1];
                A[z+1]=x;
            }
        }
    }
}

int main()
{

    return 0;
}

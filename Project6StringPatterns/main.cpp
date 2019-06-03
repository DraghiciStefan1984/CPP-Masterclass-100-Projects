#include <iostream>

using namespace std;

void pyramid()
{
    int x, y, z, n;
    cout<<"Insert num of rows: ";
    cin>>n;
    z=n;
    for(x=1; x<=n; x++)
    {
        for(y=1; y<z; y++) cout<<" ";
        z--;
        for(y=1; y<=2*x-1; y++) cout<<"*";
        cout<<endl;
    }
}

void triangle()
{
    int x, y, n;
    cout<<"Insert num of rows: ";
    cin>>n;
    for(x=1; x<=n; ++x)
    {
        for(y=1; y<=x; ++y) cout<<"*";
        cout<<endl;
    }
}

void diamond()
{
    int x, y, z=1, n;
    cout<<"Insert num of rows: ";
    cin>>n;
    z=n-1;
    for(x=1; x<=n; ++x)
    {
        for(y=1; y<=z; y++) cout<<" ";
        z--;
        for(y=1; y<=2*x-1; y++) cout<<"*";
        cout<<endl;
    }
    z=1;
    for(y=1; y<=n-1; y++)
    {
        for(y=1; y<=z; y++) cout<<" ";
        z++;
        for(y=1; y<=2*(n-1)-1; y++) cout<<"*";
        cout<<endl;
    }
}

int main()
{
    //pyramid();
    //triangle();
    diamond();
    return 0;
}

#include <iostream>

using namespace std;

void swapNumbers(int& x, int& y)
{
    cout<<"Enter the numbers you want to swap!"<<endl;
    cout<<"First number: ";
    cin>>x;
    cout<<"Second number: ";
    cin>>y;
    cout<<"Numbers before swap: x="<<x<<", y="<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
    cout<<"Numbers after swap: x="<<x<<", y="<<y<<endl;
}

long factorial(int n)
{
    long result=1;
    for(int x=1; x<=n; x++) result*=x;
    return result;
}

long factNCR(int n, int r)
{
    cout<<"Enter the numbers for factorial!"<<endl;
    cout<<"First number: ";
    cin>>n;
    cout<<"Second number: ";
    cin>>r;
    long result=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"NCR: "<<result<<endl;
}

long factNPR(int n, int r)
{
    cout<<"Enter the numbers for factorial!"<<endl;
    cout<<"First number: ";
    cin>>n;
    cout<<"Second number: ";
    cin>>r;
    long result=factorial(n)/factorial(n-r);
    cout<<"NPR: "<<result<<endl;
}

void reverseNumber(int n)
{
    cout<<"Enter the numbers you want to reverse!"<<endl;
    cout<<"Number: ";
    cin>>n;
    int rev=0, y;
    while(n!=0)
    {
        y=n%10;
        rev=rev*10+y;
        n/=10;
    }
    cout<<"Number's reverse is: "<<rev<<endl;
}

void arrayReverse()
{
    int x, y, rev[100];
    cout<<"Enter the numbers range of the array!"<<endl;
    cin>>x;
    cout<<"insert only "<<x<<" numbers!"<<endl;
    for(y=0; y<x; y++) cin>>rev[y];
    cout<<"Your reversed array: "<<endl;
    for(y=x-1; y>=0; y--) cout<<rev[y]<<", ";
}

void isPalindrome(int n)
{
    int y, palindrome, rev=0;
    cout<<"Enter you number: ";
    cin>>n;
    y=n;
    while(n!=0)
    {
        palindrome=n%10;
        rev=(rev*10)+palindrome;
        n/=10;
    }
    if(y==rev) cout<<"The number is a palindrome: n="<<y<<", reversed="<<rev<<endl;
    else cout<<"The number is not a palindrome: n="<<y<<", reversed="<<rev<<endl;
}

void checkArmstrongNumber()
{
    int x, y, z=0, temp, remainder;
    cout<<"Enter you number: ";
    cin>>x;
    temp=x;
    while(temp!=0)
    {
        remainder=temp%10;
        z+=(remainder*remainder*remainder);
        temp/=10;
    }
    if(x==z) cout<<"The number "<<x<<" is and Armstrong number ("<<z<<")"<<endl;
    else cout<<"The number "<<x<<" is not an Armstrong number ("<<z<<")"<<endl;
}

void generateArmstrongNumbers()
{
    int remainder, x;
    long y=0, z=0, temp;
    cout<<"Enter the maximum range for the Armstrong number: ";
    cin>>y;
    for(x=1; x<=y; x++)
    {
        temp=x;
        while(temp!=0)
        {
            remainder=temp%10;
            z+=(remainder*remainder*remainder);
            temp/=10;
        }
        if(x==z)
        {
            cout<<x<<endl;
        }
        z=0;
    }
}

void fact()
{
    int x, f=1;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=1; i<=x; i++) f*=i;
    cout<<"The factorial of "<<x<<" is "<<f<<endl;
}

void fibonacci()
{
    int x, y, z=0, n=1;
    cout<<"Enter the num of terms in fibo series: ";
    cin>>x;
    for(int a=0; z<x; a++)
    {
        if(a<=1) y=a;
        else
        {
            y=z+n;
            z=n;
            n=y;
        }
        cout<<y<<endl;
    }
}

void binaryToHexa()
{
    long int bin, hex=0, x=1, y, temp;
    cout<<"Insert binary number: ";
    cin>>bin;
    temp=bin;
    while(bin!=0)
    {
        y=bin%10;
        hex=hex+(y*x);
        x*=2;
        bin/=10;
    }
    cout<<"The hex version of "<<temp<<" is "<<hex<<"."<<endl;
}

void binaryToOctal()
{
    long int bin, oct=0, x=1, y, temp;
    cout<<"Insert binary number: ";
    cin>>bin;
    temp=bin;
    while(bin!=0)
    {
        y=bin%10;
        oct=oct+(y*x);
        x*=2;
        bin/=10;
    }
    cout<<"The octal version of "<<temp<<" is "<<oct<<"."<<endl;
}


int main()
{
    //swapNumbers(x, y);
    //factNCR(x, y);
    //factNPR(x, y);
    //reverseNumber(x);
    //arrayReverse();
    //isPalindrome(x);
    //checkArmstrongNumber();
    //generateArmstrongNumbers();
    //fact();
    //fibonacci();
    //binaryToHexa();
    binaryToOctal();
    return 0;
}

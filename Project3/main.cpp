#include <iostream>
#include <cstring>>
#include <string.h>

using namespace std;

void stringLength()
{
    char str[100];
    int length;
    cout<<"Enter a string: ";
    cin>>str;
    length=strlen(str);
    cout<<"The length of the string is: "<<length;
}

void compareStrings()
{
    char str1[100], str2[100];
    int x=0, y=0;
    cout<<"Enter string 1:";
    cin>>str1;
    cout<<"Enter string 2:";
    cin>>str2;

    while(str1[x]!='\0') x++;
    while(str1[y]!='\0') y++;

    if(x>y) cout<<"Str1 is longer than Str2";
    else cout<<"Str1 is shorter than Str2";
}

void reverseString()
{
    char str[100], rev;
    int x, y;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<endl;

    x=0;
    y=strlen(str)-1;

    while(x<y)
    {
        rev=str[x];
        str[x]=str[y];
        str[y]=rev;
        x++;
        y--;
    }
    cout<<"The reversed string is: "<<str<<endl;
}

void palindrome()
{
    char str[50];
    int x, len, flag=0;
    cout<<"Enter string; ";
    cin>>str;
    cout<<endl;
    len=strlen(str);
    for(x=0; x<len; x++)
    {
        if(str[x]!=str[len-x-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"Not a palindrome";
    else cout<<"Is palindrome";
}

void deleteVowels()
{
    char str[50];
    int x, y, len;
    cout<<"Enter string; ";
    cin>>str;
    cout<<endl;
    len=strlen(str);
    for(x=0; x<len; x++)
    {
        if(str[x]=='a' || str[x]=='e' || str[x]=='i' || str[x]=='o' || str[x]=='u')
        {
            for(y=x; y<len; y++)
            {
                str[y]=str[y+1];
            }
            len--;
        }
    }
    cout<<"String after vowels removed: "<<str<<endl;
}

int main()
{
    //stringLength();
    //reverseString();
    //palindrome();
    deleteVowels();
    return 0;
}

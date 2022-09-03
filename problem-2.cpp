#include<iostream>
using namespace std;
int higest_value(int );
int main()
{
    int a;
    cout<<"\n enter two numbers -> ";
    cin>>a;
    cout<<"higest digit is -> "<<higest_value(a);
}
int higest_value(int a)
{
    int n,max=0;
    while(a)
    {
        n=a%10;
        if(n>max)
        max=n;
        a=a/10;
    }
    return max;
}

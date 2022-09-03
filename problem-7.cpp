#include<iostream>
using namespace std;
int sum(int ,int ,int=0);
int main()
{
    int a,b;
    cout<<"enter two number -> ";
    cin>>a>>b;
    cout<<"sum is -> "<<sum(a,b);
}
int sum(int a,int b,int c)
{
    return (a+b+c);
}
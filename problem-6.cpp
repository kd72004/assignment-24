#include<iostream>
using namespace std;
void  swap (int &,int &);
int main()
{
    int a,b;
    cout<<"enter two values -> "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"after swaping -> "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}
void  swap (int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
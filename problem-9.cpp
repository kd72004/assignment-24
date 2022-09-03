#include<iostream>
using namespace std;
int min(int ,int );
float max (float ,float );
int main()
{
    int a,b;
    cout<<"enter number"<<endl;
    cin>>a>>b;
    cout<<"minimum number "<<min(a,b)<<endl;
    cout<<"maximum number "<<max(a,b)<<endl;
}
int min(int a,int b)
{
    if(a<b)
    return a;
    return b;
}
float max (float a,float b)
{
    if(a>b)
    return a;
    return b;
}
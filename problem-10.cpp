#include<iostream>
using namespace std;
int sum(int ,int );
float sum(float,float );
int sum(int ,int ,int );
int main()
{
    int a,b,c;
    float d,e;
    cout<<"enter two numbers -> "<<endl;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<"enter two float numbers -> "<<endl;
    cin>>d>>e;
    cout<<sum(d,e)<<endl;
    cout<<"enter three numbers -> "<<endl;
    cin>>a>>b>>c;
    cout<<sum(a,b,c)<<endl;
}
int sum(int a,int b)
{
    return a+b;
}
float sum(float a ,float b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
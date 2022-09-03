#include<iostream>
using namespace std;
float area(float);
int area(int , int );
float area(float, float );
int main()
{
    float r;
    cout<<"enter radious -> "<<endl;
    cin>>r;
    cout<<area(r)<<endl;;
    int w,h;
    cout<<"enter width and height -> "<<endl;
    cin>>w>>h;
    cout<<area(w,h)<<endl;
    float b,h1;
    cout<<"enter breadth and height -> "<<endl;
    cin>>b>>h1;
    cout<<area(b,h1)<<endl;
}
float area (float a)
{
    return 3.14*a*a;
}
float area(float a,float b)
{
    return 0.5*a*b;
}
int area (int a,int b)
{
    return a*b;
}
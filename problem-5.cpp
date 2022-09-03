#include<iostream>
using namespace std;
int term_of_fibo(int &);
int main()
{
    int n;
    cout<<"enter number -> "<<endl;
    cin>>n;
    n=term_of_fibo(n);
    if(n==0)
    cout<<"aviliable ";
    else
    cout<<"not aviliable ";

}
int term_of_fibo(int &n)
{
    int a,b,c;
    a=-1;
    b=+1;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        return 0;
        a=b;
        b=c;
    }
    return 1;
}
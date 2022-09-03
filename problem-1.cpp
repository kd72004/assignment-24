#include<iostream>
using namespace std;
int check_prime(int &);
int main()
{
    int num;
    printf("\n enter number -> ");
    scanf("%d",&num);
    cout<<check_prime(num);
    
}
int check_prime(int &ref)
{
    for (int i=2;i<=ref/2;i++)
    {
        if(ref%i==0)
        return 1;
    }
    return 0;
}

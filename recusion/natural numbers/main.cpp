#include <stdio.h>
#include <iostream>

using namespace std;
int sum =0;

int fun(int n)
{
    if(n>0)
    {
    sum += n;fun(n-1);
    }
    else
    return 0;
}

int main()
{
    fun(9);
    cout<<sum<<endl;
    return 0;
}
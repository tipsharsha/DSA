#include <iostream>
using namespace std;
#include <stdio.h>

void fun1(int i)
{
    if (i > 0)
    {
        cout << i << endl;
        fun1(i - 1);
    }
    else
    {
        return;
    }
}

int main()
{
    int c = 3;
    fun1(c);
    return 0;
}
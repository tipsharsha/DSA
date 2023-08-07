// Comparing elements with keys one by one//
#include <iostream>
using namespace std;
int main()
{
    int A[8] = {8, 9, 4, 7, 6, 3, 10, 5};

    for (int i = 0; i < 8; i++)
    {
        if (8 == A[i])
            printf("%d", i);
    }
}

// Time complexity is O(n) with unsuccessful search and O(1) at best and avg O(n)//
// IMPROVING //
// ADD swap to last search done so it is found faster or to first element//
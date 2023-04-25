#include "../include/factorial.h"

int factorial::fact(int n)
{
    if(n <= 1)
        return 1;
    return n * fact(n - 1);
}
/*
Task 18
a) n-mal?

b) n int-speicherplätze

c) O(n)?

*/

int factorial::fact_it(int n)
{
    int nMinusOne = 1;
    int result = nMinusOne;
    for(int i = 2; i <=n; i++)
    {
        result = i * nMinusOne;
        nMinusOne = result;
    }
    return result;
}
/*
Task 19
a) n-mal?

b) 3 int-speicherplätze (i, result, nMinusOne)

c) O(n)

*/
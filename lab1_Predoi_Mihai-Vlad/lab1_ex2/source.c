#include <stdio.h>

#define USE_HEADER1 0

#if USE_HEADER1
#define INCLUDE_HEADER1
#endif

#ifdef INCLUDE_HEADER1
#include "header1.h"
#else
#include "header2.h"
#endif


int main()
{
    float x = f(1, 1001.0f);
    printf("%f\n", x);
}
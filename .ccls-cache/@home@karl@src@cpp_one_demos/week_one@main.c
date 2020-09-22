#include <stdio.h>


void foo(int * myArray, size_t arrySize)
{

}

int main(int argc, char ** argv)
{
    int myArray[10];

    // do lots of stuff
    //
    size_t s = sizeof(int);

    size_t s2 = sizeof(myArray) / sizeof(myArray[0]);

    printf("%ld", s);
}


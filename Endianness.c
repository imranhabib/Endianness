#include <stdio.h>



  int main()
{
    char a[4];

  *((int*)a) = 1;
    if(*a)
        printf("Little Endian");
    else
        printf("Big Endian");

}



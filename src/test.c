#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
    int a , b;

    if(argc != 3)
    {
            printf("numarul de argumente nu este corect");
            return -1;

    }

    a = atoi(argv[1]);
	b = atoi(argv[2]);

    printf("%d" , a+b);

    return 0;
}
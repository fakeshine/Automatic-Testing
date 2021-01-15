#include <stdio.h>

int main( int argc, char *argv[] )
{
    int a,b;
    if(argc != 2)
    {
            printf("numarul de argumente nu este corect");
            return -1;

    }

    a = atoi(argv[1]);
	b = atoi(argv[2]);

    printf("Suma lui %d si %d este %d" , a , b , a+b);

    return 0;
}
#include <stdio.h>

long myarray[256];

int main(int argc, char *argv[])
{

    long *ptr = myarray;
    long sum = 0;
    for (size_t i = 0; i < 256; i++) {
        sum += ptr[i * sizeof(ptr)];
    }
    printf("sum is: %ld\n", sum);  
}

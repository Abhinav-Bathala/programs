#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 1; i < 256; i = i + 1){
        printf("%d - %c\n",i,i);
    }
    return 0;
}

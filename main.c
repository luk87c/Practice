#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    y = 7*x-10;
    if(y <= 100){
    printf("Thats too small dipshit");
    }
    else{
    printf("Y = 7x-10 = %d\n" , y);
    }
    return 0;
}

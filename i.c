#include <stdio.h>
int main()
{
    int i, n ;
    printf("Enter the number :");
    scanf("%d", &n);
if ((i%3) == 0){
            printf("Fizz\t");
        else if ((i%5) == 0)
            printf("Buzz\t");

        else 
            printf("%d\t", i);
    }
    return 0;
}
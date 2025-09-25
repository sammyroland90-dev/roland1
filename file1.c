#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 7 == 0 && number % 11 == 0) {
        printf("%d is divisible by both 7 and 11\n", number);
    } else if (number % 7 == 0) {
        printf("%d is divisible by 7 but not by 11\n", number);
    } else if (number % 11 == 0) {
        printf("%d is divisible by 11 but not by 7\n", number);
    } else {
        printf("%d is not divisible by either 7 or 11\n", number);
    }
    
    return 0;
}
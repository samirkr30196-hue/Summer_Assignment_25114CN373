#include <stdio.h>
int sumOfDigits(int x) {
    if (x==0) return 0;
    return (x%10) + sumOfDigits(x/10);
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d",n,sumOfDigits(n));
    return 0;
}
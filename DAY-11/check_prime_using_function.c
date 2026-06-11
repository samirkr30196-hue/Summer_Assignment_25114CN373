#include <stdio.h>
#include <math.h>
int checkPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1; 
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (checkPrime(n)) {
        printf("%d is Prime number",n);
    }
    else {
        printf("%d is not a Prime number",n);
    }
    return 0;
}
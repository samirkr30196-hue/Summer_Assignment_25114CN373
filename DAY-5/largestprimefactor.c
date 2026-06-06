/*Every number is written as multiplication of prime number.
So,rpeatedly divide the number by prime factors.
Removing them one by one and updating the number.*/
#include<stdio.h>
#include<math.h>
int largestPrimeFactor(int x) {
    int max = -1;
    while (x % 2 == 0) {
        max = 2;
        x /= 2;
    }
    for (int i = 3; i<=sqrt(x); i += 2) {     //all prime numbets are odd except 2.
        while (x % i == 0) {
            max = i;
            x /= i;
        }
    }
   if (x > 2) {
        max = x;
    }
   return max;
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Largest Prime Factor:%d\n",largestPrimeFactor(n));
    return 0;
}
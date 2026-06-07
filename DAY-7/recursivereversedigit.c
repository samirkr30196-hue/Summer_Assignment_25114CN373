#include <stdio.h>
int reverse(int x,int rev) {
    if (x==0) return rev;
    return reverse (x/10,rev*10+(x%10));
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Reversed: %d\n", reverse(n,0));
    return 0;
}
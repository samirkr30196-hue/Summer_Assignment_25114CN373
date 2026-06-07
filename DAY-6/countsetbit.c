#include <stdio.h>
int countSetBits(int x) {
    int count = 0;
    while (x>0) {
        count +=(x & 1);
        x=x>>1;
    }
    return count;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number of set bits:%d",countSetBits(n));
    return 0;
}
#include<stdio.h>
int sumOfDigit(int x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number to find the sum of its digit:");
    scanf("%d", &n);
    printf("Sum of digit of %d is %d", n,sumOfDigit(n));
    return 0;
}

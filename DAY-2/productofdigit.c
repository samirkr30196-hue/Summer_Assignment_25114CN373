#include<stdio.h>
int productOfDigit(int x){
    int product=1;
    while(x!=0){
        product*=x%10;
        x/=10;
    }
    return product;
}
int main(){
    int n;
    printf("Enter the number to find the product of its digit:");
    scanf("%d", &n);
    printf("Product of digit of %d is %d", n,productOfDigit(n));
    return 0;
}

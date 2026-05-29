#include<stdio.h>
int reverse(int x){
    int rev=0;
    while(x!=0){
        int rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    return rev;
}
int main(){
    int n;
    printf("Enter a number to reverse it:");
    scanf("%d",&n);
    printf("Reverse of %d is %d",n ,reverse(n));
    return 0;
}
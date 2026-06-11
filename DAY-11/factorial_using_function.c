#include<stdio.h>
long long int factorial(int x){
    long long int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter the number of which you want to find factorial:");
    scanf("%d",&n);
    if(n<0)
      printf("factorial of negative number is not defined");
    else if(n==0)
      printf("factorial of zero is 1");
    else   
      printf("factorial of %d is %lld",n,factorial(n));
    return 0;
}
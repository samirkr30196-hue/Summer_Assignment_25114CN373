#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int strong(int x){
    int sum=0;
    while(x!=0){
        sum+=factorial(x%10);
        x/=10;
    }
  return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==strong(n))
      printf("%d is a Strong number",n);
    else
      printf("%d is not a Strong number",n);
    return 0;
}
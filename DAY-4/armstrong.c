#include<stdio.h>
#include<math.h>
int isArmstrong(int x){
    int temp=x,digits=0,sum=0;
    while(temp!=0){
        digits+=1;
        temp/=10;
    }
    temp=x;
    while(temp!=0){
        sum+=pow(temp%10,digits);
        temp/=10;
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    printf("Enter the number to check whether it is armstrong or not:");
    scanf("%d",&n);
    if(isArmstrong(n))
         printf("%d is a Armstrong number",n);
    else
        printf("%d is not a Armstrong number",n);
    return 0;
}
//To print sum of n natural number.
#include<stdio.h>
void sumofnatural(int x){
        int sum=0;
        for(int i=1;i<=x;i++){
        sum+=i;
       }
    printf("Sum of %d natural numbers is %d",x,sum);
}
int main(){
    int n;
    printf("Enter the natural number upto where you want to get the sum:");
    scanf("%d",&n);
    sumofnatural(n);
    return 0;
}
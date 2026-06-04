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
    int start,end;
    printf("Enter range:");
    scanf("%d %d", &start ,&end);
    printf("Armstrong numbers between %d and %d are:\n",start ,end);
    for(int i=start; i<=end; i++){
        if (isArmstrong(i)) {
           printf("%d ",i);
    }
 }
   return 0;
}
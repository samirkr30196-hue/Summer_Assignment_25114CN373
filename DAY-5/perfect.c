#include<stdio.h>
#include<math.h>
int perfect(int x){
    int sum=1;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
           sum+=i;
           if(i!=x/i){
             sum+=x/i;
           }
        }
    }
 return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0 || n==1)
       printf("%d is not a Perfect number",n); 
    else if(n==perfect(n))
       printf("%d is a Perfect number",n);
    else
       printf("%d is not a Perfect number",n); 
    return 0;
}
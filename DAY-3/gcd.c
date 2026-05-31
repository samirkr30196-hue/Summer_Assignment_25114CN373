#include<stdio.h>
int gcd(int x,int y){
    int gcd;
    for(int i=1;i<=(x<y?x:y);i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    printf("Enter two numbers to find gcd:");
    scanf("%d %d",&a, &b);
    printf("gcd of %d and %d is %d",a, b, gcd(a,b));
    return 0;
}
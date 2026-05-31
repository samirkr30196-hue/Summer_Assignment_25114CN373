#include<stdio.h>
int lcm(int x,int y){
    int max=(x>y) ? x : y;
    while(1){
        if(max%x==0 && max%y==0){
            return max;
        }
        max+=1;
    }
}
int main(){
    int a,b;
    printf("Enter two number to find LCM:");
    scanf("%d %d",&a, &b);
    printf("LCM of %d and %d is %d",a, b, lcm(a,b));
    return 0;
}
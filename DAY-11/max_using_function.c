#include<stdio.h>
int max(int x ,int y){
 return (x>y)?x:y;
}
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a ,&b);
    printf("Maximum of %d and %d is %d",a,b,max(a,b));
    return 0;
}
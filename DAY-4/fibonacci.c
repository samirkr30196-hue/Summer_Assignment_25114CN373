#include<stdio.h>
void fibonacci(int x){
    int first=0,second=1,temp;
    for(int i=0;i<x;i++){
        printf("%d ",first);
        temp=first+second;
        first=second;
        second=temp;
    }
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    fibonacci(n);
    return 0;
}
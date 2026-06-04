#include<stdio.h>
int nthFibonacciTerm(int x){
    int first=0,second=1,temp;
    if(x==1) return first;
    if(x==2) return second;
    for(int i=2;i<x;i++){
        temp=first+second;
        first=second;
        second=temp;
    }
    return second;
}
int main(){
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("%dth Fibonacci term:%d",n, nthFibonacciTerm(n));
    return 0;
}
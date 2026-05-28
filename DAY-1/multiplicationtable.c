#include<stdio.h>
void Table(int x){
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",x,i,x*i);
    }
}
int main(){
    int n;
    printf("Enter the number of which you want the table:");
    scanf("%d",&n);
    Table(n);
    return 0;
}
#include<stdio.h>
#include<math.h>
void factor(int x){
    for(int i=1;i<=x;i++){
        if(x%i==0){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factor of %d are:",n);
    factor(n);
    return 0;
}
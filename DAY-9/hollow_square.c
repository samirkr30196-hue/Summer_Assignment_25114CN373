#include<stdio.h>
void hollowSquare(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==1 || i==x || j==1 || j==x){
                printf("*");
            }
            else{ 
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    printf("Given hollow square pattern:\n");
    hollowSquare(5);
    return 0;
}   
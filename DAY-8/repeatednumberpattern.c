#include <stdio.h>
void repeatedNumber(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main(){
    printf("Given repeated number pattern:\n");
    repeatedNumber(5);
    return 0;
}   
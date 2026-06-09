#include <stdio.h>
void reverseNumberTriangle(int x){
    for(int i=x;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    printf("Given number triagnle pattern:\n");
    reverseNumberTriangle(5);
    return 0;
}
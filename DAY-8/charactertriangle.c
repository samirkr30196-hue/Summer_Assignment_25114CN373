#include <stdio.h>
void numberTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){
            printf("%c",65+j);
        }
        printf("\n");
    }
}
int main(){
    printf("Given number triagnle pattern:\n");
    numberTriangle(5);
    return 0;
} 
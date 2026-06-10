#include<stdio.h>
void starPyramid(int x){
    for (int i=1;i<=x;i++){
        for (int j=0;j<x-i;j++){
              printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
              printf("*");
        }
      printf("\n");
    }
}
int main() {
    starPyramid(5);
    return 0;
}
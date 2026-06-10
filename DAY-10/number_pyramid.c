#include<stdio.h>
void starPyramid(int x){
    for (int i=1;i<=x;i++){
        for (int j=0;j<x-i;j++){
              printf(" ");
        }
        for(int k=1;k<=i;k++){
              printf("%d",k);
        }
        for(int l=i-1;l>0;l--){
              printf("%d",l);
        }
      printf("\n");
    }
}
int main() {
    starPyramid(5);
    return 0;
}
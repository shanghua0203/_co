#include<stdio.h>

int main(){
    int R1=5, R2=7; //@R1; D=A; @R2; D=A; 
    int R0=R1+R2;   //@R1; D=M; @R2; D=D+M; @R0; M=D;
    printf("R0=%d\n", R0);
}
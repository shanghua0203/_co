#include<stdio.h>

int main(){
    int R0=1,R1=2;  //@0; D=M; @1; D=M; 
    int sum;    //@R2; M=0;

    for(int i=0; i<R1; i++){
        sum+=R0;
    }
/*
@2; 
M=0;
@1;
D=M;
@END
D;JEQ

@0;
D=M;
@2;
M=M+D;
@1;
M=M-1;
D=M;
@lOOP
D;JGT

@END
0;JMP
*/

    return 0;
}
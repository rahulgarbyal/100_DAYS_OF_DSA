#include<stdio.h>
#include<stdlib.h>
int fib(int n) {
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n<0) {
        return -1;
    }
    return fib(n-1) + fib(n-2);
}
void main() {
    int fibo,n;
    printf("enter nth number: ");
    scanf("%d", &n);
    
    fibo=fib(n);

    if(fibo==-1){
        printf("wrong input for nth number enter +ve number or zero!!");
    }
    else {
        printf("the %dth fibonacci number is: %d",n,fibo);
    }
}
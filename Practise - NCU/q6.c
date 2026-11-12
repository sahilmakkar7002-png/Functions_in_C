// write a program to print factorial of a number using recursion   
#include<stdio.h>
int fact(int n);

int main(){
    fact(6);
    return 0;

}
int fact(int n){
    int fact1= fact(n-1);
    int factN= fact1*n;
    printf("Factorial : %d\n", fact(n));
    return factN;
}
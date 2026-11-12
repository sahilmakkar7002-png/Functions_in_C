// write a c program to find power of a number using recursion
#include<stdio.h>

int power(int base, int exp);

int main(){
    int base, exp , result;
    printf("Enter base:");
    scanf("%d", &base);
    printf("Enter exponent:");
    scanf("%d", &exp);

    if(exp<0){
        printf("Enter some non negative exponent!");
    }
    else{
        result= power(base, exp);
        printf(" Power= %d\n", result);
    }

}
int power(int base, int exp){
    if(exp == 0){
        return 1;
    }
    else{
        return base*power(base, exp-1);
    }

}

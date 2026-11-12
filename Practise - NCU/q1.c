// add two numbers
#include<stdio.h>
int sum(int a, int b); //function prototype

int main(){
    int x=10, y=20;
    int result = sum(x,y);
    printf(" Sum = %d\n", result); //function call
    
    return 0;
}

int sum(int a, int b){
    return a+b;  // function definition
}
// waf to find square root of a number
#include<stdio.h>
#include<math.h>

float squareRoot(float n);

int main(){
    float num, result;
    printf("Enter Number:");
    scanf("%d", &num);

    if(num<0){
        printf("Square root of negative number is not real!");
    }
    else{
        result= squareRoot(num);
        printf("Square Root=%.2f\n", result);
    }
    
 return 0;
}

float squareRoot(float n){
    return sqrt(n);
}

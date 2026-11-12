// waf to convert celcius into farenheit

#include<stdio.h>

float convertTemp( float celcius);

int main(){
    float far= convertTemp(32);
    printf("farenheit:%d\n", far);
    return 0;

}

float convertTemp( float celcius){
    float far= celcius*0.18+ 32;
    return far;
}

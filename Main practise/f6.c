// GST evalutaor using functions
#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value =100.0;
    calculatePrice(value);
    printf("Actual Price is %f\n", value);

    return 0;
}

void calculatePrice(float value){
    value= value + value*0.18;
    printf("Final value:%f\n", value);
}
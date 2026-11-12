// waf a function to print hot or cold depending upon the temparature user enters

#include<stdio.h>
#include<math.h>
void checkTemparature(float temp);

int main(){
    float temparature;
    printf("Enter Temparature: ");
    scanf("%f", temparature);

    checkTemparature(temparature);

}

void checkTemparature(float temp){
    if(temp>=30){
        printf("HOT !");
    }
    else{
        printf("COLD !");
    }
}
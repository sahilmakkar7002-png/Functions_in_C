// write a function to print namaste if user is indian & bonjour if user is french
#include<stdio.h>
void printnamaste();
void printBonjour();

int main(){
    char ch;
    printf("Enter i for indian & f for french:");
    scanf("%c", &ch);

    if(ch =='i'){
        printf("Namaste!\n");
    }
    else(ch == 'f');
        printf("Bonjour!\n");
    }



void printNamaste(){
    printf("Namaste!\n");
}
void printBonjour(){
    printf("Bonjour!\n");
}
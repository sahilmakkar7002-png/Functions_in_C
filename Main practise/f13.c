//calcuate marks of students in maths, sanskrit & science

#include<stdio.h>

int calculateMarks(int maths, int sanskrit, int science);

int main(){
    int maths=90;
    int sanskrit=90;
    int science=90;

    printf("Percentage:%d\n",calculateMarks(maths, sanskrit, science) );

    return 0;

}

int calculateMarks(int maths, int sanskrit, int science){
    return(( maths+ sanskrit+ science)/3)*100;
}


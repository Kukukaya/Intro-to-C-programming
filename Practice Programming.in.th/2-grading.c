#include<stdio.h>
int main(){
    int work,mid,fin;
    scanf("Enter work score >> %d",&work);
    scanf("Midterm score : %d",&mid);
    scanf("Final score : %d",&fin);

    int score = work+mid+fin;
    if (score <=100 && score >= 80){
        printf("A");
    }
    else if (score < 80 && score >=75){
        printf("B+");
    }
    else if (score < 75 && score >=70){
        printf("B");
    }
    else if (score < 70 && score >=65){
        printf("C+");
    }
    else if (score < 65 && score >=60){
        printf("C");
    }
    else if (score < 60 && score >=55){
        printf("D+");
    }
    else if (score < 55 && score >=50){
        printf("D");
    }
    else if (score < 50){
        printf("F");
    }

}

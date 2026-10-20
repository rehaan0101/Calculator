#include <stdio.h>
#include "functions.h"
double add(double a, double b){
    return a+b;
}
double subtract(double a, double b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}
double multiply(double a,double b){
    return a*b;
}
double divide(double a, double b){
    return a/b;
}

int main() {
    double number_1;
    double number_2;

    int choice;
    printf("\033[33m -----------------------------------------\n");
    printf("\033[33m ******WELCOME TO CALCULATOR******\n");
    printf("\033[33m Press 1 to perform addition\n");
    printf("\033[33m Press 2 to perform subtraction\n");
    printf("\033[33m Press 3 to perform multiplication\n");
    printf("\033[33m Press 4 to perform divison\n");
    printf("\033[33m -----------------------------------------");
    printf("\n");
    printf("\033[32m Please enter your choice:- ");
    scanf("%d",&choice);

    if(choice==1){
        double result;

        printf("\033[33m Enter number 1:- ");
        scanf("%lf", &number_1);

        printf("\033[33m Enter number 2:- ");
        scanf("%lf", &number_2);
        
        result= add(number_1,number_2);
        printf("\033[34m The sum of two numbers is:- %.2f", result);
    }
    else if(choice==2){
        double result;

        printf("\033[33m Enter number 1:- ");
        scanf("%lf", &number_1);

        printf("\033[33m Enter number 2:- ");
        scanf("%lf", &number_2);
        
        result= subtract(number_1,number_2);
        printf("\033[34m The diffrence of two numbers is:- %.2f", result);
    }
    else if(choice==3){
        double result;

        printf("\033[33m Enter number 1:- ");
        scanf("%lf", &number_1);

        printf("\033[33m Enter number 2:- ");
        scanf("%lf", &number_2);
        
        result= multiply(number_1,number_2);
        printf("\033[34m The product of two numbers is:- %.2f", result);
    }
    else if(choice==4){
        double result;

        printf("\033[33m Enter number 1:- ");
        scanf("%lf", &number_1);

        printf("\033[33m Enter number 2:- ");
        scanf("%lf", &number_2);
        if(number_2==0){
            printf("\033[31m DIVISON BY 0 IS NOT POSSIBLE ");
        }
        else{
            result= divide(number_1,number_2);
            printf("\033[34m The Quotient of two numbers is:- %.2f", result);
        }
        
    }

    return 0;
}
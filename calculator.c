//
// Created by uchia on 12/15/2023.
//
#include "stdio.h"
#include "stdlib.h"
int option();
int adding(int num1 , int num2);
int substr(int num1 , int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
double square_root(double x);
char control();

int main(){
    int i = 0;
    char userInput;
    int firstNumber = 0;
    int  secondNumber = 0;
    double sr,sr1;


//    while (i<1) {

        printf("### Welcome to our calculator system! ### \n");
        printf("Pleas enter the value of firstNumber: ");
        scanf("%d", &firstNumber);
        printf("Please enter the value of secondNumber: ");
        scanf("%d", &secondNumber);
        int userData = option();
        if (userData == 1) {
            int add = adding(firstNumber, secondNumber);
            printf("The result of adding the values A and B = \n %d", add);
        } else if (userData == 2) {
            int sub = substr(firstNumber, secondNumber);
            printf("The result of subtraction the values of A and B = \n %d", sub);
        } else if (userData == 3) {
            int multiply = multiplication(firstNumber, secondNumber);
            printf("The result of multiplication the values of A and B = !\n %d", multiply);
        } else if (userData == 4) {
            int divided = division(firstNumber, secondNumber);
            printf("The result of division the values of A and B = \n %d", divided);
        } else if (userData == 5) {

            if (firstNumber <= 0)
                return (1);
            sr = square_root(firstNumber);
            printf("\n The result of square root of firstNumber = %f", sr);

            if (secondNumber <= 0)
                return (1);
            sr1 = square_root(secondNumber);
            printf("\n The result of square root of secondNumber =  %f", sr1);
        } else {
            printf("You can enter only the description values!\n");

        }


//        printf("\nDo you want to continue? y/n");
//        scanf("%c", &userInput);
//        switch (userInput) {
//            case 'y':
//                    i++;
//                    break;
//                default:
//                    printf("\nThe program is running!\n");
//            }
//        }



}

int option(){
    int userData = 0;
    printf("# Enter 1 to add:\n#Enter 2 to sub:\nEnter 3 to mul:\nEnter 4 to div:\nEnter 5 to sqrt");
    scanf("%d",&userData);


    return userData;

}

int adding(int num1 , int num2){

    int total = num1+num2;

    return total;
}

int substr(int num1 , int num2){

    int total = num1-num2;
    return total;
}

int multiplication(int num1, int num2){
    int total = num1 * num2;
    return total;
}

int division(int num1, int num2){
    int total = num1 / num2;
    return total;
}

char control(){
    char userData;
    printf("\nDo you want to continue? y/n");
    scanf("%c", &userData);

    return  userData;
}

double square_root(double x)
{
    double y;
    int p,square,c;

    /* find the surrounding perfect squares */
    p = 0;
    do
    {
        p++;
        square = (p+1) * (p+1);//4
    }
    while( x > square );

    /* process the root */
    y = (double)p;//8
    c = 0;
    while(c<10)
    {
        /* divide and average */
        y = (x/y + y)/2;//4/8 + 8 = 1/4 + 8 = 0.25 + 8 = 8.25/2 =4.125
        /* test for success */
        if( y*y == x)
            return(y);
        c++;
    }
    return(y);
}
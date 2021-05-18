#include <stdio.h>

void main (void) {

    int number, ten, one ;

    printf("please enter your ");
    scanf("%d", &number);

    if (number < 20) {
        switch (number) {
            case 0: 
                printf("Zero"); break;
            case 1: 
                printf("One"); break;
            case 2: 
                printf("Two"); break;
            case 3: 
                printf("Tree"); break;
            case 4: 
                printf("Four"); break;
            case 5: 
                printf("Five"); break;
            case 6: 
                printf("Six"); break;
            case 7: 
                printf("Seven"); break;
            case 8: 
                printf("Eight"); break;
            case 9: 
                printf("Nine"); break;
            case 10: 
                printf("Ten"); break;
            case 11: 
                printf("Eleven"); break;
            case 12: 
                printf("Twelve"); break;
            case 13: 
                printf("Thirteen"); break;
            case 14: 
                printf("Fourten"); break;
            case 15: 
                printf("Fiveteen"); break;
            case 16: 
                printf("Sixteen"); break;
            case 17: 
                printf("Seventeen"); break;
            case 18: 
                printf("Eighteen"); break;
            case 19: 
                printf("Nineteen"); break;
        }        
    } else {

        ten = number / 10 ;
        one = number % 10 ;
        switch (ten) {
            case 2: 
                printf("Twenty "); break;
            case 3: 
                printf("Thirty "); break;
            case 4: 
                printf("Forty "); break;
            case 5: 
                printf("Fifty "); break;
            case 6: 
                printf("Sixty "); break;
            case 7: 
                printf("Seventy "); break;
            case 8: 
                printf("Eighty "); break;
            case 9: 
                printf("ninety "); break;
        }
        switch (one) {
            case 1: 
                printf("One"); break;
            case 2: 
                printf("Two"); break;
            case 3: 
                printf("Tree"); break;
            case 4: 
                printf("Four"); break;
            case 5: 
                printf("Five"); break;
            case 6: 
                printf("Six"); break;
            case 7: 
                printf("Seven"); break;
            case 8: 
                printf("Eight"); break;
            case 9: 
                printf("Nine"); break;
        }           
    }
}

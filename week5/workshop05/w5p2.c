/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
Full Name  :    Vinicius Hayden Souza da Silva
Student ID#:    135067221
Email      :    vhsouza-da-silva@myseneca.ca
Section    :    NCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void) {
    
    const int JAN = 1;
    const int DEC = 12;
    int year, month, valid, i;
    
    double mRate, eRate, sumM = 0.0, sumE = 0.0, sumAll = 0.0, avgM, avgE, avg;
    
    printf("General Well-being Log\n");
    printf("======================\n");
    
    do {
        valid = 1;
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);
        
        if (year < MIN_YEAR || year > MAX_YEAR) {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            valid = 0;
        }
        
        if (month < JAN || month > DEC) {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
            valid = 0;
        }
        
    } while (valid == 0);
        
    printf("\n");
    printf("*** Log date set! ***\n");
    printf("\n");
    
    
//    printf("Log starting date: ");
    
    
    for (i=1; i <= LOG_DAYS; i++) {
        switch (month) {
            case 1:
                printf("%d-JAN-%02d\n", year, i);
                break;
            case 2:
                printf("%d-FEB-%02d\n", year, i);
                break;
            case 3:
                printf("%d-MAR-%02d\n", year, i);
                break;
            case 4:
                printf("%d-APR-%02d\n", year, i);
                break;
            case 5:
                printf("%d-MAY-%02d\n", year, i);
                break;
            case 6:
                printf("%d-JUN-%02d\n", year, i);
                break;
            case 7:
                printf("%d-JUL-%02d\n", year, i);
                break;
            case 8:
                printf("%d-AUG-%02d\n", year, i);
                break;
            case 9:
                printf("%d-SEP-%02d\n", year, i);
                break;
            case 10:
                printf("%d-OCT-%02d\n", year, i);
                break;
            case 11:
                printf("%d-NOV-%02d\n", year, i);
                break;
            case 12:
                printf("%d-DEC-%02d\n", year, i);
                break;
            default:
                printf("Error!");
                break;
        }
        
        do {
            valid = 0;
            printf("   Morning rating (0.0-5.0): ");
            scanf("%lf", &mRate);
            if (mRate < 0 || mRate > 5) {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                valid = 1;
            } else {
                sumM = sumM + mRate;
            }
            
        } while (valid == 1);
     
        valid = 0;
    
        do {
            valid = 0;
            printf("   Evening rating (0.0-5.0): ");
            scanf("%lf", &eRate);
            if (eRate < 0 || eRate > 5) {
                printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
                valid = 1;
                
            } else {
                sumE = sumE + eRate;
            }
            printf("\n");
        } while (valid == 1);
        
    }
    sumAll += sumE + sumM;
    printf("Summary\n");
    printf("=======\n");
    printf("Morning total rating: %.3lf\n", sumM);
    printf("Evening total rating:  %.3lf\n", sumE);
    printf("----------------------------\n");
    printf("Overall total rating: %.3lf\n", sumAll);
    printf("\n");
    avgM = (double)sumM/LOG_DAYS;
    avgE = (double)sumE/LOG_DAYS;
    printf("Average morning rating:  %.1lf\n", avgM);
    printf("Average evening rating:  %.1lf\n", avgE);
    printf("----------------------------\n");
    avg = (sumM + sumE)/(LOG_DAYS * 2);
    printf("Average overall rating:  %.1lf\n", avg);
    printf("\n");

    return 0;
}


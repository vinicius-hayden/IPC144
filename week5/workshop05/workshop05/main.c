///*/////////////////////////////////////////////////////////////////////////
//                          Workshop - #5 (P1)
//Full Name  :    Vinicius Hayden Souza da Silva
//Student ID#:    135067221
//Email      :    vhsouza-da-silva@myseneca.ca
//Section    :    NCC
//
//Authenticity Declaration:
//I declare this submission is the result of my own work and has not been
//shared with any other student or 3rd party content provider. This submitted
//piece of work is entirely of my own creation.
///////////////////////////////////////////////////////////////////////////*/
//
//#include <stdio.h>
//#define MIN_YEAR 2012
//#define MAX_YEAR 2022
//
//int main(void) {
//    
//    const int JAN = 1;
//    const int DEC = 12;
//    int year, month, valid;
//    
//    
//    printf("General Well-being Log\n");
//    printf("======================\n");
//    
//    do {
//        valid = 1;
//        printf("Set the year and month for the well-being log (YYYY MM): ");
//        scanf("%d %d", &year, &month);
//        
//        if (year < MIN_YEAR || year > MAX_YEAR) {
//            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
//            valid = 0;
//        }
//        
//        if (month < JAN || month > DEC) {
//            printf("   ERROR: Jan.(1) - Dec.(12)\n");
//            valid = 0;
//        }
//        
//    } while (valid == 0);
//        
//    printf("\n");
//    printf("*** Log date set! ***\n");
//    printf("\n");
//    
//    printf("Log starting date: ");
//    switch (month) {
//        case 1:
//            printf("%d-JAN-%02d\n", year, 1);
//            break;
//        case 2:
//            printf("%d-FEB-%02d\n", year, 1);
//            break;
//        case 3:
//            printf("%d-MAR-%02d\n", year, 1);
//            break;
//        case 4:
//            printf("%d-APR-%02d\n", year, 1);
//            break;
//        case 5:
//            printf("%d-MAY-%02d\n", year, 1);
//            break;
//        case 6:
//            printf("%d-JUN-%02d\n", year, 1);
//            break;
//        case 7:
//            printf("%d-JUL-%02d\n", year, 1);
//            break;
//        case 8:
//            printf("%d-AUG-%02d\n", year, 1);
//            break;
//        case 9:
//            printf("%d-SEP-%02d\n", year, 1);
//            break;
//        case 10:
//            printf("%d-OCT-%02d\n", year, 1);
//            break;
//        case 11:
//            printf("%d-NOV-%02d\n", year, 1);
//            break;
//        case 12:
//            printf("%d-DEC-%02d\n", year, 1);
//            break;
//        default:
//            printf("ERROR\n");
//            break;
//    }
//    
//    return 0;
//}

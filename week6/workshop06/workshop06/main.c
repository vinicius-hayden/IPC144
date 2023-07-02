///*/////////////////////////////////////////////////////////////////////////
//                          Workshop - #6 (P1)
//Full Name  :    Vinicius Souza da Silva
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
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#define MAX_NUMBER_OF_ITEMS 10
//#define MIN_NUMBER_OF_ITEMS 1
//
//int main(void)
//{
//    const double MAX_INCOME = 400000.00;
//    const double MIN_INCOME = 500.00;
//    const double MIN_COST = 100.00;
//    
//    const int MIN_PRIORITY = 1;
//    const int MAX_PRIORITY = 3;
//    
//    const char YES = 'y';
//    const char NO = 'n';
//    double income;
//    int i, num_items;
//    double cost[MAX_NUMBER_OF_ITEMS];
//    int priority[MAX_NUMBER_OF_ITEMS];
//    char finance[MAX_NUMBER_OF_ITEMS];
//    double total_cost = 0;
//    
//    printf("+--------------------------+\n");
//    printf("+   Wish List Forecaster   |\n");
//    printf("+--------------------------+\n");
//    printf("\n");
//    
//    do {
//        printf("Enter your monthly NET income: $");
//        scanf("%lf", &income);
//
//        if (income > MAX_INCOME) {
//            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
//            continue;
//        }
//
//        if (income < MIN_INCOME) {
//            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
//            continue;
//        }
//        else {
//            printf("\n");
//            break;
//        }
//        
//    } while (1);
//
//    do {
//        num_items = 0;
//
//        printf("How many wish list items do you want to forecast?: ");
//        scanf("%d", &num_items);
//        if (num_items < MIN_NUMBER_OF_ITEMS || num_items > MAX_NUMBER_OF_ITEMS) {
//            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
//            continue;
//        } else {
//            break;
//        }
//
//    } while (1);
//    
//    for (i = 0; i < num_items; i++) {
//        printf("\n");
//        printf("Item-%d Details:\n", i+1);
//        do {
//            printf("   Item cost: $");
//            scanf("%lf", &cost[i]);
//            if (cost[i] < MIN_COST) {
//                printf("      ERROR: Cost must be at least $100.00\n");
//                continue;
//            } else {
//                break;
//            }
//        } while (1);
//        
//        do {
//            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
//            if (scanf("%d", &priority[i]) != 1) {
//                printf("     ERROR: Invalid input. Please enter an integer value.\n");
//                while (getchar() != '\n');
//                continue;
//            }
//
//            if (priority[i] < MIN_PRIORITY || priority[i] > MAX_PRIORITY) {
//                printf("      ERROR: Value must be between 1 and 3\n");
//                continue;
//            }
//            
//            break;
//        } while (1);
//
//        do {
//            printf("   Does this item have financing options? [y/n]: ");
//            scanf(" %c", &finance[i]);
//            if (finance[i] != 'y' && finance[i] != 'n') {
//                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
//            }
//        } while (finance[i] != YES && finance[i] != NO);
//        
//    }
//    printf("\n");
//    // print report
//    printf("Item Priority Financed        Cost\n");
//    printf("---- -------- -------- -----------\n");
//    
//    for (i = 0; i < num_items; i++) {
//        printf("%3d  %5d    %5c    %11.2lf\n",i + 1,priority[i], finance[i], cost[i]);
//        total_cost= total_cost + cost[i];
//    }
//    printf("---- -------- -------- -----------\n");
//    printf("                      $%11.2lf\n\n", total_cost);
//    printf("Best of luck in all your future endeavours!\n");
//
//    return 0;
//}

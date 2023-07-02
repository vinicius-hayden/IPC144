/*/////////////////////////////////////////////////////////////////////////
 Workshop - #6 (P2)
 Full Name  :    Vinicius Souza da Silva
 Student ID#:    135067221
 Email      :    vhsouza-da-silva@myseneca.ca
 Section    :    NCC
 
 Authenticity Declaration:
 I declare this submission is the result of my own work and has not been
 shared with any other student or 3rd party content provider. This submitted
 piece of work is entirely of my own creation.
 /////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_NUMBER_OF_ITEMS 10
#define MIN_NUMBER_OF_ITEMS 1

//テスト

int main(void)
{
    const double MAX_INCOME = 400000.00;
    const double MIN_INCOME = 500.00;
    const double MIN_COST = 100.00;
    
    const int MIN_PRIORITY = 1;
    const int MAX_PRIORITY = 3;
    
    const char YES = 'y';
    const char NO = 'n';
    double income;
    int i, valid, num_items, forecast_option, priority_filter, years, months;
    double cost[MAX_NUMBER_OF_ITEMS];
    int priority[MAX_NUMBER_OF_ITEMS];
    char finance[MAX_NUMBER_OF_ITEMS];
    double total_cost = 0;
    
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");
    printf("\n");
    
    do {
        valid = 1;
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);
        
        if (income > MAX_INCOME) {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
            valid = 0;
        }
        
        if (income < MIN_INCOME) {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
            valid = 0;
        }
        
    } while (!valid);
    
    printf("\n");
    
    do {
        num_items = 0;
        valid = 1;
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &num_items);
        if (num_items < MIN_NUMBER_OF_ITEMS || num_items > MAX_NUMBER_OF_ITEMS) {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
            valid = 0;
        }
        
    } while (!valid);
    
    for (i = 0; i < num_items; i++) {
        printf("\n");
        printf("Item-%d Details:\n", i+1);
        do {
            valid = 1;
            printf("   Item cost: $");
            scanf("%lf", &cost[i]);
            if (cost[i] < MIN_COST) {
                valid = 0;
                printf("      ERROR: Cost must be at least $100.00\n");
            }
        } while (!valid);
        
        do {
            valid = 1;
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i] < MIN_PRIORITY || priority[i] > MAX_PRIORITY) {
                valid = 0;
                printf("      ERROR: Value must be between %d and %d\n", MIN_PRIORITY, MAX_PRIORITY);
            }
        } while (!valid);
        
        do {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);
            if (finance[i] != 'y' && finance[i] != 'n') {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (finance[i] != YES && finance[i] != NO);
        
    }
    printf("\n");
    // print report
    printf("Item Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");
    
    for (i = 0; i < num_items; i++) {
        printf("%3d  %5d    %5c    %11.2lf\n",i + 1,priority[i], finance[i], cost[i]);
        total_cost= total_cost + cost[i];
    }
    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n", total_cost);
    
    int totalMonths = (int)(total_cost / income);
    years = totalMonths / 12;
    months = totalMonths % 12 + 1;
    
    do {
        printf("\n");
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &forecast_option);
        printf("\n");
        
        if(forecast_option == 1) {
            
            printf("====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", total_cost);
            printf("Forecast: %d years, %d months\n", years, months);
            printf("NOTE: Financing options are available on some items.\n");
            printf("      You can likely reduce the estimated months.\n");
            printf("====================================================\n");
            
        }
        else if(forecast_option == 2) {
            printf("What priority do you want to filter by? [1-3]: ");
            scanf("%d", &priority_filter);
            
            if (priority_filter == 1 || priority_filter == 2 || priority_filter == 3) {
                double priority_total_cost = 0;
                int finance_option = 0;
                
                for (i = 0; i < num_items; i++) {
                    
                    if (priority[i] == priority_filter) {
                        
                        priority_total_cost = priority_total_cost + cost[i];
                        if (finance[i] == YES) {
                            finance_option = 1;
                        }
                        
                    }
                    
                }
                
                totalMonths = (int)(priority_total_cost / income);
                years = totalMonths / 12;
                months = totalMonths % 12 + 1;
 
                printf("\n");
                printf("====================================================\n");
                printf("Filter:   by priority (%d)\n", priority_filter);
                printf("Amount:   $%1.2lf\n", priority_total_cost);
                
                printf("Forecast: %d years, %d months\n", years, months);
                if (finance_option) {
                    printf("NOTE: Financing options are available on some items.\n");
                    printf("      You can likely reduce the estimated months.\n");
                }
                printf("====================================================\n");
                
            }
        }  else if (forecast_option != 0){
            printf("ERROR: Invalid menu selection.\n");
        }
    }
    
    while (forecast_option != 0);
    printf("Best of luck in all your future endeavours!\n");
    printf("\n");
    
    return 0;
}

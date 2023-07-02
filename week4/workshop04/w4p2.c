/*
 ***************************************************************************
 <assessment name example: Workshop - #4 (Part-2)>
 Full Name  : Vinicius Hayden Souza da Silva
 Student ID#: 135067221
 Email      : vhsouza-da-silva@myseneca.ca
 Section    : NCC
 Authenticity Declaration:
 I declare this submission is the result of my own work and has not been
 shared with any other student or 3rd party content provider. This submitted
 piece of work is entirely of my own creation.
 *****************************************************************************
 */

#include <stdio.h>

int main (void) {
    
    int apples, oranges, pears, tomatoes, cabbages;
    int loop_option = 0, pick;
    
    do {
        
        printf("Grocery Shopping\n");
        printf("================\n");
        
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);
        
        
        while (apples < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &apples);
        }
        
        printf("\n");
        printf("How many ORANGES do you need? : ");
        scanf("%d", &oranges);
        
        while (oranges < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &oranges);
        }
        printf("\n");
        printf("How many PEARS do you need? : ");
        scanf("%d", &pears);
        
        while (pears < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &pears);
        }
        printf("\n");
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);
        
        while (tomatoes < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoes);
        }
        printf("\n");
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbages);
        
        while (cabbages < 0) {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbages);
        }
        
        printf("\n");
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n");

        printf("\n");
        
        while (apples > 0) {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &pick);

            while (pick < 1) {
                printf("ERROR: You must pick at least 1!\n");
                printf("Pick some APPLES... how many did you pick? : ");
                scanf("%d", &pick);
            }

            if (pick > apples) {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
            } else {
                apples -= pick;
                if (apples == 0) {
                    printf("Great, that's the apples done!\n");
                    printf("\n");
                    break;
                } else {
                    printf("Looks like we still need some APPLES...\n");
                }
            }
        }

        pick = 0;
        
        while (oranges > 0) {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &pick);

            while (pick < 1) {
                printf("ERROR: You must pick at least 1!\n");
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &pick);
            }

            if (pick > oranges) {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
            } else {
                oranges -= pick;
                if (oranges == 0) {
                    printf("Great, that's the oranges done!\n");
                    printf("\n");
                    break;
                } else {
                    printf("Looks like we still need some ORANGES...\n");
                }
            }
        }

        pick = 0;
        
        while (pears > 0) {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pick);

            while (pick < 1) {
                printf("ERROR: You must pick at least 1!\n");
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &pick);
            }

            if (pick > pears) {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
            } else {
                pears -= pick;
                if (pears == 0) {
                    printf("Great, that's the pears done!\n");
                    printf("\n");
                    break;
                } else {
                    printf("Looks like we still need some PEARS...\n");
                }
            }
        }
        
        pick = 0;

        while (tomatoes > 0) {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &pick);

            while (pick < 1) {
                printf("ERROR: You must pick at least 1!\n");
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &pick);
            }

            if (pick > tomatoes) {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
            } else {
                tomatoes -= pick;
                if (tomatoes == 0) {
                    printf("Great, that's the tomatoes done!\n");
                    printf("\n");
                    break;
                } else {
                    printf("Looks like we still need some TOMATOES...\n");
                }
            }
        }
        
        pick = 0;
        
        while (cabbages > 0) {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &pick);

            while (pick < 1) {
                printf("ERROR: You must pick at least 1!\n");
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &pick);
            }

            if (pick > cabbages) {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
            } else {
                cabbages -= pick;
                if (cabbages == 0) {
                    printf("Great, that's the cabbages done!\n");
                    printf("\n");
                    break;
                } else {
                    printf("Looks like we still need some CABBAGES...\n");
                }
            }
        }
        
        printf("All the items are picked!\n");
            
        printf("\nDo another shopping? (0=NO): ");
        scanf("%d", &loop_option);
        printf("\n");
        
    } while (loop_option != 0);
    
    printf("Your tasks are done for today - enjoy your free time!\n");
    
    return 0;
}

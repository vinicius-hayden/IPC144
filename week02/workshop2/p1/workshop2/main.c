///*
// /////////////////////////////////////////////////////////////////////////
//                          Workshop - #2 (P1)
//Full Name  : Vinicius Hayden Souza da Silva
//Student ID#: 135067221
//Email      : vhsouza-da-silva@myseneca.ca
//Section    : NCC
//
//Authenticity Declaration:
//
//I declare this submission is the result of my own work and has not been
//shared with any other student or 3rd party content provider. This submitted
//piece of work is entirely of my own creation.
///////////////////////////////////////////////////////////////////////////
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//    
//    double price_small, price_medium, price_large;
//    int    shirt_number;
//    int    sub_total, taxes, total;
//    const double TAX = 0.13;
//    
//    printf("Set Shirt Prices\n");
//    printf("================\n");
//    printf("Enter the price for a SMALL shirt: $");
//    scanf("%lf", &price_small);
//    printf("Enter the price for a MEDIUM shirt: $");
//    scanf("%lf", &price_medium);
//    printf("Enter the price for a LARGE shirt: $");
//    scanf("%lf", &price_large);
//    printf("\nShirt Store Price List\n");
//    printf("======================\n");
//    printf("SMALL  : $%.2lf\n", price_small);
//    printf("MEDIUM : $%.2lf\n", price_medium);
//    printf("LARGE  : $%.2lf\n", price_large);
//    printf("\n");
//    printf("Patty's shirt size is 'S'\n");
//    printf("Number of shirts Patty is buying: ");
//    scanf("%d", &shirt_number);
//    printf("\n");
//    printf("Patty's shopping cart...\n");
//    
//    sub_total = shirt_number * price_small * 100 +0.5;
//    taxes = sub_total * TAX+0.5;
//    total = sub_total + taxes;
//    
//    printf("Contains : %d shirts\n", shirt_number);
//    printf("Sub-total: $%8.4lf\n", sub_total/100.0);
//    printf("Taxes    : $%8.4lf\n", taxes/100.0);
//    printf("Total    : $%8.4lf\n", total/100.0);
//    
//    return 0;
//}

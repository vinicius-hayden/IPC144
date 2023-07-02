/*
 /////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : Vinicius Hayden Souza da Silva
Student ID#: 135067221
Email      : vhsouza-da-silva@myseneca.ca
Section    : NCC

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    
    double price_small, price_medium, price_large;
    int    patty_number, tommy_number, sally_number;
    int    sub_total, taxes, total, grandsubtotal, grandtaxes, grandtotal;
    const double TAX = 0.13;
    grandtotal = 0;
    grandsubtotal = 0;
    grandtaxes = 0;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &price_small);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &price_medium);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &price_large);
    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n", price_small);
    printf("MEDIUM : $%.2lf\n", price_medium);
    printf("LARGE  : $%.2lf\n", price_large);
    printf("\n");
    printf("Patty's shirt size is 'S'\n");
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patty_number);
    printf("\n");
    printf("Tommy's shirt size is 'L'\n");
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tommy_number);
    printf("\n");
    printf("Sally's shirt size is 'M'\n");
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &sally_number);
    printf("\n");
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    
    sub_total = patty_number * price_small * 100 +0.5;
    grandsubtotal = grandsubtotal + sub_total;
    taxes = sub_total * TAX+0.5;
    grandtaxes = grandtaxes + taxes;
    total = sub_total + taxes;
    grandtotal = grandtotal + total;
    
    printf("Patty    S    %.2lf   %d  %8.4lf  %8.4lf  %8.4lf\n", price_small, patty_number, sub_total/100.0, taxes/100.0, total/100.0);
    
    sub_total = 0;
    taxes = 0;
    total = 0;
    sub_total = sally_number * price_medium * 100 +0.5;
    grandsubtotal = grandsubtotal + sub_total;
    taxes = sub_total * TAX+0.5;
    grandtaxes = grandtaxes + taxes;
    total = sub_total + taxes;
    grandtotal = grandtotal + total;
    
    printf("Sally    M    %.2lf   %d  %8.4lf  %8.4lf  %8.4lf\n", price_medium, sally_number, sub_total/100.0, taxes/100.0, total/100.0);
    sub_total = 0;
    taxes = 0;
    total = 0;
    sub_total = tommy_number * price_large * 100 +0.5;
    grandsubtotal = grandsubtotal + sub_total;
    taxes = sub_total * TAX+0.5;
    grandtaxes = grandtaxes + taxes;
    total = sub_total + taxes;
    grandtotal = grandtotal + total;
    
    printf("Tommy    L    %.2lf   %d  %8.4lf  %8.4lf  %8.4lf\n", price_large, tommy_number, sub_total/100.0, taxes/100.0, total/100.0);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("                         %8.4lf  %8.4lf  %8.4lf\n", grandsubtotal/100.0, grandtaxes/100.0, grandtotal/100.0);
    printf("\n");
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %8.4lf\n", grandsubtotal/100.0);
    int qty_toonies = grandsubtotal/200;
    int balance = grandsubtotal%200;
    printf("Toonies  %3d %9.4lf\n", qty_toonies, balance/100.0);
    int qty_loonies = balance/100;
    balance = balance%100;
    printf("Loonies  %3d %9.4lf\n", qty_loonies, balance/100.0);
    int qty_quarters = balance/25;
    balance = balance%25;
    printf("Quarters %3d %9.4lf\n", qty_quarters, balance/100.0);
    int qty_dimes = balance/10;
    balance = balance%10;
    printf("Dimes    %3d %9.4lf\n", qty_dimes, balance/100.0);
    int qty_nickels = balance/5;
    balance = balance%5;
    printf("Nickels  %3d %9.4lf\n", qty_nickels, balance/100.0);
    int qty_pennies = balance/1;
    balance = balance%1;
    printf("Pennies  %3d %9.4lf\n", qty_pennies, balance/100.0);
    printf("\n");
    int qty_total_number = patty_number + tommy_number + sally_number;
    printf("Average cost/shirt: $%.4lf\n", (grandsubtotal/100.0)/qty_total_number);
    printf("\n");
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("              %8.4lf\n", grandtotal/100.0);
    qty_toonies = grandtotal/200;
    balance = grandtotal%200;
    printf("Toonies  %3d %9.4lf\n", qty_toonies, balance/100.0);
    qty_loonies = balance/100;
    balance = balance%100;
    printf("Loonies  %3d %9.4lf\n", qty_loonies, balance/100.0);
    qty_quarters = balance/25;
    balance = balance%25;
    printf("Quarters %3d %9.4lf\n", qty_quarters, balance/100.0);
    qty_dimes = balance/10;
    balance = balance%10;
    printf("Dimes    %3d %9.4lf\n", qty_dimes, balance/100.0);
    qty_nickels = balance/5;
    balance = balance%5;
    printf("Nickels  %3d %9.4lf\n", qty_nickels, balance/100.0);
    qty_pennies = balance/1;
    balance = balance%1;
    printf("Pennies  %3d %9.4lf\n", qty_pennies, balance/100.0);
    printf("\n");
    printf("Average cost/shirt: $%.4lf\n", (grandtotal/100.0)/qty_total_number);
    printf("\n");

    return 0;
}


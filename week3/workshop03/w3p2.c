#include <stdio.h>
#include <ctype.h>

int main(void){
    
    int coffee1_weight_bag, coffee2_weight_bag, coffee3_weight_bag;
    char coffee1_type, coffee2_type, coffee3_type;
    char coffee1_option, coffee2_option, coffee3_option;

    int daily_servings1, daily_servings2;
    char user_coffee_type1, user_coffee_type2;
    char user_option1, user_option2;
    
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\n");
    printf("Enter the coffee product information being sold today...\n");
    printf("\n");
    
    printf("COFFEE-1...\n");
        printf("Type ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &coffee1_type);
        coffee1_type = tolower(coffee1_type);  // Convert to lowercase

        printf("Bag weight (g): ");
        scanf("%d", &coffee1_weight_bag);

        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &coffee1_option);
        coffee1_option = tolower(coffee1_option);  // Convert to lowercase

        printf("\n");

        printf("COFFEE-2...\n");
        printf("Type ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &coffee2_type);
        coffee2_type = tolower(coffee2_type);  // Convert to lowercase

        printf("Bag weight (g): ");
        scanf("%d", &coffee2_weight_bag);

        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &coffee2_option);
        coffee2_option = tolower(coffee2_option);  // Convert to lowercase

        printf("\n");

        printf("COFFEE-3...\n");
        printf("Type ([L]ight,[M]edium,[R]ich): ");
        scanf(" %c", &coffee3_type);
        coffee3_type = tolower(coffee3_type);  // Convert to lowercase

        printf("Bag weight (g): ");
        scanf("%d", &coffee3_weight_bag);

        printf("Best served with cream ([Y]es,[N]o): ");
        scanf(" %c", &coffee3_option);
        coffee3_option = tolower(coffee3_option);  // Convert to lowercase

        printf("\n");
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
           coffee1_type == 'l' || coffee1_type == 'L',
           coffee1_type == 'm' || coffee1_type =='M',
           coffee1_type == 'r' || coffee1_type =='R', coffee1_weight_bag, coffee1_weight_bag/453.6,
           coffee1_option == 'y' || coffee1_option == 'Y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
           coffee2_type == 'l' || coffee2_type == 'L',
           coffee2_type == 'm' || coffee2_type =='M',
           coffee2_type == 'r' || coffee2_type =='R', coffee2_weight_bag, coffee2_weight_bag/453.6,
           coffee2_option == 'y' || coffee2_option == 'Y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
           coffee3_type == 'l' || coffee3_type == 'L',
           coffee3_type == 'm' || coffee3_type =='M',
           coffee3_type == 'r' || coffee3_type =='R', coffee3_weight_bag, coffee3_weight_bag/453.6,
           coffee3_option == 'y' || coffee3_option == 'Y');
    printf("\n");
    
    printf("Enter how you like your coffee...\n");
       printf("\n");
       printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
       scanf(" %c", &user_coffee_type1);
       user_coffee_type1 = tolower(user_coffee_type1);  // Convert to lowercase

       printf("Do you like your coffee with cream ([Y]es,[N]o): ");
       scanf(" %c", &user_option1);
       user_option1 = tolower(user_option1);  // Convert to lowercase

       printf("Typical number of daily servings: ");
       scanf("%d", &daily_servings1);
       printf("\n");
       printf("The below table shows how your preferences align to the available products:\n");
       printf("\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",
           user_coffee_type1 == coffee1_type, daily_servings1 >= 1 && daily_servings1 <= 4,
           coffee1_option == user_option1);
    printf(" 2|       %d         |      %d      |   %d   |\n",
           user_coffee_type1 == coffee2_type, daily_servings1 >= 5 && daily_servings1 <= 9,
           coffee2_option == user_option1);
    printf(" 3|       %d         |      %d      |   %d   |\n",
           user_coffee_type1 == coffee3_type, daily_servings1 >= 10,
           coffee3_option == user_option1);
    printf("\n");
    
    printf("Enter how you like your coffee...\n");
       printf("\n");
       printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
       scanf(" %c", &user_coffee_type2);
       user_coffee_type2 = tolower(user_coffee_type2);  // Convert to lowercase

       printf("Do you like your coffee with cream ([Y]es,[N]o): ");
       scanf(" %c", &user_option2);
       user_option2 = tolower(user_option2);  // Convert to lowercase

       printf("Typical number of daily servings: ");
       scanf("%d", &daily_servings2);
       printf("\n");
       printf("The below table shows how your preferences align to the available products:\n");
       printf("\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",
           user_coffee_type2 == coffee1_type, daily_servings2 >= 1 && daily_servings2 <= 4,
           coffee1_option == user_option2);
    printf(" 2|       %d         |      %d      |   %d   |\n",
           user_coffee_type2 == coffee2_type, daily_servings2 >= 5 && daily_servings2 <= 9,
           coffee2_option == user_option2);
    printf(" 3|       %d         |      %d      |   %d   |\n",
           user_coffee_type2 == coffee3_type, daily_servings2 >= 10,
           coffee3_option == user_option2);
    printf("\n");

    
    printf("Hope you found a product that suits your likes!\n");
    
    return 0;
}

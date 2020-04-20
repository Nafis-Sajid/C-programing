// std = standard
// io = input oputput
// stdio = standard input output
#include <stdio.h>

int main()
{
    /*
    scanf("specifier",&variable name);
    printf("specifier",variable name);
    */

    // here int is integer data type
    // 32 bit space
    // for scan: %d
    // for print: %d
    int integer_number;
    printf("Enter a integer number: ");
    scanf("%d", &integer_number);
    printf("Your entered number is: %d\n", integer_number);

    // here long long is an integer data type
    // 64 bit space
    // for scan: %lld
    // for print: %lld
    long long long_long_number;
    printf("Enter a long long number: ");
    scanf("%lld", &long_long_number);
    printf("Your entered number is: %lld\n", long_long_number);

    // here float is a floating point number
    // 1.23456 12.3456
    // 32 bit space
    // for scan: %f
    // for print: %f
    float float_number;
    printf("Enter a float number: ");
    scanf("%f", &float_number);
    printf("Your entered number is: %f\n", float_number);

    // here double is a floating point number
    // 64 bit space
    // for scan: %lf
    // for print: %f
    double double_number;
    printf("Enter a double number: ");
    scanf("%lf", &double_number);
    printf("Your entered number is: %f\n", double_number);

    // here char is a character type data type
    // A B C D a b c d 1 2 3 4 5 6 7
    // 8 bit space
    // for scan: %c
    // for print: %c
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    printf("Your entered number is: %c\n", character);
}
#include <stdio.h>

void decimal_to_binary(int decimal) {
    if (decimal > 1) {
        decimal_to_binary(decimal / 2);
    }
    printf("%d", decimal % 2);
}

void decimal_to_octal(int decimal) {
    if (decimal != 0) {
        decimal_to_octal(decimal / 8);
        printf("%d", decimal % 8);
    }
}

void decimal_to_hexadecimal(int decimal) {
    if (decimal != 0) {
        decimal_to_hexadecimal(decimal / 16);
        int remainder = decimal % 16;
        if (remainder < 10) {
            printf("%d", remainder);
        } else {
            printf("%c", 'A' + remainder - 10);
        }
    }
}

int main() {
    while (1) {
		printf("-----------------------------------------\n");
        int decimal_number;
        printf("Enter a decimal number (enter 0 to exit): ");
        scanf("%d", &decimal_number);

        if (decimal_number == 0) {

			printf("Thanks for you!");
            break;
        }

        printf("Binary: ");
        decimal_to_binary(decimal_number);
        printf("\n");

        printf("Octal: ");
        decimal_to_octal(decimal_number);
        printf("\n");

        printf("Hexadecimal: ");
        decimal_to_hexadecimal(decimal_number);
        printf("\n");
    }

    return 0;
}

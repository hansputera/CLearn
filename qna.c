#include <stdio.h>

int main() {
    char names[100];
    char address[100];
    int age;

    printf("What is your name?: ");
    scanf("%s", &names[0]);
    printf("\nHow old are you?: ");
    scanf("%d", &age);
    printf("\nWhere are you from?: ");
    scanf("%s", &address[0]);


    // prints the result
    printf("\n\nYour name is: %s\nYour age: %d years old\nYou address: %s\n", names, age, address);

    return 0;
}
#include <stdio.h>

int main() {
    int password;
    int correct_password = 1234;

    while (1) {
        printf("Enter the password: ");
        scanf("%d", &password);

        if (password == correct_password) {
            printf("Correct password\n");
            break; // Exit the loop
        } else {
            printf("Incorrect password\n");
        }
    }

    return 0;
}


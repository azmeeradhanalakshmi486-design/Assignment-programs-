#include <stdio.h>

int main() {
    int id, password;

    printf("Enter user ID: ");
    scanf("%d", &id);

    if (id != 101) {
        printf("User not found");
    } else {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 4321)
            printf("Login successful");
        else
            printf("Incorrect password");
    }

    return 0;
}
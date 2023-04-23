#include<stdio.h>

void addPassword() {
    printf("Add new password");
}

void getPassword() {
    printf("Get password");
}

void updatePassword() {
    printf("Update password");
}

void deletePassword() {
    printf("Delete password");
}

void main() {

    // display all operations
    printf("1) Add new password\n");
    printf("2) Get password\n");
    printf("3) Update password\n");
    printf("4) Delete password\n");
    printf("Select operation: ");

    // Save user's option
    int selectedOperation;
    scanf("%d", &selectedOperation);

    switch(selectedOperation) {
        case 1:
            addPassword();
            break;
        case 2:
            getPassword();
            break;
        case 3:
            updatePassword();
            break;
        case 4:
            deletePassword();
            break;
        default:
            printf("\nIncorrect option selected");
    }
}
#include<stdio.h>
#include<string.h>

int count = 100;
int charLimit = 100;
int counter = 0;

void addPassword(char applications[][charLimit], char passwords[][charLimit]) {
    char newPassword[charLimit];
    char newApplication[charLimit];

    // temp store new app
    printf("\nEnter application name: ");
    scanf("%s", newApplication);
    
    // temp store new password
    printf("Enter password for %s: ", newApplication);
    scanf("%s", newPassword);

    // update in global apps and passwords lists
    strcpy(applications[counter], newApplication);
    strcpy(passwords[counter], newPassword);
    
    // update pointer of apps and passwords lists
    counter++;
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
    char applications[count][charLimit];
    char passwords[count][charLimit];

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
            addPassword(applications, passwords);
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
#include<stdio.h>
#include<string.h>

int count = 100;
int charLimit = 100;
int counter = 0;

void printAllApps(char applications[][charLimit]) {
    printf("\nAll saved applications:");
    for (int i = 0 ; i < counter ; i++) {
        if (strcmp(applications[i], "") != 0) {
            // if application is not empty string, then it is valid app and print it
            printf("\n%d) %s", i + 1, applications[i]);
        }
    }
}

void addPassword(char applications[][charLimit], char passwords[][charLimit]) {
    char newPassword[charLimit];
    char newApplication[charLimit];

    // temp store new app
    printf("\nEnter application name: ");
    scanf("%s", newApplication);
    
    // temp store new password
    printf("Enter password for %s: ", newApplication);
    scanf("%s", newPassword);

    // update in master apps and passwords lists
    strcpy(applications[counter], newApplication);
    strcpy(passwords[counter], newPassword);
    
    // update pointer of master apps and passwords lists
    counter++;
}

void getPassword(char applications[][charLimit], char passwords[][charLimit]) {
    if (counter == 0) {
        // since no app was saved, we cant get any password
        
        printf("No app has been saved\n");
        return;
    }

    printAllApps(applications);
    
    // temp store app id
    int appId;
    printf("\nEnter id of app: ");
    scanf("%d", &appId);

    // get password from master passwords lists for the saved appId
    printf("Password of app %s is %s\n", applications[appId - 1], passwords[appId - 1]);
}

void updatePassword(char applications[][charLimit], char passwords[][charLimit]) {
    if (counter == 0) {
        // since no app was saved, we cant get any password
        
        printf("No app has been saved\n");
        return;
    }

    printAllApps(applications);

    // temp store app id
    int appId;
    printf("\nEnter id of app: ");
    scanf("%d", &appId);

    char updatedPassword[charLimit];
    printf("Enter new password for %s: ", applications[appId - 1]);
    scanf("%s", updatedPassword);

    strcpy(passwords[appId - 1], updatedPassword);
}

void deletePassword() {
    printf("Delete password");
}

void main() {
    char applications[count][charLimit];
    char passwords[count][charLimit];
    int selectedOperation;

    while(1) {
        // display all operations
        printf("\n1) Add new password\n");
        printf("2) Get password\n");
        printf("3) Update password\n");
        printf("4) Delete password\n");
        printf("5) Quit\n");
        printf("Select operation: ");

        // Save user's option
        scanf("%d", &selectedOperation);

        switch(selectedOperation) {
            case 1:
                addPassword(applications, passwords);
                break;
            case 2:
                getPassword(applications, passwords);
                break;
            case 3:
                updatePassword(applications, passwords);
                break;
            case 4:
                deletePassword();
                break;
            case 5:
            printf("Bye :(");
                return;
            default:
                printf("\nIncorrect option selected");
        }
    }

}
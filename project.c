
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum {
    HOME,
    CELL,
    WORK,
    UNKNOWN
} PhoneType;

typedef struct {
    char firstName[50];
    char lastName[50];
    char address[100];
    char state[3];
    char phoneNumber[15];
    PhoneType phoneType;
    char icdCode[10];
} PersonalHealthInfo;

int isValidStateCode(const char *code) {
    const char *states[] = {
        "AL","AK","AZ","AR","CA","CO","CT","DE","FL","GA",
        "HI","ID","IL","IN","IA","KS","KY","LA","ME","MD",
        "MA","MI","MN","MS","MO","MT","NE","NV","NH","NJ",
        "NM","NY","NC","ND","OH","OK","OR","PA","RI","SC",
        "SD","TN","TX","UT","VT","VA","WA","WV","WI","WY"
    };
    for (int i = 0; i < 50; i++) {
        if (strcmp(code, states[i]) == 0)
            return 1;
    }
    return 0;
}

PhoneType getPhoneTypeFromInput(char input) {
    switch (toupper(input)) {
        case 'H': return HOME;
        case 'C': return CELL;
        case 'W': return WORK;
        default: return UNKNOWN;
    }
}

const char* phoneTypeToString(PhoneType type) {
    switch (type) {
        case HOME: return "Home";
        case CELL: return "Cell";
        case WORK: return "Work";
        default: return "Unknown";
    }
}

int main() {
    PersonalHealthInfo person;

    printf("Enter First Name: ");
    scanf("%49s", person.firstName);

    printf("Enter Last Name: ");
    scanf("%49s", person.lastName);

    printf("Enter Address: ");
    scanf(" %[^
]", person.address);

    do {
        printf("Enter State Code (e.g., TX): ");
        scanf("%2s", person.state);
        for (int i = 0; i < 2; ++i)
            person.state[i] = toupper(person.state[i]);
        person.state[2] = '\0';
    } while (!isValidStateCode(person.state));

    printf("Enter Phone Number (e.g., 123-456-7890): ");
    scanf("%14s", person.phoneNumber);

    char phoneTypeChar;
    printf("Enter Phone Type (H for Home, C for Cell, W for Work): ");
    scanf(" %c", &phoneTypeChar);
    person.phoneType = getPhoneTypeFromInput(phoneTypeChar);

    printf("Enter ICD Code: ");
    scanf("%9s", person.icdCode);

    printf("\n--- Collected Information ---\n");
    printf("Name: %s %s\n", person.firstName, person.lastName);
    printf("Address: %s, %s\n", person.address, person.state);
    printf("Phone: %s (%s)\n", person.phoneNumber, phoneTypeToString(person.phoneType));
    printf("ICD Code: %s\n", person.icdCode);

    return 0;
}

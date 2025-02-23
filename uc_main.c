int main() {
    printf("Hello! Choose a conversion type:\n");
    printf("1. Length\n");
    printf("2. Temperature\n");
    printf("3. Weight\n");
    printf("4. Volume\n");
    printf("5. Speed\n");
    printf("6. Area\n");
    printf("7. Time\n");
    printf("8. Exit\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Length conversion selected. Choose\n");
            break;
        case 2:
            printf("Temperature conversion selected.\n");
            break;
        case 3:
            printf("Weight conversion selected.\n");
            break;
        case 4:
            printf("Volume conversion selected.\n");
            break;
        case 5:
            printf("Speed conversion selected.\n");
            break;
        case 6:
            printf("Area conversion selected.\n");
            break;
        case 7:
            printf("Time conversion selected.\n");
            break;
        case 8:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    return 0;
}


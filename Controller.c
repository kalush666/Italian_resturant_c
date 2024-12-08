#include "Controller.h"

void open_restaurant() {
    int choise;
    int *ion_guest_counter = malloc(sizeof(int));
    char *szName = malloc(sizeof(char) * BUFFER);
    char **arrAllGuests = NULL;


    do {
        print_menu();
        scanf("%d", &choise);
        getchar();
        switch (choise) {
            case 1:
                print_all_guests(arrAllGuests, ion_guest_counter);
                break;
            case 2:
                printf("enter guest name\n");
                fgets(szName,BUFFER,stdin);
                arrAllGuests = add_guest(arrAllGuests, ion_guest_counter, szName);
                break;
            case 3:
                printf("enter guest name to remove from guest list\n");
                fgets(szName,BUFFER,stdin);
                arrAllGuests = cancel_guest(arrAllGuests, ion_guest_counter, szName);
                break;
            case 4:
                arrAllGuests = cancel_all_guests(arrAllGuests, ion_guest_counter);
                break;
            case 5:
                printf("Thank you for visiting Italian Restaurant!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choise != 5);
}

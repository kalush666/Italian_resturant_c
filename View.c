#include "View.h"

void print_all_guests(char **arrAllGuests, int *ion_guest_number) {
    int i;
    if (arrAllGuests == NULL) {
        printf("no guests have ordered place in the restaurant\n");
        return;
    }
    for (i = 0; i < *ion_guest_number; i++) {
        printf("%s\n", *(arrAllGuests + i));
    }
}

void print_menu() {
    printf("Welcome to Italian Restaurant!\n"
        "please make a selection choices are:\n"
        "1. print all guests\n"
        "2. add a guest\n"
        "3. remove a guest\n"
        "4. remove all guests\n"
        "5. finish\n");
}

#include "Model.h"

#include <stdio.h>
#include <stdlib.h>
char *mem_copy(char *firststring, const char *secondstring, size_t len) {
    char *d = (char *)firststring;
    const char *s = (const char *)secondstring;
    size_t i;

    for (i = 0; i < len; i++) *(d + i) = *(s + i);


    return firststring;
}

void copy_string(char **firststring, const char *secondString) {
    size_t len = 0;
    while (*(secondString+len) != '\0') len++;

    *firststring = malloc(len + 1);
    if (*firststring == NULL) {
        printf("failed at copy_string");
        exit(1);
    }

    mem_copy(*firststring, secondString, len + 1);
}




char **add_guest(char **arrAllGuests, int *ion_guest_counter, char *szName) {
    char **temp;
    if (arrAllGuests == NULL) {
        temp = malloc(sizeof(char *));
        if (temp == NULL) {
            printf("failed at add_guest");
            exit(1);
        }
        *ion_guest_counter = 0;
    } else
        temp = realloc(arrAllGuests, sizeof(char *) * (*ion_guest_counter + 1));

    if (temp == NULL) {
        printf("failed at add_guest");
        exit(1);
    }
    arrAllGuests = temp;

    copy_string(&arrAllGuests[*ion_guest_counter], szName);
    (*ion_guest_counter)++;

    return arrAllGuests;
}

char **cancel_guest(char **arrAllGuests, int *ion_guest_counter, char *szName) {
    char **p = arrAllGuests;

    while (strcmp(*p, szName) != 0 || p - arrAllGuests > *ion_guest_counter) p++;


    free(*p);


    char **temp = realloc(arrAllGuests, sizeof(char *) * (*ion_guest_counter - 1));
    if (temp == NULL && *ion_guest_counter > 1) {
        printf("failed at cancel_guest");
        exit(1);
    }
    (*ion_guest_counter)--;

    return temp;
}

char **cancel_all_guests(char **arrAllGuests, int *ion_guest) {
    free(arrAllGuests);
    *ion_guest = 0;
    return NULL;
}

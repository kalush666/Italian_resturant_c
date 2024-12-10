#ifndef MODEL_H
#define MODEL_H
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *mem_copy(char *firststring, const char *secondstring, size_t len);

void copy_string(char **firststring, const char *secondString);

char **add_guest(char **arrAllGuests, int *ion_guest_counter, char *szName);

char **cancel_guest(char **arrAllGuests, int *ion_guest_counter, char *szName);

char **cancel_all_guests(char **arrAllGuests, int *ion_guest);
#endif

#include <stdio.h>
#include "function.h"

// Function to add radio stations to the array
void addRadioStations(struct RadioStation *radioStationsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Radio Station %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", radioStationsArray[i].name); // Assuming name does not contain spaces
        printf("Dialect: ");
        scanf("%s", radioStationsArray[i].dialect); // Assuming dialect does not contain spaces
        printf("Frequency (in MHz): ");
        scanf("%f", &radioStationsArray[i].frequency);
        printf("Location: ");
        scanf("%s", radioStationsArray[i].location); // Assuming location does not contain spaces
        printf("CAK Code: ");
        scanf("%s", radioStationsArray[i].cakCode); // Assuming cakCode does not contain spaces
    }
}

// Function to print the structure elements
void printRadioStations(struct RadioStation *radioStationsArray, int arraySize) {
    printf("\nRadio Station Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Radio Station %d:\n", i + 1);
        printf("Name: %s\n", radioStationsArray[i].name);
        printf("Dialect: %s\n", radioStationsArray[i].dialect);
        printf("Frequency: %.2f MHz\n", radioStationsArray[i].frequency);
        printf("Location: %s\n", radioStationsArray[i].location);
        printf("CAK Code: %s\n", radioStationsArray[i].cakCode);
    }
}


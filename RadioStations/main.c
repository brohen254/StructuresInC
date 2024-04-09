#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 8;
    struct RadioStation radioStations[arraySize];

    // Add radio stations to the array
    addRadioStations(radioStations, arraySize);

    // Print the structure elements
    printRadioStations(radioStations, arraySize);

    return 0;
}


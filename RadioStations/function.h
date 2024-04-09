#ifndef FUNCTION_H
#define FUNCTION_H

struct RadioStation {
    char name[100];
    char dialect[100];
    float frequency;
    char location[100];
    char cakCode[20];
};

void addRadioStations(struct RadioStation *radioStationsArray, int arraySize);
void printRadioStations(struct RadioStation *radioStationsArray, int arraySize);

#endif


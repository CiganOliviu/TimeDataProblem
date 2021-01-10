#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "TimeDataProblem.h"

struct TimeDataStructure {

    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;
    int differenceWithFirstTime;

} TimeDataStructure;

struct TimeDataStructure * AllocMemoryForTime(unsigned int memorySize) {

    assert(memorySize >= 0);

    return (struct TimeDataStructure *) malloc(memorySize * sizeof(struct TimeDataStructure));
}

bool HoursAreValid(const struct TimeDataStructure *Time, int it) { return Time[it].hours > 59; }

bool MinutesAreValid(const struct TimeDataStructure *Time, int it) { return Time[it].minutes > 59; }

bool SecondsAreValid(const struct TimeDataStructure *Time, int it) { return Time[it].seconds > 59; }

int AreTimesValid(unsigned int numberOfTimes, struct TimeDataStructure * Time) {

    assert(numberOfTimes >= 0);

    for (int it = 0; it < numberOfTimes; ++it) {

        if (HoursAreValid(Time, it)) return FALSE;
        if (MinutesAreValid(Time, it)) return FALSE;
        if (SecondsAreValid(Time, it)) return FALSE;
    }

    return TRUE;
}

unsigned int GetNumberOfTimesFromFile(FILE * file) {

    unsigned int numberOfTimes;
    fscanf(file, "%u", &numberOfTimes);

    return numberOfTimes;
}

void ValidateFile(FILE * file) {

    if (file == NULL)
        EXIT_FAILURE;
}

FILE * GetOpenFile() {

    FILE * file = fopen(STANDARD_INPUT_FILE, STANDARD_READING_FILE_MODE);
    ValidateFile(file);

    return file;
}

void ReadFieldByFieldFromFile(FILE * file, struct TimeDataStructure * Times, int it) {

    fscanf(file, "%u%*c", &(Times + it)->hours);
    fscanf(file, "%u%*c", &(Times + it)->minutes);
    fscanf(file, "%u%*c", &(Times + it)->seconds);
}

struct TimeDataStructure * GetTimesFromFile(FILE * file, unsigned int numberOfTimes) {

    assert(numberOfTimes >= 0);

    struct TimeDataStructure * Times = AllocMemoryForTime(numberOfTimes);

    for (int it = 0; it < numberOfTimes; ++it)
        ReadFieldByFieldFromFile(file, Times, it);

    return Times;
}

void PutsTimesFieldByField(const struct TimeDataStructure *Time, int it) {

    printf("%u:", Time[it].hours);
    printf("%u:", Time[it].minutes);
    printf("%u", Time[it].seconds);

    INSERT_NEWLINE;
}

void OutputTimesFromFile(unsigned int numberOfTimes, struct TimeDataStructure * Times) {

    assert(numberOfTimes >= 0);

    assert(AreTimesValid(numberOfTimes, Times));

    for (int it = 0; it < numberOfTimes; ++it)
        PutsTimesFieldByField(Times, it);
}

void PutsTimesWithDifferenceField(const struct TimeDataStructure * Time, int it) {

    printf("%u:", Time[it].hours);
    printf("%u:", Time[it].minutes);
    printf("%u ", Time[it].seconds);
    printf("%d", Time[it].differenceWithFirstTime);

    INSERT_NEWLINE;
}

void OutputTimesWithSpecialField(unsigned int numberOfTimes, struct TimeDataStructure * Times) {

    assert(numberOfTimes >= 0);

    assert(AreTimesValid(numberOfTimes, Times));

    for (int it = 0; it < numberOfTimes; ++it)
        PutsTimesWithDifferenceField(Times, it);
}

void PutsTimeFieldByFieldInFile(const struct TimeDataStructure * Time, FILE * file, int it) {

    fprintf(file, "%u:", Time[it].hours);
    fprintf(file, "%u:", Time[it].minutes);
    fprintf(file, "%u ", Time[it].seconds);
    fprintf(file, "%d \n", Time[it].differenceWithFirstTime);
}

void OutputTimesInFile(unsigned int numberOfTimes, struct TimeDataStructure * Times) {

    assert(numberOfTimes >= 0);
    assert(AreTimesValid(numberOfTimes, Times));

    FILE * file = fopen(STANDARD_OUTPUT_FILE, STANDARD_WRITING_FILE_MODE);

    for (int it = 0; it < numberOfTimes; ++it)
        PutsTimeFieldByFieldInFile(Times, file, it);

    fclose(file);
}

int CalculateTimeInSeconds(struct TimeDataStructure Time) {

    int result;

    result = Time.hours * 3600 + Time.minutes * 60 + Time.seconds;

    return result;
}

void CalculateSpecialField(unsigned int numberOfTimes, struct TimeDataStructure * Times) {

    for (int it = 0; it < numberOfTimes; ++it)
        Times[it].differenceWithFirstTime = CalculateTimeInSeconds(Times[0]) - CalculateTimeInSeconds(Times[it]);
}

void SwapTimes(struct TimeDataStructure * TimeStructureOne, struct TimeDataStructure * TimeStructureTwo) {

    struct TimeDataStructure * AuxTimeStructure = AllocMemoryForTime(STANDARD_SIZE);

    * AuxTimeStructure = * TimeStructureOne;
    * TimeStructureOne = * TimeStructureTwo;
    * TimeStructureTwo = * AuxTimeStructure;
}

void SortTimesViaBubbleSort(unsigned int numberOfTimes, struct TimeDataStructure * Times) {

    for (int it = 0; it < numberOfTimes; ++it)
        for (int jit = it; jit < numberOfTimes; ++jit)
            if (Times[it].differenceWithFirstTime < Times[jit].differenceWithFirstTime)
                SwapTimes(&Times[it], &Times[jit]);
}

int main() {

    FILE * file = GetOpenFile();

    unsigned int numberOfTimes = GetNumberOfTimesFromFile(file);

    struct TimeDataStructure * Times = GetTimesFromFile(file, numberOfTimes);

    OutputTimesFromFile(numberOfTimes, Times);

    INSERT_NEWLINE;

    CalculateSpecialField(numberOfTimes, Times);

    OutputTimesWithSpecialField(numberOfTimes, Times);

    INSERT_NEWLINE;

    SortTimesViaBubbleSort(numberOfTimes, Times);

    OutputTimesWithSpecialField(numberOfTimes, Times);

    OutputTimesInFile(numberOfTimes, Times);

    return 0;
}

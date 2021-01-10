//
// Created by cigan on 10.01.2021.
//

#ifndef TIMEDATAPROBLEM_TIMEDATAPROBLEM_H
#define TIMEDATAPROBLEM_TIMEDATAPROBLEM_H

#ifndef STANDARD_INPUT_FILE
#define STANDARD_INPUT_FILE "DataSource/DataIn/data.in"
#endif

#ifndef STANDARD_READING_FILE_MODE
#define STANDARD_READING_FILE_MODE "r"
#endif

#ifndef STANDARD_OUTPUT_FILE
#define STANDARD_OUTPUT_FILE "DataSource/DataOut/data.out"
#endif

#ifndef STANDARD_WRITING_FILE_MODE
#define STANDARD_WRITING_FILE_MODE "w"
#endif

#ifndef INSERT_NEWLINE
#define INSERT_NEWLINE printf("\n")
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef STANDARD_SIZE
#define STANDARD_SIZE 100
#endif

struct TimeDataStructure;

struct TimeDataStructure * AllocMemoryForTime(unsigned int memorySize);

bool HoursAreValid(const struct TimeDataStructure *Time, int it);

bool MinutesAreValid(const struct TimeDataStructure *Time, int it);

bool SecondsAreValid(const struct TimeDataStructure *Time, int it);

int AreTimesValid(unsigned int numberOfTimes, struct TimeDataStructure * Time);

unsigned int GetNumberOfTimesFromFile(FILE * file);

void ValidateFile(FILE * file);

FILE * GetOpenFile();

void ReadFieldByFieldFromFile(FILE * file, struct TimeDataStructure * Times, int it);

struct TimeDataStructure * GetTimesFromFile(FILE * file, unsigned int numberOfTimes);

void PutsTimesFieldByField(const struct TimeDataStructure *Time, int it);

void OutputTimesFromFile(unsigned int numberOfTimes, struct TimeDataStructure * Times);

void PutsTimesWithDifferenceField(const struct TimeDataStructure * Time, int it);

void OutputTimesWithSpecialField(unsigned int numberOfTimes, struct TimeDataStructure * Times);

void PutsTimeFieldByFieldInFile(const struct TimeDataStructure * Time, FILE * file, int it);

void OutputTimesInFile(unsigned int numberOfTimes, struct TimeDataStructure * Times);

int CalculateTimeInSeconds(struct TimeDataStructure Time);

void CalculateSpecialField(unsigned int numberOfTimes, struct TimeDataStructure * Times);

void SwapTimes(struct TimeDataStructure * TimeStructureOne, struct TimeDataStructure * TimeStructureTwo);

void SortTimesViaBubbleSort(unsigned int numberOfTimes, struct TimeDataStructure * Times);

#endif
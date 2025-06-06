#ifndef VALIDATION
#define VALIDATION

#define NO_VALIDATION_ERROR 0
#define IS_STRING_ERROR 1
#define IS_REQUIRED_ERROR 2
#define IS_POSITIVE_ERROR 3
#define IS_EMAIL_ERROR 4
#define IS_TELEPHONE_ERROR 5
#define IS_CPF_ERROR 6
#define IS_CNA_ERROR 7
#define IS_DATE_ERROR 8
#define IS_NUMBER_ERROR 9
#define IS_HOUR_ERROR 10

#include <stdbool.h>

bool isString(const char*);

bool isStringWithNumbers(const char*);

bool isEmpty(const char*);

bool isRequired(const char*);

bool isPositive(int);

bool isEmail(const char*);

bool isDDD(const char*);

bool isTelephone(const char*);

bool isCpfValid(const char*);

bool isCpf(const char*);

bool isCna(const char*);

bool isLeapYear(int);

int maxDaysInMonth(int, int);

bool isDay(int, int, int);

bool isMonth(int);

bool isYear(int);

bool isDate(const char*);

bool isNumber(const char*);

bool isHour(const char*);

int validateHour(const char*);

int validateString(const char*);

int validateisStringWithNumbers(const char*);

int validateRequired(const char*);

int validateEmail(const char*);

int validateTelephone(const char*);

int validateCpf(const char*);

int validateCna(const char*);

int validateDate(const char*);

int validatePositive(const char*);

int validateNumber(const char*);

#endif
#include "unity_fixture.h"
#include <stdio.h>
#include <string.h>

char * convertArabicToRoman(int arabic) {
    char *result = malloc(100);
    strcpy(result, "");

    int VALUES[] = {5, 4, 1};
    char *SYMBOLS[] = {"V", "IV", "I"};
    int VALUES_SIZE = sizeof(VALUES)/sizeof(VALUES[0]);
    int i, v;

    for (v=0; v<VALUES_SIZE; v++) {
        if (arabic >= VALUES[v]) {
            strcat(result, SYMBOLS[v]);
            arabic = arabic-VALUES[v];
        }
    }

    // for (i=0; i<arabic; i++) {
    //     strcat(result, "I");
    // }    
    return result;
}

TEST_GROUP(RomanNumerals);

TEST_SETUP(RomanNumerals)
{    
}

TEST_TEAR_DOWN(RomanNumerals)
{
}

TEST(RomanNumerals, converts)
{
    TEST_ASSERT_EQUAL_STRING("I", convertArabicToRoman(1));
    TEST_ASSERT_EQUAL_STRING("II", convertArabicToRoman(2));
    TEST_ASSERT_EQUAL_STRING("III", convertArabicToRoman(3));
    TEST_ASSERT_EQUAL_STRING("IV", convertArabicToRoman(4));
    TEST_ASSERT_EQUAL_STRING("V", convertArabicToRoman(5));
    TEST_ASSERT_EQUAL_STRING("VI", convertArabicToRoman(6));
}

TEST_GROUP_RUNNER(RomanNumerals)
{
    RUN_TEST_CASE(RomanNumerals, converts);
}


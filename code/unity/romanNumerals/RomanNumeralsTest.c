#include "unity_fixture.h"

char * convertArabicToRoman(int arabic) {
    return "I";
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
    char* roman = convertArabicToRoman(1);
    TEST_ASSERT_EQUAL_STRING("I", roman);
}

TEST_GROUP_RUNNER(RomanNumerals)
{
    RUN_TEST_CASE(RomanNumerals, converts);
}


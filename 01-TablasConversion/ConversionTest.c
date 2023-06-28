#include <stdio.h>
#include <CUnit/CUnit.h>
#include "Conversion.h"


int main()
{
    CU_ASSERT_EQUAL(Celsius(300), 148.9);
    CU_ASSERT_EQUAL(Celsius(280), 137.8);
    CU_ASSERT_EQUAL(Celsius(260), 126.7);
    CU_ASSERT_EQUAL(Celsius(240), 115.6);

    return 0;
}


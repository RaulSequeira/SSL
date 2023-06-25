#include <stdio.h>
#include "Conversion.h"

int main(void) {
    const int LOWER = 0;    // lower limit of table
    const int UPPER = 300;  // upper limit
    const int STEP = 20;    // step size
 
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, Celsius(fahr));
    }
 
    return 0;
}


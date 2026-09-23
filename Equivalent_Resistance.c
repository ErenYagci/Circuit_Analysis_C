#include <stdio.h>

// Equivalent Resistance: Series and Parallel
int main() {
    double r1 = 6.0;
    double r2 = 3.0; 

    double r_series = r1 + r2;
    double r_parallel = (r1 * r2) / (r1 + r2);

    printf("--- Equivalent Resistance Calculation ---\n");
    printf("R1: %.1f Ohm, R2: %.1f Ohm\n", r1, r2);
    printf("Series Connection (Req): %.2f Ohm\n", r_series);
    printf("Parallel Connection (Req): %.2f Ohm\n", r_parallel);

    return 0;
}
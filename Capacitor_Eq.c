#include <stdio.h>

// Equivalent Capacitance: Series and Parallel
int main() {
    double c1 = 10.0;
    double c2 = 20.0; 

    //Ceq = C1 + C2
    double c_parallel = c1 + c2;

    //(C1 * C2) / (C1 + C2)
    double c_series = (c1 * c2) / (c1 + c2);

    printf("--- Equivalent Capacitance Calculation ---\n");
    printf("C1: %.1f uF, C2: %.1f uF\n", c1, c2);
    printf("Parallel Connection (Ceq): %.2f uF\n", c_parallel);
    printf("Series Connection (Ceq): %.2f uF\n", c_series);

    return 0;
}
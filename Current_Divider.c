#include <stdio.h>

// Current Divider: I1 = I_total * (R2 / (R1 + R2))
int main() {
    double i_total = 6.0; 
    double r1 = 10.0;    
    double r2 = 20.0;   

    double i1 = i_total * (r2 / (r1 + r2)); // 

    printf("--- Current Divider Calculation ---\n");
    printf("Total Current: %.2f A\n", i_total);
    printf("R1: %.1f Ohm, R2: %.1f Ohm\n", r1, r2);
    printf("Current passing through R1 (I1): %.2f A\n", i1);

    return 0;
}
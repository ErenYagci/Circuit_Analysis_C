#include <stdio.h>

// Electric Power: P = V * I = I^2 * R
int main() {
    double voltage = 12.0;   
    double resistance = 4.0; 

    double current = voltage / resistance;
    double power = voltage * current; 

    printf("Electric Power Calculation\n");
    printf("Voltage: %.2f V, Resistance: %.2f Ohm\n", voltage, resistance);
    printf("Drawn Current: %.2f A\n", current);
    printf("Dissipated Power (P = V * I): %.2f W\n", power);

    return 0;
}
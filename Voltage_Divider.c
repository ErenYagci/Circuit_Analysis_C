#include <stdio.h>

// Voltage Divider: V_out = V_in * (R2 / (R1 + R2))
int main() {
    double v_in = 15.0; // Input Voltage [V]
    double r1 = 1000.0; // Resistor 1 [Ohm]
    double r2 = 2000.0; // Resistor 2 [Ohm]

    double v_out = v_in * (r2 / (r1 + r2));

    printf("--- Voltage Divider Calculation ---\n");
    printf("Input Voltage: %.2f V\n", v_in);
    printf("R1: %.1f Ohm, R2: %.1f Ohm\n", r1, r2);
    printf("Output Voltage across R2 (V_out): %.2f V\n", v_out);

    return 0;
}
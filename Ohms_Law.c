#include <stdio.h>

// Ohm's Law: V = I * R
int main() {
    double current = 2.5;     // Current [A]
    double resistance = 10.0; // Resistance [Ohm]
    
    double voltage = current * resistance; // Voltage [V]

    printf("--- Ohm's Law Calculation ---\n");
    printf("Current: %.2f A\n", current);
    printf("Resistance: %.2f Ohm\n", resistance);
    printf("Voltage (V = I * R): %.2f V\n", voltage);

    return 0;
}
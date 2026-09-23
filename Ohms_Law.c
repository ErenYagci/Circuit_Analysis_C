#include <stdio.h>

// Ohm's Law: V = I * R
int main() {
    double current = 2.5; 
    double resistance = 10.0; 
    
    double voltage = current * resistance; 

    printf("--- Ohm's Law Calculation ---\n");
    printf("Current: %.2f A\n", current);
    printf("Resistance: %.2f Ohm\n", resistance);
    printf("Voltage (V = I * R): %.2f V\n", voltage);

    return 0;
}
#include <stdio.h>

void calculateVoltage();  // ฟังก์ชันคำนวณแรงดันไฟฟ้า
void calculateCurrent();  // ฟังก์ชันคำนวณกระแสไฟฟ้า
void calculateResistance();  // ฟังก์ชันคำนวณความต้านทาน

int main() {
    int choice;

    printf("=== Electric Calculator ===\n");
    printf("1. Calculate Voltage (V)\n");
    printf("2. Calculate Current (I)\n");
    printf("3. Calculate Resistance (R)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calculateVoltage();
            break;
        case 2:
            calculateCurrent();
            break;
        case 3:
            calculateResistance();
            break;
        default:
            printf("Invalid choice. Please run the program again.\n");
    }

    return 0;
}

void calculateVoltage() {
    float current, resistance, voltage;

    printf("\n=== Calculate Voltage (V) ===\n");
    printf("Enter current (I) in amperes: ");
    scanf("%f", &current);
    printf("Enter resistance (R) in ohms: ");
    scanf("%f", &resistance);

    voltage = current * resistance;
    printf("Voltage (V) = %.2f volts\n", voltage);
}

void calculateCurrent() {
    float voltage, resistance, current;

    printf("\n=== Calculate Current (I) ===\n");
    printf("Enter voltage (V) in volts: ");
    scanf("%f", &voltage);
    printf("Enter resistance (R) in ohms: ");
    scanf("%f", &resistance);

    if (resistance == 0) {
        printf("Error: Resistance cannot be zero.\n");
        return;
    }

    current = voltage / resistance;
    printf("Current (I) = %.2f amperes\n", current);
}

void calculateResistance() {
    float voltage, current, resistance;

    printf("\n=== Calculate Resistance (R) ===\n");
    printf("Enter voltage (V) in volts: ");
    scanf("%f", &voltage);
    printf("Enter current (I) in amperes: ");
    scanf("%f", &current);

    if (current == 0) {
        printf("Error: Current cannot be zero.\n");
        return;
    }

    resistance = voltage / current;
    printf("Resistance (R) = %.2f ohms\n", resistance);
}

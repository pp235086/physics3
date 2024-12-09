#include <stdio.h>

int main() {
    float power, hours, rate, energy, cost;

    // รับค่ากำลังไฟฟ้า (วัตต์)
    printf("Enter power consumption in watts: ");
    scanf("%f", &power);

    // รับค่าเวลาที่ใช้งาน (ชั่วโมง)
    printf("Enter hours of usage: ");
    scanf("%f", &hours);

    // รับอัตราค่าไฟฟ้าต่อหน่วย (บาทต่อ kWh)
    printf("Enter electricity rate (baht per kWh): ");
    scanf("%f", &rate);

    // แปลงกำลังไฟฟ้าจากวัตต์เป็นกิโลวัตต์
    power = power / 1000;

    // คำนวณพลังงานไฟฟ้า (kWh)
    energy = power * hours;

    // คำนวณค่าไฟฟ้า
    cost = energy * rate;

    // แสดงผลลัพธ์
    printf("Energy consumed: %.2f kWh\n", energy);
    printf("Total electricity cost: %.2f baht\n", cost);

    return 0;
}

#include <stdio.h>

int main() {
    int numbers[14], count = 0;
    int valid_numbers[] = {150, 1000, 10000};
    printf("Введіть 14 натуральних чисел:\n");
    for (int i = 0; i < 14; i++) {
        scanf("%d", &numbers[i]);
        for (int j = 0; j < 3; j++) {
            if (numbers[i] == valid_numbers[j]) {
                count++;
                break;
            }
        }
    }
    printf("Кількість чисел, рівних 150, 1000 або 10000: %d\n", count);
    return 0;
}
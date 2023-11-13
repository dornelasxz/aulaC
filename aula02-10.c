#include <stdio.h>

void processWindow(int values[], int size) {
    int new_size = (size + 1) / 2;
    for (int i = 0; i < new_size; i++) {
        values[i] = values[i * 2] + values[i * 2 + 1];
    }
}

int main() {
    int input_values[10];
    
    // Ler os valores de entrada
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input_values[i]);
    }

    int size = 10;
    for (int i = 0; i < 10; i++) {
        printf("%d", input_values[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    while (size > 1) {
        processWindow(input_values, size);
        for (int i = 0; i < size; i++) {
            printf("%d", input_values[i]);
            if (i < size - 1) {
                printf(" ");
            }
        }
        printf("\n");
        size = (size + 1) / 2;
    }

    return 0;
}

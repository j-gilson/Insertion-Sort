#include <stdio.h>

// Função para ordenar um array usando Insertion Sort
void sort(int array[], int size) {
    for (int p = 0; p < size; p++) {
        int current_element = array[p];
        int j = p;
        
        while (j > 0 && array[j - 1] > current_element) {
            array[j] = array[j - 1];
            j--;
        }
        
        array[j] = current_element;
    }
}

// Função para imprimir um array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("Array original: \n");
    printArray(array, size);
    
    sort(array, size);
    
    printf("Array ordenado: \n");
    printArray(array, size);
    
    return 0;
}

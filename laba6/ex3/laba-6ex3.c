
//Номер тактики: 1 (статический массив)
#include <stdio.h>

void print(int numArray[], int size);
void insert(int numArray[], int size, int numInput);
void append(int numArray[], int size, int numInput);

int main() {

    int size;
    int elem;
    int numInput;
    int numFun;



    printf("Введите размер массива: \n");
    scanf("%d", &size);
    
    printf("Введите количество элементов: \n");
    scanf("%d", &elem);

    if (elem > size) {
        printf("Ошибка! Кол-во элементов превосходит размер массива. \n");
        return 0;
    }
    
    int numArray[size];

    int k;

    for (k = 0; k < size; k++) {
        if (k < elem) {
            numArray[k] = k;
        } else if (k >= elem) {
            numArray[k] = 0;
        }
    }   

    printf("append:\n\n");
    
    printf("Добавляем 23\n");
    append(numArray, size, 3);
    
    printf("Добавляем 25\n");
    append(numArray, size, 5);
    
    printf("Добавляем 27\n");
    append(numArray, size, 7);
    
    printf("Добавляем 35\n");
    append(numArray, size, 12);
    
    printf("Добавляем 45\n");
    append(numArray, size, 24);

    printf("insert:\n\n");
    
    printf("Добавляем 23\n");
    insert(numArray, size, 3);
    
    printf("Добавляем 25\n");
    insert(numArray, size, 5);
    
    printf("Добавляем 27\n");
    insert(numArray, size, 7);
    
    printf("Добавляем 35\n");
    insert(numArray, size, 12);
    
    printf("Добавляем 45\n");
    insert(numArray, size, 24);

    return 0;
}

void print(int numArray[], int size) {
    int j;

    printf("{");
    for (j = 0; j < size; j++) {
        if (j == size - 1) {
            printf("%d}\n\n", numArray[j]);
            break;
        }
        printf("%d, ", numArray[j]);
    }
}

void insert(int numArray[], int size, int numInput) {
    numArray[size/2] = numInput;
    print(numArray, size);
}
    
void append(int numArray[], int size, int numInput) {
    numArray[size - 1] = numInput;
    print(numArray, size);
}
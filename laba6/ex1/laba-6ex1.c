#include <stdio.h> 

int max (char sym, char array[], int len) {

    int x = 0;
    int a = 0; 

    for (int i = 0; i<len; i++) {
        if (array[i] == sym) {
            x++;
        }
        if (array[i] != sym) {
            if (x != 0) {
                if (x > a) {
                    a = x;
                    x = 0;
                }
                if (x <= a) {
                    x = 0;
                }
            }
        }

    }
    return a; 
}

int main() {
    char sym;
    char array[9] = {'h', 'e', 'l', 'l', 'o', 'l', 'l', 'l', '\0'};
    int len = sizeof(array)/sizeof(array[0]);        //длина массива 
    printf ("введите символ: \n");
    scanf ("%c", &sym); 

    int resultat = max (sym, array, len);

    if (resultat == 0) {
        printf ("здесь нет данного символа ");
    }
    else {
        printf ("%d", resultat);
    }

    return 0;
}

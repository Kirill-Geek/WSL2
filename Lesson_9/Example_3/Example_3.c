#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>

int recurs_power(int n, int p) {
    static int result = 1;
    if (n < -100 || n > 100 || p < 0 || p > 100) {
        printf("ALERT! Available range: n ∈ [-100; 100] and p ∈ [0, 100]\n");
        return 0;
    }
    if (p == 0) {
        int res = result;
        result = 1;
        return res;
    }
    result *= n;
    recurs_power(n, --p);
}

void readOnlyDigits(char *string, int *digitsArr) {
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    while ( string[i++] != '\0') {
        if (string[i] >= '0' && string[i] <= '9') {
            flag = 1;
            digitsArr[j] = digitsArr[j] * recurs_power(10, k++) + string[i] - '0';
        } else if (flag) {
            j++;
            flag = 0;
            k = 0;
        }
    }
}
int comparator(const void * x1, const void * x2) {
    return *(int *)x1 - *(int *)x2;
}
void readString(FILE *file, char *string) {
    fseek(file, 0, SEEK_SET);
    char ch;
    uint16_t i = 0;
    while ( (ch = fgetc(file)) != EOF )
        string[i++] = ch;
    string[i] = '\0';
} 
int countDigits(char *string) {
    int i = 0;
    int flag = 0;
    uint16_t number_counter;
    while ( string[i++] != '\0') {
        if (string[i] >= '0' && string[i] <= '9') {
            flag = 1;
        } else if (flag) {
            number_counter++;
            flag = 0;
        }
    }
    return number_counter;
}

void fillArrayByZeroes(int* arr, uint16_t size) {
    for (uint16_t i = 0; i < size; i++)
        arr[i] = 0;
}

void task03() {
    FILE *in = fopen("in.txt", "r");
    FILE *out = fopen("out.txt", "w+");
    int size_string = 1000;
    char string[size_string];
    readString(in, string);
    fclose(in);
    const int SIZE = countDigits(string); //подсчет числе в строке
    int digits[SIZE];
    fillArrayByZeroes(digits, SIZE);

    readOnlyDigits(string, digits);
    qsort(digits, SIZE, sizeof(int), comparator);
    for (int i = 0; i < SIZE; i++)
        fprintf(out, "%d ", digits[i]);

    fclose(out);
}

int main (void)
{
    
    task03();
    return 0;
}





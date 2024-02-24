#include <stdio.h>
#include <string.h>

void countAllSymbols(FILE *file, int *countArray) {
    char ch;
    while ( (ch = fgetc(file)) != EOF )
        if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
            countArray[ch - 'A']++;
}

void task04(void) {
    FILE *in = fopen("in.txt", "r");
    FILE *out = fopen("out.txt", "w");
    enum size {ALPHABET_SIZE = 58};
    int count_array[ALPHABET_SIZE] = {0};
    countAllSymbols(in, count_array);
    
    char ch;
    fseek(in, 0, SEEK_SET);
    while ( (ch = fgetc(in)) != EOF ) {
        if (ch != ' ') {
            if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) {
                
                if (count_array[ch - 'A'] != 0) {
                    fputc(ch, out);
                    count_array[ch - 'A'] = 0;
                }
            }
        }
    }
    
    fclose(in);
    fclose(out);
}

int main (void)
{

    task04();
    return 0;
}
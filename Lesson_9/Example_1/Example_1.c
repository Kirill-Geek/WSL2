#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>

void task01(void) {
    FILE *in = fopen("in.txt", "r+");
    enum size {ALPHABET_SIZE = 26};
    char founded_symbols[100];
    uint8_t count_first[ALPHABET_SIZE] = {0};
    uint8_t count_second[ALPHABET_SIZE] = {0};

    char ch;
    while ( (ch = fgetc(in)) != ' ')
    {
        count_first[ch - 'a']++;
    }
    while ( (ch = fgetc(in)) != EOF)
    {
        count_second[ch - 'a']++;
    }
    
    fclose(in);
    
    
    FILE *out = fopen("out.txt", "w");
    for (uint8_t i = 0; i < ALPHABET_SIZE - 1; i++)
    {
        if (count_first[i] == 1 && count_second[i] == 1) 
        {
            fputc(i + 'a', out);
        }
    }    
    fclose(out);
}


int main(void)
{
    task01();
    return 0;
}

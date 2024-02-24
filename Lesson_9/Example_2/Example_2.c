#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 1000


void output(char *str)
{
    FILE *in = fopen("input.txt", "r+");
    FILE *out = fopen("output.txt", "w");
    int len = strlen(str);
    char ch;
    while ( (ch = fgetc(in)) != EOF ) {
        switch (ch)
        {
        case 'b':
            fputc('a', out);
            break;
        case 'a':
            fputc('b', out);
            break;
        case 'A':
            fputc('B', out);
            break;
        case 'B':
            fputc('A', out);
            break;
        default:
            fputc(ch, out);
            break;
        }
    }
    fclose(in);
    fclose(out);
}
int main(void)
{
    char stringFile[MAXELEMENTS];
    output(stringFile);
    return 0;
}
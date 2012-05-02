#include <stdio.h>

int main()
{
    int iNumber = 0;
    char* sWords = "hellow world\n";
    int iMonth, iDate, iYear;
    char buffer[256];
    char cBuf;

    // Output functions
    printf("use printf will write to stdout by default\n");
    fprintf(stdout, "%d: %s", iNumber, sWords);
    fputs(sWords, stdout);
    fputc(sWords[0], stdout);
    fprintf(stdout, "\n");
    fprintf(stdout, "this is the last line of output function demo\n");

    // Input functions
    fscanf(stdin, "%d-%d-%d,", &iMonth, &iDate, &iYear);
    cBuf = fgetc(stdin);
    fgets(buffer, 5, stdin);

    printf("%d/%d/%d\n", iDate, iMonth, iYear);
    printf("%c\n", cBuf);
    printf("%s\n", buffer);
    return 0;
}

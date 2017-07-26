#include <stdio.h>
#include <mem.h>
#include "test_file.h"

void test_file() {
    FILE *pf;
    char *string = "this is a apple.";
    char buffer[16];

    pf = fopen("file.txt", "w+");
    fwrite(string, strlen(string) + 1, 1, pf);

    fseek(pf, 0, SEEK_SET);
    fread(buffer, strlen(string) + 1, 1, pf);
    printf("%s", buffer);
    fclose(pf);
}

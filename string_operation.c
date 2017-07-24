#include <mem.h>
#include <stdio.h>
#include "string_operation.h"

void pointer_string() {
    char str1[5] = "123";
    char *str2 = "_456";

    str1[3] = 'A';
    //str1[4] = 'b';

    strcat(str1, str2);
    printf("%d\n", strlen(str1));
    printf("%d\n", sizeof(str1));
    printf("%s", str1);
}

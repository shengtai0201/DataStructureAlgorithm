#include <stdio.h>
#include "my_search.h"

int binary_search(const short *sorted_data, int size, int search) {
    int index = size / 2;

    if(sorted_data[index] == search)
        return 1;
    else if (sorted_data[index] < search) {
        if (index == 0)
            return 0;

        return binary_search(sorted_data + (index - 1), index, search);
    } else {
        if (index == 0)
            return 0;

        return binary_search(sorted_data, index, search);
    }
}

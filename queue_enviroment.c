#include "queue_enviroment.h"
#include "queue2.h"

void producer() {
    static ch = 'Z';
    ch = (ch < 'Z') ? (ch + 1) : 'A';

    enqueue2(ch);
    print_queue();
}

void consumer() {
    char ch;
    dequeue2(&ch);
    print_queue();
}
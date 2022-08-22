// $ # in root of project 
// $ cc -c src/num.c
// $ cc -shared num.o -o libnum.so

#include <stdio.h>
#include <stdint.h>
#include <num_ext.h>

void print_num(uint32_t num) {
    printf("Hello Denys! [ c ] num is %d", double_num(num));
}
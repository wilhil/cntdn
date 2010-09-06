/* Header for numbers.c

   James Stanley 2010 */

#ifndef NUMBERS_H_INC
#define NUMBERS_H_INC

#include <stdlib.h>
#include <stdio.h>

typedef struct Number {
  struct Number *next, *prev;
  int val;
} Number;

extern int number[6];
extern int target;

int solve(void);
void print_vals(void);

#endif

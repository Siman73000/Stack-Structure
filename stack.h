#ifndef STACK_H
#define STACK_H
#include "boolean.h"
typedef struct stacknode {
	int data;
	struct stacknode *next;
} *stack;

void init_stack(stack *);
void push(stack *, int);
int pop(stack *);
void list_stack(stack);
boolean is_empty(stack);
boolean is_full(void);

#endif

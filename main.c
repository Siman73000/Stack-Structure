/* Simon Hamilton	0287046
   Data Structures
   Module 2: Abstract Data Types
   Create a program that will allow
   for push, pop, list, and quit functions
   utalizing a stack to do so.
   Input src:	stdin
   Output src:	stdout
*/

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "stack.h"


int main(void) {

	boolean quit = FALSE;
	int menu_sel, data_item, pop_var;
	stack top;
	init_stack(&top);

	while (!quit) {
		printf("1: Push\n");
		printf("2: Pop\n");
		printf("3: List\n");
		printf("4: Quit\n");
		scanf("%d", &menu_sel);		

		switch (menu_sel) {
			case 1:
				if (!is_full()) {
					printf("Enter a number to Push: ");
					scanf("%d", &data_item);
					push (&top, data_item);
				}
				else {
					printf("ERROR: stack is full\n");
				}
				break;
			case 2:
				if (is_empty(top)) {
					printf("stack is empty\n");
				}
				else {
					pop_var = pop(&top);
					printf("%d was removed\n", pop_var);
				}
				break;
			case 3:
				if (is_empty(top)) {
					printf("stack is empty\n");
				}
				else {
					printf("Current stack:\n");
					list_stack(top);
					printf("\n");
				}
				break;
			case 4:
				quit = TRUE;
				break;
			default: printf("ERROR: %d is an invalid selection\n", menu_sel);
		}
	}
}

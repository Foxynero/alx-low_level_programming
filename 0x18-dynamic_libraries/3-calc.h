#ifndef _CALC_H_
#define _CALC_H_

/**
 * struct op - Struct op
 * 
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int add(int a, int b);

int sub(int a, int b);

int mul(int a, int b);

int div(int a, int b);

int mod(int a, int b);

#endif

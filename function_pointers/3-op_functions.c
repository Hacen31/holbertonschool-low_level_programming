#include "3-calc.h" 

/** 
 * op_add - opérateur pour addition 
 * @a: premier int 
 * @b: second int 
 * Return: somme des deux nombres 
 */ 
int op_add(int a, int b) 
{ 
	return (a + b); 
} 

/** 
 * op_sub - opérateur de soustraction 
 * @a: premier int 
 * @b: second int 
 * Return: différence entre les deux nombres 
 */ 
int op_sub(int a, int b) 
{ 
	return (a - b); 
} 

/** 
 * op_mul - opérateur de multiplication 
 * @a: premier int 
 * @b: deuxieme int 
 * Return: produit des deux nombres 
 */ 
int op_mul(int a, int b) 
{ 
	return (a * b); 
} 

/** 
 * op_div - opérateur de division 
 * @a: premier int 
 * @b: second int 
 * Return: résultat de la division 
 */ 
int op_div(int a, int b) 
{ 
	if (b == 0) 
	{ 
		printf("Error\n"); 
		exit(100); 
	} 
	return (a / b); 
} 

/** 
 * op_mod - opérateur pour récupérer le reste d'une division 
 * @a: premier int 
 * @b: deuxieme int 
 * Return: reste de la division 
 */ 
int op_mod(int a, int b) 
{ 
	if (b == 0) 
	{ 
		printf("Error\n"); 
		exit(100); 
	} 
	return (a % b); 
}

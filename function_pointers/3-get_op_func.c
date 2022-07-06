#inclure « 3-calc.h »
#inclure <stdlib.h>

/*
 * get_op_func - sélectionne la fonction correcte à exécuter
 * l’opération demandée par l’utilisateur. Vous n’êtes pas autorisé
 * pour déclarer toute autre fonction.
 * @s : opérateur passé comme argument
 *
 * Retour : Pointeur vers la fonction correspondant à
 * l’opérateur donné en paramètre
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	tandis que (ops[i]. op != NULL && *(ops[i]. op) != *s)
		i++;

	retour (ops[i]. f);

}


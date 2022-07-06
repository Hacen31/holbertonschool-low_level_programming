#inclure « 3-calc.h »
#inclure <stdio.h>
#inclure <stdlib.h>

/*
 * main - Imprime le résultat d’opérations simples.
 * @argc : Nombre d’arguments fournis au programme.
 * @argv : Tableau de pointeurs vers les arguments.
 *
 * Retour: Toujours 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	si (argc != 4)
	{
		printf(« Erreur\n »);
		sortie(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf(« Erreur\n »);
		sortie(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf(« Erreur\n »);
		sortie(100);
	}
	printf(« %d\n », get_op_func(op)(num1, num2));
	retour (0);
}

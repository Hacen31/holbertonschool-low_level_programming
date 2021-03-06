void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nombre);
int     ft_strcmp(char *s1, char *s2);
int     ft_strlen(char *str);
void    ft_swap(int *a, int *b);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog my_dog;
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


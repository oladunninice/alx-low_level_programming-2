#ifndef DOG_H
#define DOG_H

/**
 * strucr dog - a dog basic info
 * @name: first member
 * @age: second member
 * @owner: owner of dog
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;
char *strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

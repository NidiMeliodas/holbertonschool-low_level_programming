#ifndef DOG_H
#define DOG_H

/*--------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Short description
 * @name: prenom
 * @age: l'age
 * @owner: proprio
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/*--------------------------------------------------------------------------*/
/* Liste des prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

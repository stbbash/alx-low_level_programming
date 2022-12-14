#ifndef _DOG_H_INCLUDED
#define _DOG_H_INCLUDED

/**
* struct dog - information about dogs
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/

struct dog
{
	char *name;

	float age;

	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *owner, float age, char *name);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

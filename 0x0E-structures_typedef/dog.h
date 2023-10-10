#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - represents the name age and owner
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

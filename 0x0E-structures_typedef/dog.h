#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
extern void init_dog(struct dog *d, char *name, float age, char *owner);
extern void print_dog(struct dog *d);
extern dog_t *new_dog(char *name, float age, char *owner);
extern void free_dog(dog_t *d);
#endif

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
extern void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

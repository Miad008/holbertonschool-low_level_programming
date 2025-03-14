#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to store dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

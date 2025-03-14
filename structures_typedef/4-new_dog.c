#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (dog_t), or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (!new_dog)
return (NULL);

new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (!new_dog->name)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (!new_dog->owner)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

strcpy(new_dog->name, name);
new_dog->age = age;
strcpy(new_dog->owner, owner);

return (new_dog);
}

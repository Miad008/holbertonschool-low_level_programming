#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int name_len, owner_len, i;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

for (name_len = 0; name[name_len]; name_len++)
;
for (owner_len = 0; owner[owner_len]; owner_len++)
;

dog->name = malloc(name_len + 1);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(owner_len + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

for (i = 0; i <= name_len; i++)
dog->name[i] = name[i];
for (i = 0; i <= owner_len; i++)
dog->owner[i] = owner[i];

dog->age = age;

return (dog);
}

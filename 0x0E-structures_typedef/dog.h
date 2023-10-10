#ifndef DOG_H
#define DOG_H



typedef struct dog dog_t;

/**
 * struct dog - Represents information about a dog.
 * @name: the dog's name.
 * @age: The age of the dog.
 * @owner: the owner's name.
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

#endif


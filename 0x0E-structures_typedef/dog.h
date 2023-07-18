#ifndef DOG_H
#define DOG_H

/**
 * sruct dog - a dog's basic info
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's onwer's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - typedef for struct dog
 * Return: success
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

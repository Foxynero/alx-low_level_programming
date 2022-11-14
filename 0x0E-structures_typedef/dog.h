#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: store different data types
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef dog_t - defines a new name for type struct dog
 */

typedef struct dog dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif

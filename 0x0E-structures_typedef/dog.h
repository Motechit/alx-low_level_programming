#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Is a dog's basic information
 * @name: The first member
 * @age: The second member
 * @owner: The third member
 * Description: longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - This is the typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif

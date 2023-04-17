#ifndef DOG_H
#define DOG_H

/**
 * struct dog - declare struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Struct containing dog's name, age and owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog__ - typedef of struct dog
 */
typedef struct dog dog__;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

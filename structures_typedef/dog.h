#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - First custom structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */

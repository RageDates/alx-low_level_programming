#ifndef HEADER_h
#define HEADER_h
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - description of a dog
 * @name: the name
 * @age: the age
 * @owner: the owner's name
 *
 * Description: Longer description
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};
#endif

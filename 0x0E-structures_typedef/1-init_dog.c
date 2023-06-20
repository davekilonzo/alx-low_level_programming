/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to the struct dog variable to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: Initializes a variable of type struct dog with the specified
 * name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

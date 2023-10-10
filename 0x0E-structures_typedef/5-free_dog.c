#include <stdlib.h>
	#include "dog.h"


	/**
	 * free_dog - a function that frees memory allocated for a struct dog
	 * @d: struct dog
	 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}

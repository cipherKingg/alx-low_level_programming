#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **med;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	med = malloc(sizeof(int *) * height);

	if (med == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		med[x] = malloc(sizeof(int) * width);

		if (med[x] == NULL)
		{
			for (; x >= 0; x--)
				free(med[x]);

			free(med);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			med[x][y] = 0;
	}

	return (med);
}

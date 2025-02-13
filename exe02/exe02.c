#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int	main(void)
{
	//Image
	int	image_width = 256;
	int 	image_height = 256;

	//Render header
	if (printf("P3\n%d %d\n255\n", image_width, image_height) < 0)
	{
		perror("Erro ao escrever no stdout");
		exit(EXIT_FAILURE);
	}

	for (int j = 0; j < image_height; j++)
	{
		if (j % 10 == 0)
		{
			errno = 0;
			write (STDERR_FILENO, strerror(errno), strlen(strerror(errno)));
			write (STDERR_FILENO, "\n", 1);
		}
		for (int i = 0; i < image_height; i++)
		{
			double r = (double)i / (image_width - 1);
			double g = (double)j / (image_height - 1);
			double b = 0.0;

			int ir = (int)(255.999 * r);
			int ig = (int)(255.999 * g);
			int ib = (int)(255.999 * b);

			if (printf("%d %d %d\n", ir, ig, ib) < 0)
			{
				perror("Erro ao escrever no stdout");
				exit(EXIT_FAILURE);
			}
		}
	}
	printf("\rDone.                  \n");
}

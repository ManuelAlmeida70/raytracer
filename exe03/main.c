#include "color.h"
#include "vec3.h"

int	main(void)
{
	//Image dimensions
	int	image_width = 256;
	int	image_height = 256;

	//PPM header
	printf("P3\n %d %d\n255\n", image_width, image_height);
	
	//Render
	for (int j = 0; j < image_height; j++)
	{
		fprintf(stderr, "\rScanline remaining: %d ", (image_height - j));
		fflush(stderr);
		for (int i = 0; i < image_width; i++)
		{
			//Calculate normalized color values
			double r = (double)i / (image_width - 1);
		}
	}
	
	return 0;
}

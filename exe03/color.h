#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

typedef t_vec3 t_color;

//Escreve a cor no formato RGB
void	write_color(FILE *out, const color *pixel_color);

#endif

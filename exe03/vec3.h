#ifndef VEC3_H
#define VEC3_H

#include <math.h>
#include <stdio.h>

typedef struct s_vec3
{
	double e[3];
} t_vec3;

//Criar um novo vector
t_vec3	vec3_create(double e0, double e1, double e2);

//Acessar coordenads
double vec3_x(const t_vec3 *v);

double vec3_y(const t_vec3 *v);

double vec3_z(const t_vec3 *v);

//Negacao de vector
t_vec3	vec3_negate(const t_vec3 *v);

//Acesso por indice
double	vec3_get(const t_vec3 *v, int i);

void	vec3_set(t_vec3 *v, int i, double value);

//Soma dois vectores
t_vec3	vec3_add(const t_vec3 *u, const t_vec3 *v);

//Subtrair dois vectores
t_vec3	vec3_subtract(const t_vec3 *u, const t_vec3 *v);

//Multiplicacao elemento por elemento
t_vec3	vec3_multiply(const t_vec3 *u, const t_vec3 *v);

//Mutiplicacao por escalar
t_vec3 vec3_scale(const t_vec3 *v, double t);

//Divisao por escalar
t_vec3	vec3_divide(const t_vec3 *v, double t);

//Produto escalar (dot product)
double vec3_dot(const t_vec3 *u, const t_vec3 *v);

//Produto vetorial (cross product)
t_vec3	vec3_cross(const t_vec3 *u, const t_vec3 *v);

//Comprimento de vetor
double	vec3_length(const t_vec3 *v);
//Normalizar vector (transformalo em unitario)
t_vec3	vec3_unit_vector(const t_vec3 *v);

//Imprimir vector
void	vec3_print(const t_vec3 *v);

#endif


// Pedro Henrique Figueiredo Magalhaes 
//Aula Pratica 02 - 20 de mar 2015 

/* no arquivo .c da bibiloteca implementamos o que a funcao descrita no arquivo .h
vai de fazer no nosso programa*/

#include <stdio.h>
#include <math.h>
#include "pratica2.h" //devemos chamar no arquivo .c da bibilioteca o arquivo .h

float cauchy ( float x ) {
	float pi = 3.141592;
	return 1.0 / (pi * ( 1+ pow(x,2)));
}

float gumbel ( float x, float mu, float b ){
	float z,u ;
	z = (x-mu) / b;
	u = z + exp(-z);

	return (1 / b) * exp(-u) ;
}

float laplace (float x, float mu, float b){
	float v;
	v = (-fabs(x-mu)) / b;
	return (1 / (2 * b )) * exp(v);
}


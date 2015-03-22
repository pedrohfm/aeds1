#include <stdio.h>
#include <math.h>
#include "pratica2.h"

void main () {

	float x,y,z;

	x = cauchy (-2.0) ;
	y = gumbel (0,0.5,2.0);
	z = laplace (-6.0,-5.0,4.0);


	printf("\n cauchy para x = -2 : %f \n", x);

	printf ("\n gumbel para x= 0 , mu = 0.5 e beta = 2 : %f \n" , y);

	printf ("\n laplace para x = -6, mu = -5 e beta = 4 : %f \n", z);

	system("pause");
}

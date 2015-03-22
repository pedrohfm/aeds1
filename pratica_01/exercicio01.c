#include <stdio.h>
int main () {
	float poupanca = 789.54,	juros =1.0056, 		deposito = 303.20 , 	retirada = 58.25;
	float valor = poupanca*juros;	//mes 1
	float valor2 = valor + deposito;	//mes 2
	float valor3 = valor2*juros;	//mes 2 c juros aplicados
	float valor4 = valor3-retirada;	//mes 3 com retirada
	float valorfinal = valor4 *juros; 	//valor apos 4 meses c juros aplicados
	
	printf("valor da poupanca apos 4 meses : %.2f\n", valorfinal);
	
	system("pause");
	
	return 0;


}

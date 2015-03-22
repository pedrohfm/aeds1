#include <stdio.h>
int main () {

	//variaveis
	
	float pesobrutus = 122.00 , alturabrutus = 1.84 , pesoolivia = 45.00 , alturaolivia = 1.76 ; // dados de brutus e olivia
	float imcbrutus = pesobrutus /(alturabrutus*alturabrutus); //calculo imc de brutus
	float imcolivia = pesoolivia /(alturaolivia*alturaolivia); //calculo imc da olivia
	float idealbrutus =pesobrutus -(25.00*alturabrutus*alturabrutus); //peso ideal de brutus para imc  saudavel
	float idealolivia =(18.50*alturaolivia*alturaolivia) - pesoolivia ; //peso ideal de olivia para imc saudavel
	
	
	//saida no monitor
	
	printf("Imc de Brutus : %.1f \n"	,imcbrutus);
	printf("Imc de Olivia : %.1f \n"	 , imcolivia);
	printf("Brutus precisa ganhar : %.1f \n" 	,idealbrutus);
	printf("Olivia precisa perder : %.1f \n" 	,idealolivia);
	
	system("pause");
	
	return 0;


}

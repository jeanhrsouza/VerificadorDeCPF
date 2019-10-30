#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main()
{	
	//Declarando as variáveis.
	
	char cpf[12], texto[] = "Trabalho de Logica de Programacao 1";
	int d10, d11, somatoria,  cpf10=0, cpf11=0, CPF[12];
	int i; 
	
	/*		-----------------------
			|CABEÇALHO DO PROGRAMA|
			-----------------------
	*/
	
	printf("%c", 218);
	for(i = 0; i < strlen(texto); i++)
		printf("%c", 196);
	printf("%c\n", 191);
	//Segunda Linha
	printf("%c", 179);
	for(i = 0; i < strlen(texto); i++)
		printf("%c", 32);
	printf("%c\n", 179);
	//Terceira Linha
	printf("%c", 179);
	printf("%s", texto);
	printf("%c\n", 179);
	//Quarta Linha
	printf("%c", 179);
	for(i = 0; i < strlen(texto); i++)
		printf("%c", 32);
	printf("%c\n", 179);	
	//Quinta Linha
	printf("%c", 192);
	for(i = 0; i < strlen(texto); i++)
		printf("%c", 196);
	printf("%c", 217);
	

	/*		--------------------------	
	 		| CÓDIGO FONTE/PROGRAMA	 |
	 	    -------------------------		
	*/
	
	setlocale(LC_ALL, "Portuguese");
	
		
	//Coletando dados
	printf("\nForneça os 9 primeiros números do seu CPF: ");
	gets(cpf);
	
	
	
	
	//Convertendo cpf (char) em cpf (int)
	for ( i = 0; i < 9; i++)
		CPF[i]=cpf[i]-48;
	
		
	
	//Descobrindo o 10º dígito.
	somatoria=0;
	
	for(i = 0; i < 9; i++)
		somatoria = somatoria + CPF[i] * (10 - i);
	
	
	cpf10 = somatoria % 11;
	
	
	//Comparação para descobrir o dígito
		if(cpf10 < 2)
			d10 = 0;
		else
			d10= 11 - cpf10;
	
	
	//Implementando o 10º dígito no CPF.
	
	CPF[9]= d10;

	//Descobrindo o 11º dígito do CPF.
	somatoria = 0;
	for(i = 0; i < 10; i++)
		somatoria= somatoria + CPF[i] * (11 - i);

	cpf11 = somatoria % 11;
	
	//Comparação para descobrir o dígito
		if(cpf11 < 2)
			d11 = 0;
		else
			d11 = 11 - cpf11;			
	

	//Implementando o 11º dígito no CPF.
	
	CPF[10] = d11;
	
	
	//Exibindo o CPF.
	printf("O seu CPF e: ");
	for(i = 0; i < 11; i++)
		printf("%d", CPF[i]);
	
	
	
	
	
	
	printf("\n\n");
	

	system("PAUSE");
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main()
{
	int num;    // número de coberturas a ser analizada 
	float r; // raio da cobertura do circulo
	float area; // area final
	float menor;
	float menorR;
	int i; // variável de contagem
	float j;
	setlocale(LC_ALL,"Portuguese");

    	
    printf("\t informe quantas coberturas de área circular deseja verificar\n");
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
    printf("\t informe o valor do raio do circulo:\n");
    scanf("%f",&r);
   	j=acos(-1); //operação inversa do coseno
    area= j*(r*r);
	if(i==0)
	{
		menor = area;
		menorR = r;
	}
	else
	{
		if(area < menor)
	{
		menor=area;
		menorR = r;
	}
	}
	system("cls");
	
	
	}
	printf("a menor cobertura é a de: %f\nCorrespondente ao raio: %2.f\n",menor,menorR);
    system("pause");
    


    
	return 0;
}

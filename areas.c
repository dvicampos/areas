#include<stdio.h>
#include<stdlib.h>

void area_circulo(float radio, float *area)
{
	printf("Ingrese el radio: ");
	scanf("%f", &radio);
	*area=radio*radio*(3.14);
}
void area_cuadrado(float base, float *area)
{
	printf("Ingrese la base: ");
	scanf("%f",&base);
	*area = base*base;
}
void area_rectangulo(float base, float altura, float *area)
{
	printf("Ingrese la base: ");
	scanf("%f",&base);
	printf("Ingrese la altura: ");
	scanf("%f",&altura);
	*area = base*altura;
}
void area_triangulo(float base, float altura, float *area)
{
	printf("Ingrese la base: ");
	scanf("%f",&base);
	printf("Ingrese la altura: ");
	scanf("%f",&altura);
	*area = ((base*altura)/2);
}
void main()
{
float radio=0;
float area=0;
float base=0;
float altura=0;
int op;
char con;
con='S';
	do{
inicio:
printf("\t\tAREAS\n");
printf("\t#1 Area de Circulo\n");
printf("\t#2 Area de Cuadrado\n");
printf("\t#3 Area de Rectangulo\n");
printf("\t#4 Area de Triangulo\n");
printf("\n\tNOTA: INGRESE UN NUMERO DE LOS QUE ESTAN DENTRO DEL RANGO 1-4");
printf("\nElija una opcion: ");
scanf("%d",&op);
switch(op)
{
case 1:
	{
		area_circulo(radio, &area);
		printf("Area = %.2f\n",area);
	break;
	}
case 2:
{
		area_cuadrado(base, &area);
		printf("Area = %.2f\n",area);
	break;
}
case 3:
{
		area_rectangulo(base, altura, &area);
		printf("Area = %.2f\n",area);
break;
}
case 4:
{
		area_triangulo(base, altura, &area);
		printf("Area = %.2f\n",area);
break;
}
default: printf("Valor no valido escoga una opcion existente\n");
}
	printf("\nDESEA CONTINUAR (presione letra S mayuscula para continuar):");
		scanf("%s", &con);
	}while (con=='S');
	
	system("pause");

}

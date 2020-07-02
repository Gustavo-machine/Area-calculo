#include<stdio.h>
#include<stdlib.h>
 int main(){
 	
 	float A,B,C,triangulo,trapezio,circulo,retangulo,quadrado;
 	scanf("%f",&A);
 	scanf("%f",&B);
 	scanf("%f",&C);
 	triangulo=(A*C)/2;
 	circulo=(C*C)*3.14159;
 	trapezio=(A+B)*C/2;
 	quadrado=B*B;
 	retangulo=A*B;
 	printf("\nTriangulo: %2.3f",triangulo);
 	printf("\nCirculo: %2.3f",circulo);
 	printf("\nTrapezio: %2.3f",trapezio);
 	printf("\nQuadrado: %2.3f",quadrado);
 	printf("\nRetangulo: %2.3f",retangulo);
 	system("pause>null");
 }

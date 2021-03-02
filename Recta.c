/*Algoritmo que calcula la ecuación de una recta
Nelson Leonardo Hernández, Diego Alejandro Gonzalez
*/

#include <stdio.h>
#include <stdlib.h>

struct pto
{
	float x;
	float y;
};

void pide_datos(struct pto *, struct pto *);
void procesa_datos(struct pto, struct pto, float *, float *);
void imprime_res(float *, float *);

int main(void)
{
	float corte, m;
	struct pto pa, pb;

       	printf("Bienvenido, este programa calcula la ecuación de una recta\n");

	pide_datos(&pa, &pb);
	procesa_datos(pa, pb, &corte, &m);
	imprime_res(&corte, &m);
}

void pide_datos(struct pto *pa, struct pto *pb)
{
	printf("\nIngrese la coordenada x del primer punto\t");
	scanf("%f", &(*pa).x);
	printf("\nIngrese la coordenada y del primer punto\t");
	scanf("%f", &(*pa).y);

	printf("\nIngrese la coordenada x del segundo punto\t");
	scanf("%f", &(*pb).x);
	printf("\nIngrese la coordenada y del segundo punto\t");
	scanf("%f", &(*pb).y);
}

void procesa_datos(struct pto pa, struct pto pb, float *corte, float *m)
{
	*m = (pa.x - pb.x)/(pa.y - pb.y);
	*corte = pa.y - ((*m) * (pa.x));	
}

void imprime_res(float *corte, float *m)
{
	printf("\n\nLa ecuación de la recta que pasa por los puntos ingresados es:\n\n y = %fx + %f \n\n", *m, *corte);
}

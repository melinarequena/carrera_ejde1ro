/*1-      Para cada uno de los 15 autos involucrados en una carrera de rally, se conoce el nombre del conductor
y el tiempo que ha realizado en cada una de las 10 etapas de la carrera.
 Se pide escribir un programa que:

a)      Calcule y muestre el nombre del piloto y el tiempo total que han realizado cada uno de los vehículos en recorrer el trayecto completo de la competencia.

b)      Cuál es el nombre del conductor ganador. (Este resultado lo mostrará por pantalla el programa principal).*/

#include<stdio.h>

void cargar(char[15][50], float[15][10]);/*nombre conductor 15, tiempo de cada etapa de llas 10 carreras*/
void tiempotot(char[15][50], float[15][10], float[15]); /*nombres, tiempocada, tiempotot*/
int ganador(float[15]);

int main()
{
    int pos;
    char nombre[15][50];
    float tiempoetapa[15][10], tiempojugador[15];
    pos= ganador(tiempojugador);
    printf("Carga de datos\n");
    cargar(nombre, tiempoetapa);
    tiempotot(nombre, tiempoetapa, tiempojugador);
    printf("El jugador ganador de la carrera es %c", ganador(nombre[pos]));
}

void cargar(char nom[15][50], float tetapa[15][10])
{
    int i, j;
    for(i=0; i<15; i++)
    {
        printf("Ingrese el nombre del corredor numero %d\n", i+1);
        gets(nom[i]);
        for(j=0; j<10; j++)
        {
            printf("Ingrese tiempo en realizar la etapa  numero %d, jugador %d\n", j+1, i+1);
            scanf("%f", &tetapa[i][j]);
        }
    }
}

void tiempotot(char nom[15][50], float tetapa[15][10], float tjugador[15])
{
    int i, j;
    for(i=0; i<15; i++)
    {
        tjugador[i]=0;
        for(j=0; j<10; j++)
        {
            tjugador[i]=tjugador[i]+tetapa[i][j];
        }
        printf("El tiempo total de %c es de %f\n", nom[i], tjugador[i]);
    }

}

int ganador(float tjugador[15])
{
    int i, pos;
    float min=tjugador[0];
    for(i=0; i<15; i++)
    {
        if(min>tjugador[i])
        {
            min=tjugador[i];
            pos=i;
        }
    }
    return pos;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#define MAX 10  /* el tamaño maximo  de la matriz sera de 10*/

int main(int argc, char** args)
{
int matriz[MAX][MAX], col, reng, i=0, j=0;
  printf("Cuantas columnas quieres ");         /* pedimos la cantidad de columnas*/
  scanf("%d", &col);           /*usamos el sacnf y definimos el tipo de dato que recibe %d para decir que va a ser un entero*/
  printf("Cuantos renglones quieres ");         /* pedimos la cantidad de filas*/
  scanf("%d", &reng);
  
  /* esto se encargara de recibir los datos que el usuario ingrese */
  for(i = 0;i < reng;i++)  /* recorremos la matriz*/
  {
      for(j = 0;j < col;j++){
          printf("ESCRIBE LOS VALORES [%d][%d]=\t", i+1, j+1);
              scanf("%d", &matriz[i][j]);
      }
  }
  /* imprimir matriz*/
  printf("\n\n\t\tMatriz original");
  printf("\n\n");
  for(i = 0;i < reng;i++){
      printf("\n\t\t");
      for(j = 0;j < col;j++){
          printf("  %6d  ", matriz[i][j]);
          }
  }
 /*imprimir la matriz transpuesta*/
  printf("\n\n\t\tMatriz transpuesta");
  printf("\n\n");
  for(i = 0;i < col;i++){
      printf("\n\t\t");
      for(j = 0;j < reng;j++){
          printf("  %6d  ", matriz[j][i]);
          }
  }
  printf("\n\n\n");
  system("pause");/*para detener el programa*/
}

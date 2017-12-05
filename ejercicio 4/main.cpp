#include<stdio.h> /*librerias*/
#define MAX 10    /*we define the variable max to 10*/
int main(int argc, char** args)
{
int matriz[MAX][MAX], col, reng, i=0, j=0; /*variables*/
  printf("Cuantas columnas quieres ");      /*we ask the value for columns*/
  scanf("%d", &col);                        /*we define the variable col(columns)*/
  printf("Cuantos renglones quieres ");     /*we ask the value for reng(renglones)*/
  scanf("%d", &reng);                       /*we define the variable reng*/
  /* read the data*/
  for(i = 0;i < reng;i++)    /*cycle for*/
  {
      for(j = 0;j < col;j++){   /*cycle for*/
          printf("ESCRIBE LOS VALORES [%d][%d]=\t", i+1, j+1);  /*we ask the value for each position*/
              scanf("%d", &matriz[i][j]);
      }
  }
  /*method for print the original matrix*/
  printf("\n\n\t\tMatriz original");
  printf("\n\n");
  for(i = 0;i < reng;i++){
      printf("\n\t\t");
      for(j = 0;j < col;j++){
          printf("  %6d  ", matriz[i][j]);
          }
  }
 /*print the transpoted matrix*/
  printf("\n\n\t\tMatriz transpuesta");
  printf("\n\n");
  for(i = 0;i < col;i++){
      printf("\n\t\t");
      for(j = 0;j < reng;j++){
          printf("  %6d  ", matriz[j][i]);
          }
  }
  printf("\n\n\n");
  }



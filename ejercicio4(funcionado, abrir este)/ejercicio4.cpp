#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#define MAX 10  /* The maximum size of the matrix will be 10*/

int main(int argc, char** args)
{
int matriz[MAX][MAX], col, reng, i=0, j=0;
  printf("Cuantas columnas quieres ");         /* ask the value for "columnas"*/
  scanf("%d", &col);           /*we use the sacnf and we define the type of data that %d receives to say that it is going to be an intege*/
  printf("Cuantos renglones quieres ");         /* ask the value for "filas"*/
  scanf("%d", &reng);
  
  /* this will be responsible for receiving the data that the user enters */
  for(i = 0;i < reng;i++)  /* through the matrix*/
  {
      for(j = 0;j < col;j++){
          printf("ESCRIBE LOS VALORES [%d][%d]=\t", i+1, j+1); /*ask the values of the matrix*/
              scanf("%d", &matriz[i][j]);    /*receives the elements of the matrix*/
      }
  }
  /* print the matriz*/
  printf("\n\n\t\tMatriz original");
  printf("\n\n");
  for(i = 0;i < reng;i++){ //cycle for
      printf("\n\t\t");     
      for(j = 0;j < col;j++){  //cycle for
          printf("  %6d  ", matriz[i][j]); //print original matrix
          }
  }
 /*print the transposed matrix */
  printf("\n\n\t\tMatriz transpuesta");
  printf("\n\n");
  for(i = 0;i < col;i++){ //cycle for
      printf("\n\t\t");   
      for(j = 0;j < reng;j++){  //cycle for
          printf("  %6d  ", matriz[j][i]); /*we invert the rows and columns*/
          }
  }
  printf("\n\n\n"); //print an space
  system("pause");/*stop the program*/
}

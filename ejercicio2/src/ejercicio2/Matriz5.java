//programa que crea una matriz con numeros aleatorios y la imprime, luego hace un recorrido en espiral e imprime dicho recorrido//
package ejercicio2;

import java.io.BufferedReader;
import java.util.Random;
import java.util.Scanner;


    
   
public class Matriz5 {
    private Scanner teclado;
    private int[][] mat;
    private BufferedReader br;
    
    public void cargar() {
        teclado=new Scanner(System.in);
        System.out.print("Cuantas fila tiene la matriz:");
        int filas=teclado.nextInt();
        System.out.print("Cuantas columnas tiene la matriz:");
        int columnas=teclado.nextInt();
        mat=new int[filas][columnas];
        for(int f=0;f<mat.length;f++) {
            for(int c=0;c<mat[f].length;c++) {
                Random rs = new Random();
                mat[f][c]=rs.nextInt(10);
            }
        }
    }
    
    public void imprimir() {
        for(int f=0;f<mat.length;f++) {
            for(int c=0;c<mat[f].length;c++) {
                System.out.print(mat[f][c]+" ");
            }
            System.out.println();
        }
    }
    
    public void matrizcaracol(){
          int x = 0; //Para manejar las filas
      int y = 0; //Para manejar las columnas
      int flag = 0;  //Bandera para saber que recorrido se debe realizar
      int n = 0; //Contador de elementos
      //Total de elementos en la matriz
      int elementos = mat.length * mat[0].length;
 
      // Recorrido en espiral
      System.out.println("\nMostrando recorrido en espiral");
      while (n < elementos) {
         
         switch (flag) {
         case 0: // Recorrido de izquierda a derecha
            for (int m = x; m < mat[0].length - y; m++) {
               System.out.print(" " + mat[x][m]);
               n++;
            }
            flag++;
            break;
 
         case 1: //Recorrido de arriba abajo
            for (int m = x + 1; m < mat.length - x; m++) {
               System.out.print(" " + mat[m][mat[0].length - 1 - y]);
               n++;
            }
            flag++;
            break;
 
         case 2: //Recorrido de derecha a izquierda
            for (int m = mat[0].length - 2 - y; m >= y; m--) {
               System.out.print(" " + mat[mat.length - 1 - x][m]);
               n++;
            }
            flag++;
            break;
 
         case 3: //Recorrido de abajo a arriba
            for (int m = mat.length - 2 - x; m >= x + 1; m--) {
               System.out.print(" " + mat[m][y]);
               n++;
            }
            flag = 0;
            x++;
            y++;
            break;
    }
    
    
}}}
    
  
    
    


//programa que crea una matriz con numeros aleatorios y la imprime, luego hace un recorrido en espiral e imprime dicho recorrido//
package ejercicio2;

import java.io.BufferedReader;
import java.util.Random;
import java.util.Scanner; //librerias


    
//class matriz   
public class Matriz5 {
    private Scanner teclado;   // object
    private int[][] mat;       // matix
    private BufferedReader br;  //object
    
    public void cargar() {     // method for fill the matrix
        teclado=new Scanner(System.in); 
        System.out.print("Cuantas fila tiene la matriz:"); // we ask the value for rows (filas)
        int filas=teclado.nextInt();
        System.out.print("Cuantas columnas tiene la matriz:");// we ask the value for columns (columnas)
        int columnas=teclado.nextInt();
        mat=new int[filas][columnas]; // our matrix will be the size entered by the user
        
        for(int f=0;f<mat.length;f++) { // we go through the matrix
            for(int c=0;c<mat[f].length;c++) {
                Random rs = new Random(); // we create our object random
                mat[f][c]=rs.nextInt(10); // we use the random object to generate random numbers (I set them to generate from 1 to 10)
            }
        }
    }
   // this method prints the original matrix
    public void imprimir() {
        
        for(int f=0;f<mat.length;f++) {
            for(int c=0;c<mat[f].length;c++) {
                System.out.print(mat[f][c]+" "); // print the matrix 
            }
            System.out.println();
        }
    }
    // this class will do the spiral tour
    public void matrizEspiral(){
          int x = 0; //To manage the rows
      int y = 0; //To manage the columns
      int flag = 0;  //flag to know the tour
      int n = 0; 
      int elementos = mat.length * mat[0].length;//Total elements in the matrix
 
      // spiral travel
      System.out.println("\nrecorrido en espiral");
      while (n < elementos) {
         
         switch (flag) {   //switch case for each case
         case 0: // Travel from left to right
            for (int m = x; m < mat[0].length - y; m++) {
               System.out.print(" " + mat[x][m]);
               n++;
            }
            flag++;
            break;
 
         case 1: //Tour up and down
            for (int m = x + 1; m < mat.length - x; m++) {
               System.out.print(" " + mat[m][mat[0].length - 1 - y]);
               n++;
            }
            flag++;
            break;
 
         case 2: //Travel from right to left
            for (int m = mat[0].length - 2 - y; m >= y; m--) {
               System.out.print(" " + mat[mat.length - 1 - x][m]);
               n++;
            }
            flag++;
            break;
 
         case 3: //tour down to up
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
    
  
    
    


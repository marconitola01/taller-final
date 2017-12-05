
package ejercicio5;


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter; // librerias


public class Ejercicio5{
	// method to fill the matrix
	public static void llena(int [][] matrix, int minRandom, int maxRandom) {
		minRandom = 0;  //we create a range to generate random numbers
		maxRandom = 9;
		for (int i = 0; i < matrix.length; i++) { //cycle for
	  for (int j = 0; j < matrix[i].length; j++) {    //cycle for
		matrix[i][j] = minRandom - ((int) Math.round((Math.random()) * (minRandom - maxRandom))); //generate random numbers
	        }
	    }
	}
		
	
	//print full matrix(original)
	public static void imprimenatural(int [][] matrix){
		for (int i = 0; i < matrix.length; i++) {
		for (int j = 0; j < matrix[i].length; j++) {
		System.out.print(" " + matrix[i][j] + " ");
	        }
	        System.out.println("");
	    }
	}
	
	// print diamond with parameters matrix and n
	public static void imprimerombo(int [][] matrix, int n){
		 if(n%2 == 0){ //for pair matrix
			for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
			if (i+j >= (n/2)-1 && i+(n/2) >= j && j+(n/2) >= i && i+j <= (n/2)+n-1){ //limites del rombo para una matriz par
				System.out.print(" " + matrix[i][j] + " "); //print matrix
					}
				else{
						System.out.print("   ");
					}
				}
				System.out.println(" ");
			}
		 }
		 else{   //for impair matrix
			 for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i+j >= (n/2) && i+(n/2) >= j && j+(n/2) >= i && i+j <= (n/2)+n-1){ //limites del rombo para una matriz impar
						System.out.print(" " + matrix[i][j] + " ");
						}
						else{
							System.out.print("   ");
						}
					}
					System.out.println(" ");
			}			 
		 }
	}

	public static void main(String[] args) throws IOException{
			
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in)); //object for keep dates
		BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out)); //object for print
			
		bw.write("Escriba el tamaño de la Matriz: "); // we ask the value for size
		bw.flush();	
		int m = Integer.parseInt(br.readLine());	// m will be going the size of the matrix
		int [][] matrix = new int [m][m];               // we assign the size   
			
		llena(matrix, m, m);                            //call the method "llena"
		System.out.println("\n matriz original: \n");   
		imprimenatural(matrix);                        // we call the method "imprime natural" for print the original matrix  
		System.out.println("\n rombo \n");
		imprimerombo(matrix , m);                      // call method for print the diamond    
			
	}
}

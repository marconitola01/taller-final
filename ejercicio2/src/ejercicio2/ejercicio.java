// main desde el cual invocaremos los metodos//
package ejercicio2;

public class ejercicio {
     public static void main(String[] ar) {
      // invocaremos los metods para correr el programa
          Matriz5 ma=new Matriz5();
        ma.cargar();//metodo que carga la matriz de numeros 
        ma.imprimir();//metodo que imprime la matriz original
        ma.matrizEspiral();//metodo que hace el recorrido en espiral y imprime el recorrido
    }   
}

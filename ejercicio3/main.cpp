#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Metodo de conversion int a string 
string NumberToString(int pNumber){
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}
// main y declaracion de variables
int main(int argc, char* argv[]){
int m = 0 ;int npar = 0 ;int nimpar = 0;int npos = 0;int nneg = 0 ;int nume;
string cpar, cimpar, cpos, cneg, x;

//matriz y definir su tamaño
cout << "\n\ningrese las dimenciones de la Matriz: ";
cin >> m ;
int matriz [m][m];

//llena matriz con numeros aleatorios 
cout <<"\nlos numeros aleatorios son: \n\n";
	
	for (int i= 0 ;i<m ;i++){
		for (int j= 0 ;j<m ;j++){
	                nume = 1+rand()%10;
			matriz[i][j] = nume;
		}
	}
// Imprime la matriz	
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + " " + NumberToString(matriz[i][j])+ " ";
		}
		cout << x + "\n";	
	}
		
// define los contadores y subconjuntos de la matriz   
	for(int i = 0;i<m;i++){
		for(int j = 0; j<m;j++){
			if(matriz[i][j]%2 == 0){
				//contador y lista de numeros pares
				npar++;
				cpar = cpar + NumberToString(matriz[i][j]) + ",";
			}
			else if (matriz[i][j]%2 != 0){
				//contador y lista de numeros impares
				nimpar ++ ;
				cimpar = cimpar+ NumberToString(matriz[i][j]) + ",";	
			}
			if(matriz[i][j]< 0 ){
				//contador y lista de numeros negativos (-)
				nneg ++;
				cneg = cneg + NumberToString(matriz[i][j]) + ",";
			}
			else if(matriz[i][j]>= 0){
				//contador y lista de numeros positivos (+)
				npos++;
				cpos = cpos + NumberToString(matriz[i][j]) + ",";			
			}
		}
	}
	
	//imprime los contadores y las listas de los subconjuntos 
	
	cout <<"\n\nnumeros pares: " + NumberToString(npar )+ "\n\n";
	cout <<" numeros impares  son: " + NumberToString(nimpar) + "\n\n";
	cout <<"numeros negativos: " + NumberToString(nneg) + "\n\n";
	cout <<"numeros positivos: " + NumberToString(npos) + "\n\n";
	cout <<"numeros pares: "+ cpar + "\n\n";
	cout <<"numeros impares:" + cimpar + "\n\n";
	cout <<"los numeros negativos encontrados son:" + cneg + "\n\n";
	cout <<"los numeros positivos encontrados son:" + cpos + "\n\n";
	
}

#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cstdlib>
#include <ctime>  /*librerias*/
using namespace std;

// conversion int to string 
string NumberToString(int pNumber){
 ostringstream oOStrStream;
 oOStrStream << pNumber;
 return oOStrStream.str();
}
// main and declaration of variables
int main(int argc, char* argv[]){
int m = 0 ;int npar = 0 ;int nimpar = 0;int npos = 0;int nneg = 0 ;int nume; /*variables*/
string cpar, cimpar, cpos, cneg, x;  

//matrix and define it's size
cout << "\n\ningrese las dimenciones de la Matriz: ";   /*we ask value for size*/
cin >> m ;
int matriz [m][m];      /*we define the size of the matrix*/

//fill matrix with random numbers 
cout <<"\nlos numeros aleatorios son: \n\n";   /*generate random numbers*/
	
	for (int i= 0 ;i<m ;i++){    /*cycle for*/
	for (int j= 0 ;j<m ;j++){    /*cycle for*/
	         nume = 1+rand()%10;     /*we define the range of ramdom numbers*/
	         matriz[i][j] = nume;      
		}
	}
// print the matrix	
	for (int i=0;i<m ;i++){
		x = "";
		for (int j= 0 ;j<m ;j++){
			x = x + " " + NumberToString(matriz[i][j])+ " ";
		}
		cout << x + "\n";	
	}
		
// subsets   
	for(int i = 0;i<m;i++){
	for(int j = 0; j<m;j++){
	if(matriz[i][j]%2 == 0){
				//pair numbers
				npar++;
				cpar = cpar + NumberToString(matriz[i][j]) + ",";
			}
			else if (matriz[i][j]%2 != 0){
				//impair numbers
				nimpar ++ ;
				cimpar = cimpar+ NumberToString(matriz[i][j]) + ",";	
			}
			if(matriz[i][j]< 0 ){
				//negative numbers
				nneg ++;
				cneg = cneg + NumberToString(matriz[i][j]) + ",";
			}
			else if(matriz[i][j]>= 0){
				//positive numbers
				npos++;
				cpos = cpos + NumberToString(matriz[i][j]) + ","; 			
			}
		}}
	
	//pritn counters and subsets 
	
	cout <<"\n\n cantidad numeros pares: " + NumberToString(npar )+ "\n\n"; cout <<" contidad numeros impares  son: " + NumberToString(nimpar) + "\n\n";
	cout <<"numeros negativos: " + NumberToString(nneg) + "\n\n";cout <<"numeros positivos: " + NumberToString(npos) + "\n\n";
	cout <<"numeros pares: "+ cpar + "\n\n";cout <<"numeros impares:" + cimpar + "\n\n";
	cout <<"los numeros negativos encontrados son:" + cneg + "\n\n";
	cout <<"los numeros positivos encontrados son:" + cpos + "\n\n";
	
}

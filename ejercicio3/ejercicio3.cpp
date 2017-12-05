/*Dada una matriz cuadrada M tamaño m ∗ m, la cual almacena números
enteros generados de forma aleatoria, y siendo m un parámetro ingresado por consola,
realice un programa que determine la cantidad de numeros pares, impares, positivos
y negativos, y además imprima la lista de cada uno de los subconjuntos.*/

#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include<cstdlib>
#include<ctime>       //librerias
using namespace std;

int main (){   //main for run our program
	int acuPosi =0, acuNega = 0, acuImpar =0, acuPar =0; //variables
	srand((int) time(0)); // initialize the numbers random 
	int m =0;  //m will be the size of matrix
	printf("ingrese numero: ");//enter number
	cin>>m;// store in variable m
	int matriz [m][m];//create matriz bidimensional
	for (int i =0; i<m; i++){
		for(int j =0; j<m; j++){
			matriz [i][j]= (rand() % 15) +-5;  // assign random values 
		}
	}
	cout<<"\n\n";
	for (int i =0; i<m; i++){ //cycle for
		cout<<"\n";
		for(int j =0; j<m; j++){ //cycle for
			cout<< matriz [i][j];
			cout<<" ";			// print matriz [][] 	
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){  //cycle for
		for(int j =0;j<m; j++){  //cycle for
			if(matriz[i][j] <0 ){ // firt conditional for negatives numbers			
			acuNega++; // accountant of negatives numbers
			 cout<<"\n", cout<<"los numeros negativos son: ";
			cout<< matriz[i][j]; // print matriz with negatives numbers
			cout<<"\t";
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] >0 ){// second conditional for positive numbers
			acuPosi++; // accountant of positive numbers
            cout<<"los numeros positivos son: ";
			cout<< matriz[i][j];// print matriz with positives numbers
			cout<<"\n";
			
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2== 0 ){ //third conditional for pair numbers
			acuPar++; // accountant of pair numbers
			cout<<"los numeros pares son: ";
			cout<< matriz[i][j]; // print matriz with pair numbers
			cout<<"\n";
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2!= 0 ){//fourth conditional for odd numbers
			acuImpar++;//accountant of ood numbers
			cout<<"los  numeros impares son: ";
			cout<< matriz[i][j];//print matriz with odd numbers
			cout<<"\n";
			}
		}
	}// print counters
	cout<<"\n\t";
	cout<<"la cantidad de numeros negativos son: ";
	cout<<"\n\t";
	cout<< acuNega; //negatives
	cout<<"\n\t";
	cout<<"la cantidad de numeros positivos son: ";
	cout<<"\n\t";
	cout<< acuPosi;	//positives
	cout<<"\n\t";
	cout<<"La cantidad de numeros pares:";
	cout<< "\n\t";
	cout<< acuPar; //pairs
	cout<< "\n\t";
	cout<< "La cantidad de numeros impares: ";
	cout<< "\n\t";
	cout<< acuImpar; //impairs

	
		
	
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] >0 ){ //validate, if the number is positive
			acuPosi++;
            cout<<"los numeros positivos son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2== 0 ){ //validate, if number is pair
			acuPar++;
			cout<<"los numeros pares son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2!= 0 ){ //validate, if number is impair
			acuImpar++;
			cout<<"los  numeros impares son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			}
		}
	}
	cout<<"\n\t";   // we peint counters and subsets
	cout<<"la cantidad de numeros negativos son: ";cout<<"\n\t";
	cout<< acuNega;
	cout<<"\n\t";cout<<"la cantidad de numeros positivos son: ";
	cout<<"\n\t";cout<< acuPosi;	
	cout<<"\n\t";
	cout<<"La cantidad de numeros pares:";
	cout<< "\n\t";
	cout<< acuPar;
	cout<< "\n\t";
	cout<< "La cantidad de numeros impares: ";
	cout<< "\n\t";
	cout<< acuImpar;

#include <iostream>

/* 
CONTENTS
* FUNCTIONS

* RETO #2
Write a program that asks the user for two numerical values and that when entering the values
perform the addition, subtraction, multiplication and division of these two values. On this occasion it
they must use functions for each of the operations.
 */

// ---------------------------------------------------------------- VARIABLES GLOBALES
double numberOne;
double numberTwo;

// ----------------------------------------------------------------- DECLARACION DE FUNCIONES
void pideDatos();
void suma(double,double);
double resta(double,double);
double multiplicacion();
void division();

// ---------------------------------------------------------------- FUNCION PRINCIPAL
using namespace std;
int main(int argc, char** argv) {

		
	cout<<"Hola, este es el reto #2"<<endl;
	cout<<"Este programa realiza la suma, resta, multiplicacion y division de dos numeros ingresados por el usuario"<<endl;
	
	pideDatos();
	cout<<endl<<"Los numeros ingresados son "<<numberOne<<" y "<< numberTwo<<endl;
	
	cout<<numberOne<<"+"<<numberTwo<<" = ";
	suma(numberOne,numberTwo); // Funcion void que recibe dos parametros
	cout<<numberOne<<"-"<<numberTwo<<" = "<<resta(numberOne,numberTwo)<<endl; // Funcion double que recibe dos parametros
	cout<<numberOne<<"*"<<numberTwo<<" = "<<multiplicacion()<<endl;  // Funcion double que no recibe nada
	division(); // Funcion void que no recibe nada
	
	return 0;
}
//-------------------------------------------------------------------- IMPLEMENTACION DE FUNCIONES
void pideDatos(){
	cout<<endl<<"Ingresa el primer numero: ";
	cin>>numberOne;
	cout<<"Ingresa el segundo numero: ";
	cin>>numberTwo;
}
void suma(double One, double Two){
	double suma = One + Two;
	cout<<suma<<endl;
}
double resta(double One, double Two){
	double resta;
	resta = One - Two;
	return resta;
}
double multiplicacion(){
	double multiplicacion;
	multiplicacion = numberOne * numberTwo;
	return multiplicacion;
}
void division(){
	cout<<numberOne<<"/"<<numberTwo<<" = "<<numberOne/numberTwo;
}
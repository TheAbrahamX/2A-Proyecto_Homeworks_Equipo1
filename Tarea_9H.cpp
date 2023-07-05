//Programa agregar Numeros
#include<iostream>
using namespace std;

int agregarNumeros(int numeros[], int tam) {
    // "numeros" debe ser un arreglo de enteros (int/integers)
    // Suma todos los enteros y devuelve el valor
    // Tu código:
    int sum=0;
	
	for(int i=0; i<tam; i++){
		sum+=numeros[i];
	}
	return sum;
}

int main(){
	int numeros[]={1,2,3,4,5};
	int tam=sizeof(numeros)/sizeof(numeros[0]);
	int rs = agregarNumeros(numeros, tam);
	
	cout<<"La sumatoria de los elementos del array es: "<<rs;
	return 0;
}

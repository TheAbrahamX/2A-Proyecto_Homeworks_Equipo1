//Programa obtener largo Array
#include<iostream>
using namespace std;
int obtenerLargoDelArray(){
	// Devuelve el largo de un array
    // Tu código:
	int array_enteros[]={9,8,7,6,323,78};
    int longitud=sizeof(array_enteros)/sizeof(array_enteros[0]);
    cout << "longitud array: "<<longitud<<endl;
    return 0;
}
int main(){
    obtenerLargoDelArray();
}

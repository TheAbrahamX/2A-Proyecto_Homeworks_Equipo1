//Programa array Contiene
#include<iostream>
using namespace std;
int arrayContiene(int array[],int elemento){
	// Comprueba si el elemento existe dentro de "array"
    // Devuelve "true" si est�, o "false" si no est�
    // Tu c�digo:
	for(int i=0;i<10; i++){
		if(elemento==array[i]){
			cout << "el elemento SI esta en el array" << endl;
			return 0;
		}
	}
	cout << "el elemento NO esta en el array" << endl;
}
int main(){
	int numeros[10]={1,2,3,4,5,6,7,8,9,20};
	arrayContiene(numeros,20);
	return 0;
}

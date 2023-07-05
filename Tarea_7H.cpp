//Programa de Palabra a Frase
#include<iostream>
using namespace std;
string dePalabraAFrase(string palabras1[]){
	// "palabras" es un array de strings/cadenas
    // Devuelve un string donde todas las palabras estén concatenadas
    // con espacios entre cada palabra
    // Ejemplo: ['Hello', 'world!'] -> 'Hello world!'
    // Tu código:
	for(int i=0; i<3; i++){
		cout << palabras1[i] << " ";
	}
}
int main(){
	string pal1[]={"hola","como","estas?"};
	dePalabraAFrase(pal1);
}

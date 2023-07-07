//Proyecto Equipo_1
#include <iostream>
#include<cstdlib>
#include<conio.h>
#ifdef _WIN32
  #include<windows.h>
#endif 
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main();

void gotoxy(int x,int y){   
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

int FN_Colors(){
	int c;
	do{
		gotoxy(35,5);cout << "**********************************************************" << endl;
		gotoxy(35,6);cout << "*    Antes de iniciar con el programa se le pregunta     *" << endl;
		gotoxy(35,7);cout << "*    ¿que color quieres para visualizar el programa?     *" << endl;
		gotoxy(35,8);cout << "**********************************************************" << endl;
		gotoxy(46,9);cout << "Tema claro ------------------ (1)" << endl;
		gotoxy(46,10);cout << "Tema oscuro ----------------- (2)" << endl;
		gotoxy(46,11);cout << "Tema descanso --------------- (3)" << endl;
		gotoxy(46,12);cout << "Tema hacking ---------------- (4)" << endl;
		gotoxy(46,13);cout << "Tema dolor de ojos ---------- (5)" << endl;
		gotoxy(46,14);cout << "Para ir al programa --------- (0)" << endl;
		gotoxy(46,15);cout << "Digite su eleccion: ---------- " ; cin >> c;
		if(c!=0){
			switch(c){
				case 1:
					system("color F0");
					break;
				case 2:
					system("color 0F");
					break;
				case 3:
					system("color 57");
					break;
				case 4:
					system("color 0A");
					break;
				case 5:
					system("color 69");
					break;
				default:
					gotoxy(35,17);cout << "ha digitado un valor no valido de color para el programa .-.";
					getch();
					system("cls");
					break;
			}
		}
	}while(c!=0);
}

//Esta Funcion captura 10 calificaciones y obtiene el promedio
//Deben modificar esta funcion para que las calificaciones capturadas
//se encuentren en un rango entre 0 y 10
void promedio(void){
    char salir;
    int i;
    double calificaciones[10];
    double suma = 0;

    do{
        limpiar_pantalla();
        calificaciones[10]=0;
        suma=0;
        gotoxy(30,1); cout << "******************** Promedio de 10 'CALIFICACIONES' ********************\n\n\n\n";
        for(i=0;i<10;i++){
            cout << "\n  + Ingresa la calificacion #" <<i+1 <<" (0-10): ";
            cin >> calificaciones[i];
            suma = suma + calificaciones[i];
            if(calificaciones[i] > 10 or calificaciones[i] < 0){
            	limpiar_pantalla();
            	gotoxy(30,10); cout<<"----------------------------------------------------------"; gotoxy(30,12); cout<<"----------------------------------------------------------"; 
				gotoxy(30,11); cout<<"La calificacion ingresada no esta dentro del rango (0-10).";
            	getch();
            	return promedio();
			}
        }
        
        gotoxy(65,25); cout << "\n- El promedio de las calificaciones es: " << suma/10<<endl;
        gotoxy(73,16); cout<<"------------------"; gotoxy(73,18); cout<<"------------------";
        gotoxy(76,17); cout<<"PROMEDIO: "<< suma/10;
        if(suma/10 < 6){
        	gotoxy(65,20); cout<<"-------------------------------------"; gotoxy(65,22); cout<<"-------------------------------------";
        	gotoxy(65,21); cout<<"Lo sentimos usted No esta aprobado :(";
		}else{
		gotoxy(65,20); cout<<"----------------------------------"; gotoxy(65,22); cout<<"----------------------------------";
		gotoxy(65,21); cout<<"Felicidades usted esta aprobado :)";
		}
        gotoxy(00,26); cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
        
    }while(salir != 's' and salir != 'S');
	system("cp");
}

void MenuAreas(){
	gotoxy(48,5); cout<<"'*Menu de Areas*'";
	gotoxy(44,7); cout<<"- Area Triangulos_____ (1)";
	gotoxy(44,8); cout<<"- Area Rectangulo_____ (2)";
	gotoxy(44,9); cout<<"- Area Circulo________ (3)";
	gotoxy(44,10); cout<<"- Retroceder__________ (0)";
}

//Desarrollar una funcion que tenga un menú para seleccionar el cálculo de las siguientes areas:
// triangulo, Rectangulo y Circulo
// La función debe pedir los datos para realizar los cálculos y mostrar el resultado.
//la función debe llamarse areas
//Ojo: debe contar con una opción para salir y regresar al menú principal
void areas(void){
	int dc;
	char salir;
	do{
		limpiar_pantalla();
		gotoxy(30,0); cout << "******************** Sacar su 'AREA'********************\n";
    	MenuAreas();
    	gotoxy(50,12); cout << "  Option: "; cin>>dc;
    	double Are, L1, L, h, b, pi=3.1416, rad;
    		switch(dc){
    			case 1:
    				do{
    				limpiar_pantalla();
					gotoxy(30,0); cout<<"---------------------------------------------------------------------\n"; gotoxy(30,5); cout<<"---------------------------------------------------------------------\n";
					gotoxy(30,1); cout<<"El Area es: un concepto metrico que puede permitir asignar una medida\n"; gotoxy(33,2); cout<<"a la extension de una superficie, expresada en matematicas"; gotoxy(33,3); cout<<"como unidades de medida denominadas unidades de superficie.\n\t\t\t\t\t\t    Area= bxh/2.";
					gotoxy(40,7); cout<<"+ Digite la medida de la Altura del Triangulo:";
					cin>>h;
					gotoxy(40,9); cout<<"+ Digite la medida de la base del Triangulo:";
					cin>>b;
					Are=(b*h)/2;
					gotoxy(40,11); cout<<"- El Area del Triangulo es:"<<Are;
						cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        				cin >> salir;
   					}while(salir != 's' and salir != 'S');
						break;
				case 2:
					do{
					limpiar_pantalla();
					gotoxy(25,0); cout<<"-----------------------------------------------------------------------------\n"; gotoxy(25,3); cout<<"-----------------------------------------------------------------------------\n";
					gotoxy(40,1); cout<<"El area de un cuadrilatero se refiere a la cantidad de\n"; gotoxy(43,2); cout<<"espacio que ocupa en una superficie plana.\n";
					gotoxy(45,5); cout<<"+ Digite la medida del largo:";
					cin>>L;
					gotoxy(45,7); cout<<"+ Digite la medida del ancho:";
					cin>>L1;
					Are=L*L1;
					gotoxy(45,9); cout<<"- El area del RECTANGULO es:"<<Are;
					cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        			cin >> salir;
   					}while(salir != 's' and salir != 'S');
					break;
				case 3:
					do{
					limpiar_pantalla();
			 		gotoxy(25,0); cout<<"-------------------------------------------------------------------------------\n"; gotoxy(25,5); cout<<"-------------------------------------------------------------------------------\n";
					gotoxy(34,1); cout<<"El Area es: un concepto metrico que puede permitir\n\t\t\t asignar una medida a la extension de una superficie, expresada en matematicas\n\t\t\t\t como unidades de medida denominadas unidades de superficie.\n\t\t\t\t\t\t Area= *pi* por radio^2.";
					gotoxy(40,7); cout<<"+ Digite la medida del radio del circulo:";
					cin>>rad;
					Are=pi*(pow(rad,2));
					gotoxy(40,9); cout<<"- El Area del circulo es:"<<Are;
					cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        			cin >> salir;
   					}while(salir != 's' and salir != 'S');
						break;
			}
   		}while(dc != 0);
}

//esta función debe llamarse "numeroMasGrande" capturar 10 números y devolver el número más Grande
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void numeroMasGrande(void){
    double numero, num_mayor;
    char salir;
    string xd[10]={"er", "do", "er", "to", "to", "to", "mo", "vo", "no", "mo"};
    
    do{
    	limpiar_pantalla();
    	gotoxy(30,0); cout << "******************** Numero mas 'GRANDE' de 10 ********************\n\n\n\n\n";
    	num_mayor=0;
    for(int i=0; i<10; i++){
    	gotoxy(43,3+i*2); cout<<"+ Ingrese el valor del "<<i+1<<xd[i]<<" numero: ";
    	cin>>numero;
    	if(num_mayor < numero){
    		num_mayor=numero;
		}
	}
	gotoxy(50, 24);cout <<"--------------------------"; gotoxy(50, 26);cout <<"--------------------------";
	gotoxy(52, 25); cout<<"El numero mayor es: "<<num_mayor;
    cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
        
    }while(salir != 's' and salir != 'S');
    	
	
}

string diaDeLaSemana(int Num_dia){
		if(Num_dia==1){
			string hoyes="DOMINGO :)";
			return hoyes;
		}
		if(Num_dia==2){
			string hoyes="LUNES :)";
			return hoyes;
		}
		if(Num_dia==3){
			string hoyes="MARTES :)";
			return hoyes;
		}
		if(Num_dia==4){
			string hoyes="MIERCOLES :)";
			return hoyes;
		}
		if(Num_dia==5){
			string hoyes="JUEVES :)";
			return hoyes;
		}
		if(Num_dia==6){
			string hoyes="VIERNES :)";
			return hoyes;
		}
		if(Num_dia==7){
			string hoyes="SABADO :)";
			return hoyes;
		}
		if(Num_dia<1||Num_dia>7){
			return "dia no valido";
		}
}

//esta funcion debe llamar a una funcion que se llamará diaDeLaSemana la cual recibirá un número
//que representa el dia de la semana, la función diaDeLaSemana debe retornar:
//Domingo si el número recibido fue 1
//Lunes si el número recibido fue 2
//Martes si el número recibido fue 3
//Miercoles si el número recibido fue 4
//Jueves si el número recibido fue 5
//Viernes si el número recibido fue 6
//Sabado si el número recibido fue 7
//No debe cambiar el nombre de la funcion4, la funcion4 debe recibir el valor de la función diaDeLaSemana
//y retornar el siguiente mensaje "Hoy es" + el dia de la semana retornado por la función "diaDeLaSemana"
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void funcion4(int dia, string resultado){
	char salir;
	do{
		limpiar_pantalla();
		gotoxy(30,0); cout << "******************** Dias de la 'SEMANA' **************************\n\n\n\n\n";
		gotoxy(50,3); cout << "- Domingo______ (1)\n";
        gotoxy(50,4); cout << "- Lunes________ (2)\n";
        gotoxy(50,5); cout << "- Martes_______ (3)\n";
        gotoxy(50,6); cout << "- Miercoles____ (4)\n";
        gotoxy(50,7); cout << "- Jueves_______ (5)\n";
        gotoxy(50,8); cout << "- Viernes______ (6)\n";
        gotoxy(50,9); cout << "- Sabado_______ (7)\n";
		gotoxy(40,11);cout << "Digite el dia de la semana que quiere ver: "; cin >> dia;
		system("cls");
		resultado = "Hoy es " + diaDeLaSemana(dia);
		if(dia==1 or dia==2 or dia==3 or dia==4 or dia==5 or dia==6 or dia==7){
		gotoxy(52, 4);cout <<"----------------------"; gotoxy(52, 6);cout <<"----------------------";
		gotoxy(55, 5);cout << resultado << endl;
		}
		if(dia<1||dia>7){
			gotoxy(52, 4);cout <<"----------------------"; gotoxy(52, 6);cout <<"----------------------";
			gotoxy(55, 5); cout<<"Dia no valido :(";
		}
		cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
	}while(salir != 's' and salir != 'S');
}


//Esta funcion debe llamarse convertirMayusculas
//La función debe pedir 5 nombres y debe mostrar los nombres capturados pero en MAYÚSCULAS...
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void convertirMayusculas(void){
	char salir;
	string x;
	do{
		getline(cin, x);
	limpiar_pantalla();
	gotoxy(30,0); cout << "******************** Convertir a 'MAYUSCULAS' ********************\n\n\n\n\n";
    string cadena[5];
  for(int k=0; k<5; k++){
	gotoxy(51,4+k*2); std::cout << "- Escriba el nombre #" << k+1;
	gotoxy(51,5+k*2); getline(cin, cadena[k]);
  }
	limpiar_pantalla();
	gotoxy(30,0); cout << "******************** Convertir a 'MAYUSCULAS' ********************\n\n\n\n\n";
	gotoxy(55,4); cout<<"LISTADO";
	gotoxy(42,6); cout << "+-----------------------------+";
  for(int l=0; l<5; l++){
  	gotoxy(42,7+l*4); cout<<"| Nombre #"<<l+1<<": ";
	gotoxy(42,8+l*4);std::cout << "| Original: " + cadena[l];
 	 // Recorrer toda la cadena
  	for (int i = 0; i < cadena[l].length(); i++) {
    	// Y cambiar cada letra por su representación
    	// mayúscula
    	cadena[l][i] = toupper(cadena[l][i]);
  	}
  	gotoxy(42,9+l*4); std::cout << "| Mayuscula: " + cadena[l];
  	gotoxy(42,10+l*4); std::cout << "+-----------------------------+ ";
  }
  cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
        
    }while(salir != 's' and salir != 'S' );
}

//Esta función debe llamarse Dibuja, la cual debe dibujar la figura del juego del gato
//      |    |
//  ____|____|____
//      |    |
//  ____|____|____
//      |    |
//      |    |     
//Deberas usuar un ciclo for para imprimir las lineas
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void Dibuja(void){
	char salir;
    do{
    	limpiar_pantalla();
    	gotoxy(30,0); cout << "******************** Dibujo 'GATO' ********************\n\n\n\n\n";
    	for (int i = 0; i < 3; i++) {
       	 for (int j = 0; j < 3; j++) {
         	   if (i == 1) {
         	       if (j == 1) {
                 	  	  cout << "   ";
               	 } else {
                	     cout << "   ";
               	 }
           	 } else {
            	      cout << "   ";
           	 }
           	 if (j != 2) {
           	       cout << "|";
           	 }
       	 }
       	 cout << endl;
        
       	 if (i != 2) {
       	      cout << "---+---+---" << endl;
       	 }
   	 }
	cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
        
    }while(salir != 's' and salir != 'S' );
}

//Desarrolle una función llamada "Datos" la cual debe capturar el nombre de 5 personas y su dirección
//esta función debe mostar un listado con los datos capturados (Nombre y Domicilio) correspondiente a cada persona
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void Datos() {
    string nombre[5];
    string direccion[5];
    string x;
	char salir;	
		do{
			limpiar_pantalla();
			getline(cin, x);
			gotoxy(30,0); cout << "******************** Recopilador de 'DATOS' ********************\n\n\n\n\n";
        gotoxy(43,4); cout << "Ingrese los datos de las 5 personas:";
        for (int i = 0; i < 5; i++) {
            gotoxy(55,6+i*6); cout << "- Persona #" << i + 1;
            gotoxy(57,7+i*6); cout << "+ Nombre: ";
            gotoxy(58,8+i*6); getline(cin, nombre[i]);
            gotoxy(56,9+i*6); cout << "+ Direccion: ";
            gotoxy(57,10+i*6); getline(cin, direccion[i]);
        }
		limpiar_pantalla();
		gotoxy(30,0); cout << "******************** Recopilador de 'DATOS' ********************\n\n\n\n\n";
        gotoxy(49,4); cout << "*Listado de datos*:";
        gotoxy(47,6); cout << "+---------------------+"; 
        
        for (int i = 0; i < 5; i++) {
            gotoxy(47,7+i*4); cout << "| - Persona #" << i + 1 << ":";
            gotoxy(47,8+i*4); cout << "| + Nombre: " << nombre[i];
            gotoxy(47,9+i*4); cout << "| + Direccion: " << direccion[i];
            gotoxy(47,10+i*4); cout << "+---------------------+"; 
        }
        cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
        
    }while(salir != 's' and salir != 'S' );
}

//Mini juego (incorporado)
void juego(void){
	char salir;
	int palabras, cantidad, oportunidades;
	do{
		limpiar_pantalla();
		palabras=0, cantidad=0, oportunidades=0;
	system("color 0A");
	gotoxy(30,0); cout << "******************** El 'AHORCADO' ********************\n\n\n\n\n";
	gotoxy(40,3); cout << "- Cuantas palabras tiene la frase?: " ; cin>>palabras; cout<<endl;
	int letras[palabras];
	for(int i=0; i<palabras; i++){
		gotoxy(40,i+5);cout << "- Cuantas letras tiene la palabra " << i+1 << "?: " ; cin >> letras[i]; cout<<endl;
		cantidad+=letras[i];
	}
	char letra[palabras][100], respuesta;
	bool correcto[palabras][100], bien, ganar;
	ganar=0, bien=0, correcto[palabras][100]=0;
	for(int i=0; i<palabras; i++){
		for(int j=0; j<letras[i]; j++){
			correcto[i][j]=false;
		}
	}
	system("pause");
	system ("cls");
	gotoxy(30,0); cout << "******************** El 'AHORCADO' ********************\n\n\n\n\n";
	gotoxy(40,6); cout<<"----------------------------------------"; gotoxy(40,9); cout<<"----------------------------------------"; 
	gotoxy(52,7); cout << "Escriba la frase: " << endl;
	for(int i=0; i<palabras; i++){
		for(int j=0; j<letras[i]; j++){
		gotoxy(39,8); cout<<"- ";	gotoxy(41,8); cin >> letra[i][j];
		}
	}
	gotoxy(40,11); cout<<"----------------------------------------"; gotoxy(40,14); cout<<"----------------------------------------"; 
	gotoxy(41,12); cout << "Escriba cuantas oportunidades asignara: " << endl;
	gotoxy(58,13); cout<<"- "; gotoxy(59,13); cin >> oportunidades;
	system("cls");
	
	gotoxy(30,0); cout << "******************** El 'AHORCADO' ********************\n\n\n\n\n";
	gotoxy(46,1); cout<<" ";
	for(int i=0; i<palabras; i++){
		for(int j=0; j<letras[i]; j++){
			cout << "_";
		}
		cout << " ";
	}
	cout << endl << endl;
	
	for(int k=0; k<oportunidades; k++){
		if(ganar==false){
			ganar=true;
			bien=false;
			gotoxy(45,3); cout << oportunidades-k <<  " -Oportunidades Restantes-" << endl << endl;
			gotoxy(40,5); cout << "              ______" << endl;
			gotoxy(40,6); cout << "              |    |" << endl;
			gotoxy(40,7); cout << "              |    |" << endl;
			gotoxy(40,8); cout << "                   |" << endl;
			gotoxy(40,9); cout << "              O    |" << endl;
			gotoxy(40,10); cout << "             /|\\   |" << endl;
			gotoxy(40,11); cout << "              |    |" << endl;
			gotoxy(40,12); cout << "             / \\   |" << endl << endl;
			gotoxy(47,14); cout << "Escriba una letra: ";
			cin >> respuesta;
			system("cls");
			gotoxy(30,0); cout << "******************** El 'AHORCADO' ********************\n\n\n\n\n";
			gotoxy(48,1); cout<<" ";
			for(int i=0; i<palabras; i++){
				for(int j=0; j<letras[i]; j++){
					if((respuesta==letra[i][j]) || (correcto[i][j]==true)){
						correcto[i][j]=true;
						cout << letra[i][j];
					}
					else{
						cout << "_";
						ganar=false;
					}
					if(respuesta==letra[i][j]){
						bien=true;
					}
				}
				cout << " ";
			}
			cout << endl << endl;
			if(bien==true){
				k--;
			}	
		}
	}
	if(ganar==true){
		gotoxy(40,3); cout << "Correcto! La frase es '";
		for(int i=0; i<palabras; i++){
			for(int j=0; j<letras[i]; j++){
				cout << letra[i][j];
			}
			cout << " ";
		}
		cout << "'" << endl << endl;
	}
	else{
		system("color 0C");
		gotoxy(40,5); cout << "           ______" << endl;
		gotoxy(40,6); cout << "           |    |" << endl;
		gotoxy(40,7); cout << "           |    |" << endl;
		gotoxy(40,8); cout << "           O    |" << endl;
		gotoxy(40,9); cout << "          /|\\   |" << endl;
		gotoxy(40,10); cout << "           |    |" << endl;
		gotoxy(40,11); cout << "          / \\   |" << endl;
		gotoxy(40,12); cout << "                |" << endl;
		gotoxy(40,14);cout << "Perdiste ): La frase era '";
		for(int i=0; i<palabras; i++){
			for(int j=0; j<letras[i]; j++){
				cout << letra[i][j];
			}
			cout << " ";
		}
		cout << "'" << endl << endl;
	}
	cout << "\n \n" << "Repetir (cualquier tecla), Regresar MENU Principal ('s'): ";
        cin >> salir;
    }while(salir != 's' and salir != 'S' );
    system("color 07");
}

int main(){
	int dia; string resultado;
    int opc = 0;
    limpiar_pantalla();
    FN_Colors();
    do{
        limpiar_pantalla();
        gotoxy(35,2); cout << " ******************** MENU PRINCIPAL ********************\n\n\n\n\n";
        gotoxy(38,5); cout << "- Promedio de Calificaciones___________________ (1)\n";
        gotoxy(38,6); cout << "- Calculo de Areas_____________________________ (2)\n";
        gotoxy(38,7); cout << "- Calculo del Numero Mayor entre 10____________ (3)\n";
        gotoxy(38,8); cout << "- Dias de la Semana____________________________ (4)\n";
        gotoxy(38,9); cout << "- Convertidor de minusculas a MAYUSCULAS_______ (5)\n";
        gotoxy(38,10); cout << "- Dibujo de Gato (hashtag)_____________________ (6)\n";
        gotoxy(38,11); cout << "- Datos Personales_____________________________ (7)\n";
        gotoxy(38,12); cout << "- Mini Game (Ahorcado)_________________________ (8)\n";
        gotoxy(38,13); cout << "- Opcion de Colores____________________________ (9)\n";
        gotoxy(38,14); cout << "- Salir________________________________________ (0)\n";
        gotoxy(56,16); cout << "  Option: ";
        cin >> opc;
        switch(opc){
            case 1:
                promedio();
                break;
            case 2:
                areas();
                break;
            case 3:
                numeroMasGrande();
                break;
            case 4:
                funcion4(dia, resultado);
                break;
            case 5:
                convertirMayusculas();
                break;
            case 6:
                Dibuja();
                break;
            case 7:
                Datos();
                break;
			case 8:
				juego();
				break;
			case 9:
				return main();
				break;
        }
    }while(opc != 0);

	system("cls");
		gotoxy(52,2); cout<<"DESARROLLADORES";
	gotoxy(40,3); cout<<"----------------------------------------"; gotoxy(40,11); cout<<"----------------------------------------"; 
		gotoxy(43,4); cout<<"- Diaz Infante Gomez Tirzo Antonio";
		gotoxy(43,5); cout<<"- Garcia Chamorro Erick Leonardo";
		gotoxy(43,6); cout<<"- Gonzales Luna Daniela Irazu";
		gotoxy(43,7); cout<<"- Lara Hernandez Cristopher Israel";
		gotoxy(43,8); cout<<"- Munoz Carmona Miguel Angel";
		gotoxy(43,9); cout<<"- Rivera Galvan Mauro Israel";
		gotoxy(43,10); cout<<"- Robledo Mozqueda Karol Abraham";
	gotoxy(40,13); cout<<"----------------------------------------"; gotoxy(40,15); cout<<"----------------------------------------"; 
		gotoxy(40,14); cout<<"Gracias por utilizar nuestro programa :)";
		getch();
    return 0;
}

#include <iostream>
using namespace std;

struct Nodo
{
	int dato;
	Nodo*sig;
};

class Lista
{
private:
	Nodo*lsinicio;
public:
	Lista(); // constructor
	void Insertarls(int); // Insertar valores
	void mostrar_lista(void); // Mostrar lista
	void Sumaelementos(void);//Funcion declarada, más todavía no esta hecha
	void SumaelementosRec(void);//Funcion declarada, más todavía no esta hecha


};

Lista::Lista(void){
	lsinicio=NULL;
}

void Lista::mostrar_lista(void){
	Nodo*s;
	s=lsinicio;

	while(s!=NULL){
		cout<<s->dato<<endl;
		s=s->sig;
	}
}

void Lista::Insertarls(int dato){
	Nodo*nuevo= new Nodo;
	nuevo->dato=dato;
	nuevo->sig=lsinicio;
	lsinicio=nuevo;
}

void ingresodatos(objLista){


		cout<<"Ingrese datos númericos a la lista: "
	while (cin>>dato){
		objLista.Insertarls(dato);
	}
	objLista.mostrar_lista();
}



void Menu(int dato){
	int opcion;
	Lista objLista;

	
		cout <<"<:MENU:>"<<endl;
		cout <<"1. Insertar valores. "<<endl;
		cout <<"2. Mostrar elementos de la lista. "<<endl;
		cout <<"3. Sumar los elementos iterativamente. "<<endl;
		cout <<"4. Sumar los elemntos recursivamente. "<<endl;
		cout <<"5. Salir."<<endl;
		cin >>opcion;

		switch (opcion) {
			case 1: cout<<"Digite los elementos"<<endl;

							ingresodatos(objLista);
							break;
			case 2: cout<<"Los elementos de la lista son: "<<endl;
			 				objLista.mostrar_lista();
							break;
			case 3: cout<<"El resultado de forma iterativa es: ";
			        //Sumaelementos(void);//
							break;
			case 4: cout<<"El resultado de forma iterativa es: ";
			        //SumaelementosRec(void);//
							break;
		}
	}
	


int main()
{
	
	int dato;
	Menu(dato);






	return 0;
}
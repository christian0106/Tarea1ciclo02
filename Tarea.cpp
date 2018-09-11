#include <iostream>
using namespace std;


void Menu();

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
	int SumaelementosRec(int);//Funcion declarada, más todavía no esta hecha


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

void ingresodatos(){
	Lista objLista;
	int dato;
	
		//cout<<"Ingrese datos númericos a la lista: "
	while (cin>>dato){
		objLista.Insertarls(dato);
	}
	//objLista.mostrar_lista();
	//cout<<endl;
	objLista.Sumaelementos();
	Menu();
}
void Lista::Sumaelementos(){
	int Numero=0;
	Nodo*s;
	s=lsinicio;

	while(s!=NULL){
		Numero++;
		//cout<<Numero<<endl;
		s=s->sig; 
	}
	cout<<endl<<"Actualmente en la lista hay "<<Numero<<" elementos."<<endl;
}



//agregando comentario x para subir git 



int main()
{
	int dato;
	Menu();

	return 0;
}

void Menu(){
	int opcion=0;
	Lista objLista;


	if (opcion==0){
		cout<<opcion<<endl;
		cout <<"<:MENU:>"<<endl;
		cout <<"1. Insertar valores. "<<endl;
		cout <<"2. Mostrar elementos de la lista. "<<endl;
		cout <<"3. Sumar los elementos iterativamente. "<<endl;
		cout <<"4. Sumar los elementos recursivamente. "<<endl;
		cout <<"5. Salir."<<endl;
		cin >>opcion;

		switch (opcion) {
			case 1: cout<<"Digite los elementos"<<endl;

							ingresodatos();
							break;
			case 2: cout<<"Los elementos de la lista son: "<<endl;
			 				objLista.mostrar_lista();
							break;
			case 3: //cout<<"El resultado de forma iterativa es: ";
			        		objLista.Sumaelementos();
							break;
			case 4: cout<<"El resultado de forma iterativa es: ";
			        //SumaelementosRec(void);//
							break;
			default: break;
		}
	}

	}	
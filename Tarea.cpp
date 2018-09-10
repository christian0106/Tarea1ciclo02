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

int main(int argc, char const *argv[])
{
	Lista objLista;
	int dato;

	while (cin>>dato){
		objLista.Insertarls(dato);
	}
	objLista.mostrar_lista();


	return 0;
}
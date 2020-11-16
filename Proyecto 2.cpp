//Proyecto 2 tablas de multiplicar con menú
/*Realice un programa en C++ para mostrar las tablas de multiplicar. 
El programa debe de mostrar un menú con las tablas del 1 al 10, el usuario debe de elegir cual tabla desea que se imprima en pantalla, 
el usuario también puede elegir hasta qué número se va a mostrar la tabla, por ejemplo la tabla del 5 hasta el número 20. 
Al final de mostrar la tabla el usuario puede elegir si desea regresar al menú o finalizar el programa. 
Se utiliza If, While o Do While y For. */


using namespace std;
#include<iostream>
#include<locale>

int main()
{
	int prim,seg;
	char opc='s';
	setlocale(LC_CTYPE,"Spanish");
	
	do
	{
	
	cout<<"\n \t Ingrese la tabla de multiplicar que desee visualizar"<<endl
		<<"\t  "; cin>>prim;
	cout<<"\n \t Ingrese hasta que número desea visualizar"<<endl
		<<"\t "; cin>>seg;
	cout<<endl<<endl;	
	for(int i=1; i<=seg; i++)
	{
		cout<<"\t \t"<< prim <<" X "<< i<<" = "<<prim*i<<endl;
	}//Fin de for
	
	cout<<"\n \t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"
		<<" \n \t Si desea ingresar nuevos datos presione S, sí desea salir presione N "<<endl
		<<"\n \t °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl
		<<"\t \t \t En espera de su respuesta. "; cin>>opc; cout<<endl;

	system("cls");
	}while(opc=='S' || opc=='s');
	
	system("pause");
	return 1;
}//Fin de main

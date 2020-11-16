//Proyecto 3: Programa para calcular SUMA Y RESTA DE MATRICES

/*Dos matrices de las mismas dimensiones se puede sumar o restar; la suma o resta de dos matrices de diferentes dimensiones no.
La suma y resta de dos matrices de las mismas dimensiones es una matriz de las mismas dimensiones y 
se obtiene sumando o restando sus elementos correspondientes.*/


using namespace std;
#include<iostream>
#include<locale.h>


int main()
{
	setlocale(LC_CTYPE,"Spanish");
	char opc='+', opc2='N';
	int FilasA,ColumnasA,FilasB,ColumnasB;
	cout<<"\n \t \t Calculadora para suma y resta de dos matrices"<<endl;
	do
	{
	
	cout<<"\n \t Ingrese el numero de las matrices"<<endl;
	cout<<"\t Ingrese las filas: ";
		cin>>FilasA;
	cout<<" \t Ingrese las columnas: ";
		cin>>ColumnasA;

	FilasB=FilasA;
	ColumnasB=ColumnasA;
	
	double MatrizA[FilasA][ColumnasA],MatrizB[FilasB][ColumnasB],MatrizC[FilasB][ColumnasB];
	
	cout<<"\n \n \t Aperturando espacios para ingresar datos de matriz... "<<endl
		<<"\t Espacios aperturados"<<endl<<endl;
	system("pause");
	system("cls");
	do 
	{
	cout<<"\n \t Si desea realizar una suma ingrese el signo '+', si desea realizar una resta ingrese el sgino'-': ";
	cin>>opc;
	
	switch (opc)
	{
		case '+':
		system("cls");
		cout<<"\n \t La opción que selecciono es suma de matrices"<<endl
			<<"\n \t Ingrese los datos de la Matriz A: "<<endl<<endl;
		
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t Ingrese el valor ["<<i<<"] ["<<j<<"]: ";
				cin>>MatrizA[i][j];
			}
		}//Fin de ingreso de datos de matriz A
		
		cout<<"\n \t Ingrese los datos de la Matriz B: "<<endl<<endl;

		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t Ingrese el valor ["<<i<<"] ["<<j<<"]: ";
				cin>>MatrizB[i][j];
			}
		}//Fin de ingreso de datos de matriz B	
		cout<<"\n \t Creando matriz... "<<endl
			<<"\t Matrices creadas. "<<endl<<endl;
	system("pause");
	system("cls");			
		cout<<"\n \t  Matriz A: "<<endl<<endl;
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t "<<MatrizA[i][j]<<" ";
			}
			cout<<endl;
		}//Fin de for imprimir datos matriz A
		
		cout<<"\n \t  Matriz B: "<<endl<<endl;
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t "<<MatrizB[i][j]<<" ";
			}
			cout<<endl;
		}//Fin de for imprimir datos matriz B		
			
		cout<<"\n \t La matriz resultante es: "<<endl<<endl;
		
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				MatrizC[i][j]=(MatrizA[i][j])+(MatrizB[i][j]);
				cout<<"\t \t "<<MatrizC[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<"\t Si desea ingresar una nueva matriz ingrese N, si desea salir ingrese S"<<endl
			<<"\t En espera de su respuesta... ";cin>>opc2;cout<<endl;system("cls");		
		break;
		case '-':
			
		system("cls");
		cout<<"\n \t La opción que selecciono es resta de matrices"<<endl;
		cout<<"\n \t Ingrese los datos de la Matriz A: "<<endl<<endl;
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t Ingrese el valor ["<<i<<"] ["<<j<<"]: ";
				cin>>MatrizA[i][j];
			}
		}//Fin de ingreso de datos de matriz A
		
		cout<<"\n \t Ingrese los datos de la Matriz B: "<<endl<<endl;

		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t Ingrese el valor ["<<i<<"] ["<<j<<"]: ";
				cin>>MatrizB[i][j];
			}
		}//Fin de ingreso de datos de matriz B			
		cout<<"\n \t Creando matriz... "<<endl
			<<"\t Matrices creadas..."<<endl<<endl;
	system("pause");
	system("cls");			
		cout<<"\n \t  Matriz A: "<<endl<<endl;
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t "<<MatrizA[i][j]<<" ";
			}
			cout<<endl;
		}//Fin de for imprimir datos matriz A
		
		cout<<"\n \t  Matriz B: "<<endl<<endl;
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				cout<<" \t "<<MatrizB[i][j]<<" ";
			}
			cout<<endl;
		}//Fin de for imprimir datos matriz B		
			
		cout<<"\n \t La matriz resultante es: "<<endl<<endl;
		
		for(int i=0; i<=(FilasA-1); i++)
		{
			for(int j=0; j<=(ColumnasA-1); j++)
			{
				MatrizC[i][j]=(MatrizA[i][j])-(MatrizB[i][j]);
				cout<<"\t \t "<<MatrizC[i][j]<<" ";
			}
			cout<<endl;
		}		
		
		cout<<endl<<"\t Si desea ingresar una nueva matriz ingrese N, si desea salir ingrese S"<<endl
			<<"\t En espera de su respuesta... ";cin>>opc2;cout<<endl; system("cls");
		break;
		default:
			cout<<"\n \t \t La opción no es valida, intente de nuevo."<<endl;
			system("pause");
			system("cls");
	
		
	}

	}while(opc!='+' & opc!='-');
	}while(opc2=='N' || opc2=='n' );
	
	

	
	
	system("pause");
	return 1;	
}//Fin de main

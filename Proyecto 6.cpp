//Proyecto 6. Proyecto Video Azul Web.
/*Azul Web acaba de sacar una nueva plataforma de video, donde se van a publicar pel�culas. Las pel�culas tiene los siguientes atributos; 
Nombre de la pel�cula y Fecha de lanzamiento.
Crea un programa en C++ que haga lo siguiente:
1.- Permitir guardar 20 registros en una matriz; Nombre de pel�cula y a�o de lanzamiento.

2.- Un men� que nos va a dar tres opciones:

>> a) Mostrar pel�culas desde las m�s viejas a las m�s nuevas.

>> b) Mostrar pel�culas desde las m�s nuevas a las m�s viejas.

>> c) Mostrar pel�culas de un a�o en concreto.

3.- Opci�n de regresar al men� o salir del programa. */


using namespace std;
#include<iostream>
#include<locale.h>
#include<string.h>

int main()
{
	
	char Pelicula[22][100], Pelicula1[2][100], opcw;
	int Anhio[20],i,opcs,aux=0,contador=0,aux2,cont=0;
	setlocale(LC_CTYPE,"Spanish");
	
	cout<<"\n \t \t \t \t  Bienvenido a su archivero de Pel�culas"<<endl;
	cout<<"\t \t Se le va a solicitar el nombre y a�o de lanzamiento de la pelicula para poderlos guardar"<<endl;
	system("pause");
	system("cls");
	
	for(i=0; i<=19; i++)
	{
		cout<<"\n \t Ingrese el nombre de la pelicula #"<<i+1<<": ";
		cin.getline(Pelicula[i],100,'\n');
		cout<<"\t Ingese el a�o de lanzamiento: ";
		cin>>Anhio[i];
		fflush(stdin);
	}//Fin de for de ingreso de datos de peliculas
	
	system("pause");
	system("cls");
	
	//------------------------------------------INICIO DE METODO BURBUJA-----------------------
	
	for(int i=0; i<=19; i++)
	{
		for(int j=0; j<=19; j++)
			{
				if(Anhio[j]>Anhio[j+1])
				{
					aux=Anhio[j];
					Anhio[j]=Anhio[j+1];
					Anhio[j+1]=aux;
					 contador=1;
						if(contador==1)
						{
							strcpy(Pelicula1[0],Pelicula[j]);
							strcpy(Pelicula[j],Pelicula[j+1]);
							strcpy(Pelicula[j+1],Pelicula1[0]);
						}
							
				}//Fin de if para metdo de acomodo
						
			}//Fin de for J
			
			if(contador==0)	
			{
				i=19;
			}else
			{
				contador=0;
			}//Fin de if para simplificar metodo burbuja
					
	}//Fin de for metodo burbuja i
	
	//------------------------------------------FIN DE METODO BURBUJA-----------------------
	
	do
	{
		cout<<"\n \t \t Ingrese la opci�n que desea visualizar: "<<endl
			<<"\t 1. Mostrar pel�culas desde la m�s antigua a la mas reciente."<<endl
			<<"\t 2. Mostrar pel�culas desde la m�s reciente a la mas antigua."<<endl
			<<"\t 3. Mostrar pel�culas de un a�o en concreto."<<endl
			<<"\t En espera de su respuesta: ";cin>>opcs;
			
		switch (opcs)
		{
			case 1:
				system("cls");
				cout<<"\n \t \t Esogi� opci�n 1, a continuaci�n se mostrar� el listado de las pel�culas: "<<endl;
				for(i=0; i<=19; i++)
				{
					cout<<"\t *-Titulo: "<<Pelicula[i]<<". A�o de lanzamiento: "<<Anhio[i]<<endl;
				}//Fin de for para imprimir
				break; 
			case 2:
				system("cls");
				cout<<"\n \t \t Esogi� opci�n 2, a continuaci�n se mostrar� el listado de las pel�culas: "<<endl;
				for(i=19; i>=0; i--)
				{
					cout<<"\t *-Titulo: "<<Pelicula[i]<<". A�o de lanzamiento: "<<Anhio[i]<<endl;
				}//Fin de for para imprimir
				break;
			
			case 3:
				system("cls");
				cout<<"\n \t Ingrese el a�o para verificar si hay una pelicula existente: "; 
				cin>>aux2;
					
					for(int i=0; i<=19; i++)
					{
							Anhio[i];
							Pelicula[i];
							if(aux2==Anhio[i])
							{	
								cout<<"\n \t Se localiz� la pel�cula: "<<endl
									<<"\t Nombre: "<<Pelicula[i]<<endl
									<<"\t Correspondiente al a�o ingresado: "<<Anhio[i];
									i=19;
									cont=1;
							}else
							{
								cont=0;
							}
					}//Fin de for
					if(cont==0)
					{
						cout<<"\n \t No se encontr� ninguna pelicula del a�o: "<<aux2<<endl;
					}//Fin de if por si no hay coincidencia
					
				break;
			
			default: 
			cout<<"\n \t La opci�n que usted seleccion� no es valida, intentelo nuevamente. "<<endl;	
		}//Fin de switch
		
		cout<<"\n \n \t Desea regresar al men� principal presione R y si desea salir presione S: ";
		cin>>opcw;
	}while(opcw=='R' || opcw=='r');
	
	
	
	
	system("pause");
	return 1;
	
}//Fin de main

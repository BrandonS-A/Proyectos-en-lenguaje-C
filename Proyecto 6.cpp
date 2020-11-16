//Proyecto 6. Proyecto Video Azul Web.
/*Azul Web acaba de sacar una nueva plataforma de video, donde se van a publicar películas. Las películas tiene los siguientes atributos; 
Nombre de la película y Fecha de lanzamiento.
Crea un programa en C++ que haga lo siguiente:
1.- Permitir guardar 20 registros en una matriz; Nombre de película y año de lanzamiento.

2.- Un menú que nos va a dar tres opciones:

>> a) Mostrar películas desde las más viejas a las más nuevas.

>> b) Mostrar películas desde las más nuevas a las más viejas.

>> c) Mostrar películas de un año en concreto.

3.- Opción de regresar al menú o salir del programa. */


using namespace std;
#include<iostream>
#include<locale.h>
#include<string.h>

int main()
{
	
	char Pelicula[22][100], Pelicula1[2][100], opcw;
	int Anhio[20],i,opcs,aux=0,contador=0,aux2,cont=0;
	setlocale(LC_CTYPE,"Spanish");
	
	cout<<"\n \t \t \t \t  Bienvenido a su archivero de Películas"<<endl;
	cout<<"\t \t Se le va a solicitar el nombre y año de lanzamiento de la pelicula para poderlos guardar"<<endl;
	system("pause");
	system("cls");
	
	for(i=0; i<=19; i++)
	{
		cout<<"\n \t Ingrese el nombre de la pelicula #"<<i+1<<": ";
		cin.getline(Pelicula[i],100,'\n');
		cout<<"\t Ingese el año de lanzamiento: ";
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
		cout<<"\n \t \t Ingrese la opción que desea visualizar: "<<endl
			<<"\t 1. Mostrar películas desde la más antigua a la mas reciente."<<endl
			<<"\t 2. Mostrar películas desde la más reciente a la mas antigua."<<endl
			<<"\t 3. Mostrar películas de un año en concreto."<<endl
			<<"\t En espera de su respuesta: ";cin>>opcs;
			
		switch (opcs)
		{
			case 1:
				system("cls");
				cout<<"\n \t \t Esogió opción 1, a continuación se mostrará el listado de las películas: "<<endl;
				for(i=0; i<=19; i++)
				{
					cout<<"\t *-Titulo: "<<Pelicula[i]<<". Año de lanzamiento: "<<Anhio[i]<<endl;
				}//Fin de for para imprimir
				break; 
			case 2:
				system("cls");
				cout<<"\n \t \t Esogió opción 2, a continuación se mostrará el listado de las películas: "<<endl;
				for(i=19; i>=0; i--)
				{
					cout<<"\t *-Titulo: "<<Pelicula[i]<<". Año de lanzamiento: "<<Anhio[i]<<endl;
				}//Fin de for para imprimir
				break;
			
			case 3:
				system("cls");
				cout<<"\n \t Ingrese el año para verificar si hay una pelicula existente: "; 
				cin>>aux2;
					
					for(int i=0; i<=19; i++)
					{
							Anhio[i];
							Pelicula[i];
							if(aux2==Anhio[i])
							{	
								cout<<"\n \t Se localizó la película: "<<endl
									<<"\t Nombre: "<<Pelicula[i]<<endl
									<<"\t Correspondiente al año ingresado: "<<Anhio[i];
									i=19;
									cont=1;
							}else
							{
								cont=0;
							}
					}//Fin de for
					if(cont==0)
					{
						cout<<"\n \t No se encontró ninguna pelicula del año: "<<aux2<<endl;
					}//Fin de if por si no hay coincidencia
					
				break;
			
			default: 
			cout<<"\n \t La opción que usted seleccionó no es valida, intentelo nuevamente. "<<endl;	
		}//Fin de switch
		
		cout<<"\n \n \t Desea regresar al menú principal presione R y si desea salir presione S: ";
		cin>>opcw;
	}while(opcw=='R' || opcw=='r');
	
	
	
	
	system("pause");
	return 1;
	
}//Fin de main

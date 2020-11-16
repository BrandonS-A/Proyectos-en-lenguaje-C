//Proyecto 7. Sistema para guardar y buscar empleados en una empresa.

/*Los números de empleados van del 1 al 20, pero no se ingresan de forma consecutiva, el usuario lo ingresa aleatoriamente, por ejemplo:
 primero ingresa el número 5, después ingresa el número 2, etc.

Una vez que los datos estén guardados el usuario desea tener las siguientes funciones:

>> Buscar el nombre de un empleado por su número de empleado.

>> Buscar el número de empleado por su nombre.

>> Saber si un usuario no existe.

>> Saber si hay nombres similares entre sus empleados.

>> Mostrar empleados de forma ascendente por número de empleado.

>> Mostrar empleados de forma descendente por número de empleado.

Crea un programa en C++ que de solución a este problema. Solo utiliza lo aprendido en los módulos anteriores.*/


using namespace std;
#include<iostream>
#include<string.h>
#include<locale.h>

int main()
{
	int Numemple[22], busnumemple,auxiliarEmple[22],cont=0,i=0,AUX2=0,contador=0,c=0;
	char Nomemple[22][30],opcw='R', apoyo='F', ApoNom[2][30],AuxNom[22][30];
	int opcs;
	setlocale(LC_CTYPE, "Spanish");
	for(int i=0; i<=19; i++)
	{
		cout<<"\n \t Ingrese el número ID de empleado: ";
		cin>>Numemple[i];
		fflush(stdin);
		cout<<"\t Ingrese el primer nombre del empleado: ";
		cin.getline(Nomemple[i],30,'\n');
	}//Fin de for para ingreso de información
	system("cls");
	do
	{
		cout<<"\n \t Ingrese el número de la acción que desee realizar: "<<endl
			<<"\t 1. Buscar el nombre de un empleado por su número de empleado."<<endl
			<<"\t 2. Buscar el número de empleado por su nombre."<<endl
			<<"\t 3. Saber si un usuario no existe."<<endl
			<<"\t 4. Saber si hay nombres similares entre sus empleados."<<endl
			<<"\t 5. Mostrar empleados de forma ascendente por número de empleado."<<endl
			<<"\t 6. Mostrar empleados de forma descendente por número de empleado."<<endl
			<<"\t \t En espera de su respuesta: "; cin>>opcs;
		switch (opcs)
		{
			case 1:
				cout<<"\n \t Para buscar al empleado por favor ingrese su número ID correspondiente. "<<endl
					<<"\t ID: "; cin>>busnumemple;
					for(i=0; i<=19; i++)
					{
						Numemple[i];
						Nomemple[i];
						if(Numemple[i]==busnumemple)
						{
							cout<<"\n \t El nombre del empleado con ID #"<<busnumemple<<" es: "<<Nomemple[i]<<endl<<endl;
								
								cont=1;
								
						}//Fin de for buscador
					}
										
					if(cont==0)
					{
						cout<<"\n \t No se econtraron coincidencias"<<endl;
					}else
					{
						cont=0;
					}
					break;
			case 2:
				fflush(stdin);
				cout<<"\n \t Para localizar el número ID del empleado por favor ingrese su primer nombre"<<endl
					<<"\t Nom: "; cin.getline(ApoNom[0], 30, '\n');
					
				for(i=0; i<=19; i++)
					{
						
						Nomemple[i];
						Numemple[i];
						if(strcmp(Nomemple[i],ApoNom[0])==0)
						{
						
							cout<<"\n \t Se localizó al empleado "<<ApoNom[0]<<endl
								<<" \t Su número ID es: "<<Numemple[i]<<endl;
								
								cont=1;
						}
					}//Fin de for buscador
						if(cont==0)
					{
						cout<<"\n \t No se econtraron coincidencias"<<endl;
					}else
					{
						cont=0;
					}
					
					break;
			case 3:
				cout<<"\n \t Para verificar si el usuario existe ingrese un número ID. "<<endl
					<<"\t ID: "; cin>>busnumemple;
					for(i=0; i<=19; i++)
					{
						Numemple[i];
						Nomemple[i];
						if(Numemple[i]==busnumemple)
						{
							cout<<"\n \t El empleado si existe, su nombre es: "<<Nomemple[i]<<endl<<endl;
								
								cont=1;
								
						}//Fin de if buscador
					}//Fin de for buscador
										
					if(cont==0)
					{
						cout<<"\n \t El empleado no existe en la base de datos. "<<endl;
					}else
					{
						cont=0;
					}	//Fin de if else		
					break;
			case 4:
				fflush(stdin);
					 c=0;
				char aux[21];
					cout<<"\n  \t Ingrese el nombre para saber si hay similares en sistema: ";
					cin.getline(ApoNom[1],30,'\n');
					for(i=0; i<=19; i++)
					{
						Nomemple[i];
						if(strcmp(Nomemple[i],ApoNom[1])==0)
						{
							c++;
							
						}//Fin de if contador						
					}//Fin de for
					
					if(c==1)
					{
						cout<<"\n \t El nombre no se repite ninguna vez"<<endl<<endl;
					} else
					{
						cout<<"\n \t El nombre aparece "<< c <<" veces en sistema."<<endl<<endl;
					}//Fin de if
					break;
			case 5:
				cout<<"\n \t Se mostrarán los número de ID de forma ascendente. "<<endl<<endl;
				for(i=0; i<=19; i++)
				{
					for(int j=0; j<=19; j++)
					{

					if(Numemple[j]>Numemple[j+1])
					{
						AUX2=Numemple[j];
						Numemple[j]=Numemple[j+1];
						Numemple[j+1]=AUX2;
						contador=1;
						if(contador==1)
						{
							strcpy(AuxNom[0],Nomemple[j]);
							strcpy(Nomemple[j],Nomemple[j+1]);
							strcpy(Nomemple[j+1],AuxNom[0]);
						}
						
					}
					}//Fin de for J
					
				if(contador==0)
				{
					i=19;
				}else
				{
					contador=0;
				}//Fin de if para simplifiicar metodo burbuja
								
				}//Fin de for 

				for(int i=0; i<=19; i++)
				{	
					cout<<"\t "<<Nomemple[i]<<" tiene el ID #: "<<Numemple[i]<<endl;
			
				
				}//Fin de for para imprimir
			
				break;	
			
			case 6:
				cout<<"\n \t Se mostrarán los número de ID de forma Descendetes. "<<endl<<endl;
				for(i=0; i<=19; i++)
				{
					for(int j=0; j<=19; j++)
					{

					if(Numemple[j]>Numemple[j+1])
					{
						AUX2=Numemple[j];
						Numemple[j]=Numemple[j+1];
						Numemple[j+1]=AUX2;
						contador=1;
						if(contador==1)
						{
							strcpy(AuxNom[1],Nomemple[j]);
							strcpy(Nomemple[j],Nomemple[j+1]);
							strcpy(Nomemple[j+1],AuxNom[1]);
						}
						
					}
					}//Fin de for J
					
				if(contador==0)
				{
					i=19;
				}else
				{
					contador=0;
				}//Fin de if para simplifiicar metodo burbuja
								
				}//Fin de for 

				for(int i=19; i>=0; i--)
				{	
					cout<<"\t "<<Nomemple[i]<<" tiene el ID #: "<<Numemple[i]<<endl;
			
				
				}//Fin de for para imprimir
			
				break;			
					default:
						cout<<"\n \t La opción no existe "<<endl<<endl;
					
			
			
		}//Fin de switch

		cout<<"\n \t\t Si desea regresar al menú principal presione R y si desea salir S: ";
		cin>>opcw;
		cout<<endl<<endl;
	}while(opcw=='r' || opcw=='R');
	system("cls");
	
		cout<<"\n \t Que tenga buen día. "<<endl<<endl;
	
	system("pause");
	return 1;
}//Fin de main

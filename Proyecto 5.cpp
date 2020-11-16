//Proyecto 5  Guardar datos de alumnos de una escuela.
/*Crea un programa que ingrese los datos de 20 alumnos, nombre, apellido, nombre de materia 1, calificación materia 1,
nombre de materia 2, calificación materia 2, nombre de materia 3, calificación materia 3, nombre de materia 4,
calificación materia 4, nombre de materia 5, calificación materia 5. Y después calcular el promedio general de cada alumno,
y promedio final del grupo de 20 alumnos.
Mostrar en pantalla.
1. Nombre con apellido del alumno.
2. Promedio general de alumno.
3. Materia con mayor calificación.
4. Materia con menor calificación.
Y al final el promedio general del grupo.
Una vez que se muestre en pantalla, darle la opción al usuario si todos los datos están correctos, y de no ser así se pueda modificar 
el dato erróneo y posteriormente mostrar de nuevo los datos en pantalla ya con los datos correctos. */


using namespace std;
#include<iostream>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	char Nombre[21][41], Apellido[21][42], Materia[5][20],Nombrecom[21][82], Contador1[21], Contador2[21],opc='s',nl='T';
	double Cal[21][5], max[21][4]={},sum[21][8]={},prom[21], promt,opc2;
	int ops,op,n;
	
	
	cout<<"\n \t \t \t Sistema para ingreso de calificaciones"<<endl<<endl
		<<"\t Ingrese 5 materias de las cuales se van a ingresar calificaciones"<<endl;
		
	//---------------------------------Ingreso de materias-------------------------
	for(int i=0; i<=4; i++)
	{
		cout<<"\t Ingrese la materia #"<<i+1<<": ";
		cin.getline(Materia[i],20,'\n');
		
		
	}//Fin de ingeso de materias
	system("cls");
	//----------------------Ingreso de nombre de alumno--------------------------
	
	for(int i=0; i<=19; i++)
	{
		cout<<" \t Ingrese el nombre del alumno #"<<i+1<<": ";
		cin.getline(Nombre[i],41,'\n');
		cout<<" \t Ingrese el apellido: ";
		cin.getline(Apellido[i],41,'\n');
		fflush(stdin);	
		strcpy(Nombrecom[i],Nombre[i]);
		strcat(Nombrecom[i],Apellido[i]);
		
		cout<<endl;
	}
		system("cls");
	//-----------------------Ingreso de calificaciones-----------------------
		cout<<endl;
	for(int i=0; i<=19; i++)
	{
		cout<<"\t Alumno: "<<Nombrecom[i]<<endl;
		for(int j=0; j<=4; j++)
		{
			cout<<"\t \t Ingrese la calificación de la materia "<<Materia[j]<<": ";
			cin>>Cal[i][j];
			
			
			sum[i][6]=sum[i][6]+Cal[i][j];
			if(Cal[i][j]>max[i][1])
			{
				
				max[i][1]=Cal[i][j];
				Contador1[i]=j+1;
				
			}//Fin de if
			
		}//Fin de for anidado
		prom[i]=sum[i][6]/5;
		promt=promt+prom[i];
		
		
		cout<<endl;
	}//Fin de for principal
	
	promt=promt/20;
	//---------------------------Numero menor-----------------------------------------------
	for(int i=0; i<=19; i++)
	{
		max[i][2]=max[i][1];
		for(int j=0; j<=4; j++)
		{
			if(Cal[i][j]<max[i][2])
			{
			max[i][2]=Cal[i][j];
			Contador2[i]=j+1;
			}//Fin de if
		}//Fin de for anidado 
	}//Fin de for principal
	 system("pause");
	 system("cls");
	//--------------------------------Imprimir datos------------------------------------------------------
	for(int i=0; i<=19; i++)
	{
		for(int j=0; j<=4; j++)
		{
			
			cout<<"\n \t El promedio del alumno "<<Nombrecom[i]<<" es: "<<prom[i]<<endl
				<<"\t La calificación mayor es: "<<max[i][1]<<" de la materia: ";
					if(Contador1[i]==1)
					{
						cout<<Materia[0]<<endl;
					}else if(Contador1[i]==2)
					{
						cout<<Materia[1]<<endl;
					}else if(Contador1[i]==3)
					{
						cout<<Materia[2]<<endl;
					}else if(Contador1[i]==4)
					{
						cout<<Materia[3]<<endl;
					}else 
					{
						cout<<Materia[4]<<endl;
					}
				cout<<"\t La calificación menor es: "<<max[i][2]<<" de la materia: ";
					if(Contador2[i]==1)
					{
						cout<<Materia[0]<<endl;
					}else if(Contador2[i]==2)
					{
						cout<<Materia[1]<<endl;
					}else if(Contador2[i]==3)
					{
						cout<<Materia[2]<<endl;
					}else if(Contador2[i]==4)
					{
						cout<<Materia[3]<<endl;
					}else 
					{
						cout<<Materia[4]<<endl;
					}
				cout<<"\t Las calificaciones del alumno son:"<<endl;
				j=4;
		}
	
		for(int j=0; j<=4; j++)
		{
			cout<<"\t \t "<<Materia[j]<<"= "<<Cal[i][j]<<endl;
		}//Fin de for anidado para materias
		cout<<endl;	
	}//Fin de for principal
			
	cout<<"\n \t-----------------------------------------------------------------------"
		<<"\n \t \t \t El promedio general del grupo es: "<<promt<<endl
		<<"\n \t-----------------------------------------------------------------------"<<endl<<endl;
		
		
//--------------------------------FIN DE IMPRIMIR--------------------------------------------------------------------		
		cout<<"\t \t Si desea modificar algun datos presione S, si desea salir presiones N: ";
		cin>>opc;
		cout<<endl;
		
		system("cls");
		if(opc=='s'||opc=='S')
		{
			do 
			{
			cout<<"\n \t Si desea corregir el nombre de una materias presione 1"<<endl
				<<"\t Si desea corregir el nombre de un alumno presione 2"<<endl
				<<"\t Si desea corregir alguna calificacion presione 3"<<endl
				<<"\t En espera de respuesta... "; cin>>ops;
				
				switch(ops)
				
				{
				
				case 1:
					cout<<"\n \t Ingrese el  numero de la materia a corregir: "<<endl;
					
						for(int i=0; i<=4; i++)
						{
							cout<<" #"<<i+1<<": "<<Materia[i]<<endl;
						}//Fin de mostrar materias
						
					cout<<"\n \t Esperando respuesta: ";cin>>op;
					

					for(int i=0; i<=4; i++)
							{
								fflush(stdin);
								op=op-1;
								cout<<"\n \t Ingrese el nombre corregido de la materia: ";
								cin.getline(Materia[op],20,'\n');cout<<endl;
																
							i=4;

						}//Fin de ingeso de materias
						
						
						
					for(int i=0; i<=19; i++)
					{
						for(int j=0; j<=4; j++)
					{
			
					cout<<"\n \t El promedio del alumno "<<Nombrecom[i]<<" es: "<<prom[i]<<endl
						<<"\t La calificación mayor es: "<<max[i][1]<<" de la materia: ";
						if(Contador1[i]==1)
						{
							cout<<Materia[0]<<endl;
						}else if(Contador1[i]==2)
						{
							cout<<Materia[1]<<endl;
						}else if(Contador1[i]==3)
						{
							cout<<Materia[2]<<endl;
						}else if(Contador1[i]==4)
						{
							cout<<Materia[3]<<endl;
						}else 
						{
							cout<<Materia[4]<<endl;
						}
					cout<<"\t La calificación menor es: "<<max[i][2]<<" de la materia: ";
						if(Contador2[i]==1)
						{
							cout<<Materia[0]<<endl;
						}else if(Contador2[i]==2)
						{
							cout<<Materia[1]<<endl;
						}else if(Contador2[i]==3)
						{
							cout<<Materia[2]<<endl;
						}else if(Contador2[i]==4)
						{
							cout<<Materia[3]<<endl;
						}else 
						{
							cout<<Materia[4]<<endl;
						}
					cout<<"\t Las calificaciones del alumno son:"<<endl;
					j=4;
			}
	
				for(int j=0; j<=4; j++)
				{
						cout<<"\t \t "<<Materia[j]<<"= "<<Cal[i][j]<<endl;
				}//Fin de for anidado para materias
					cout<<endl;	
				}//Fin de for principal
			
			cout<<"\n \t-----------------------------------------------------------------------"
				<<"\n \t \t \t El promedio general del grupo es: "<<promt<<endl
				<<"\n \t-----------------------------------------------------------------------"<<endl<<endl;					
				
			 break;	
			case 2:
				cout<<"\n \t Ingrese el numero del alumno para corregir su nombre: "<<endl;
				for(int i=0; i<=19; i++)
				{
					cout<<"\t #"<<i+1<<"-"<<Nombrecom[i]<<endl;
				}
				cout<<"\n \t Esperando su respuesta... "; cin>>n;cout<<endl;
				
			for(int i=0; i<=19; i++)
				{
					n=n-1;
					fflush(stdin);
					cout<<" \t Ingrese el nombre del alumno: ";
					cin.getline(Nombre[n],41,'\n');
					cout<<" \t Ingrese el apellido: ";
					cin.getline(Apellido[n],41,'\n');
					fflush(stdin);	
					strcpy(Nombrecom[n],Nombre[n]);
					strcat(Nombrecom[n],Apellido[n]);
					
						i=19;
				}	
				
			
//---------------------------------------------Imprimir---------------------------------------
			
					for(int i=0; i<=19; i++)
						{
							for(int j=0; j<=4; j++)
							{
								
								cout<<"\n \t El promedio del alumno "<<Nombrecom[i]<<" es: "<<prom[i]<<endl
									<<"\t La calificación mayor es: "<<max[i][1]<<" de la materia: ";
										if(Contador1[i]==1)
										{
											cout<<Materia[0]<<endl;
										}else if(Contador1[i]==2)
										{
											cout<<Materia[1]<<endl;
										}else if(Contador1[i]==3)
										{
											cout<<Materia[2]<<endl;
										}else if(Contador1[i]==4)
										{
											cout<<Materia[3]<<endl;
										}else 
										{
											cout<<Materia[4]<<endl;
										}
									cout<<"\t La calificación menor es: "<<max[i][2]<<" de la materia: ";
										if(Contador2[i]==1)
										{
											cout<<Materia[0]<<endl;
										}else if(Contador2[i]==2)
										{
											cout<<Materia[1]<<endl;
										}else if(Contador2[i]==3)
										{
											cout<<Materia[2]<<endl;
										}else if(Contador2[i]==4)
										{
											cout<<Materia[3]<<endl;
										}else 
										{
											cout<<Materia[4]<<endl;
										}
									cout<<"\t Las calificaciones del alumno son:"<<endl;
									j=4;
							}
						
							for(int j=0; j<=4; j++)
							{
								cout<<"\t \t "<<Materia[j]<<"= "<<Cal[i][j]<<endl;
							}//Fin de for anidado para materias
							cout<<endl;	
						}//Fin de for principal
								
						cout<<"\n \t-----------------------------------------------------------------------"
							<<"\n \t \t \t El promedio general del grupo es: "<<promt<<endl
							<<"\n \t-----------------------------------------------------------------------"<<endl<<endl;	
									
					break;	
				case 3:
					
					cout<<"\n \t Si desea corregir todas las calificaciones ingrese T y si desea corregir el de una sola materia presione U"
						<<"\n \t \t Esperando su respuesta... ";cin>>nl;
						
						if(nl=='U'||nl=='u')
						
						{
					cout<<"\n \t Ingrese el numero de la materia que desee corregir la calificación"<<endl;					
						for(int i=0; i<=4; i++)
						{
							cout<<" #"<<i+1<<": "<<Materia[i]<<endl;
						}//Fin de mostrar materias
						
						cout<<"\n \t Esperando su respuesta... "; cin>>op;
						op=op-1;
						for(int i=0; i<=19; i++)
							{
								
								cout<<"\t Alumno: "<<Nombrecom[i]<<endl;
						for(int j=0; j<=4; j++)
						{
							cout<<"\t \t Ingrese la calificación de la materia "<<Materia[op]<<": ";
							cin>>Cal[i][op];
							j=4;
			
						}//Fin de for anidado
	
		
									cout<<endl;
								}//Fin de for principal
	
					}else if(nl=='T'||nl=='t')
					{
					for(int i=0; i<=19; i++)
							{
								op=op-1;
								cout<<"\t Alumno: "<<Nombrecom[i]<<endl;
						for(int j=0; j<=4; j++)
						{
							cout<<"\t \t Ingrese la calificación de la materia "<<Materia[j]<<": ";
							cin>>Cal[i][j];
			
						}//Fin de for anidado	
					}//FIN DE FOR PRINCIPAL
			
					} else
					{
						cout<<"\n \t La opción seleccionada no existe"<<endl;
					}// Fin de iF ELSE
					
//_____________________________________--IMPRIMIR_________________________________________________________

					for(int i=0; i<=19; i++)
	{
		for(int j=0; j<=4; j++)
		{
			
			cout<<"\n \t El promedio del alumno "<<Nombrecom[i]<<" es: "<<prom[i]<<endl
				<<"\t La calificación mayor es: "<<max[i][1]<<" de la materia: ";
					if(Contador1[i]==1)
					{
						cout<<Materia[0]<<endl;
					}else if(Contador1[i]==2)
					{
						cout<<Materia[1]<<endl;
					}else if(Contador1[i]==3)
					{
						cout<<Materia[2]<<endl;
					}else if(Contador1[i]==4)
					{
						cout<<Materia[3]<<endl;
					}else 
					{
						cout<<Materia[4]<<endl;
					}
				cout<<"\t La calificación menor es: "<<max[i][2]<<" de la materia: ";
					if(Contador2[i]==1)
					{
						cout<<Materia[0]<<endl;
					}else if(Contador2[i]==2)
					{
						cout<<Materia[1]<<endl;
					}else if(Contador2[i]==3)
					{
						cout<<Materia[2]<<endl;
					}else if(Contador2[i]==4)
					{
						cout<<Materia[3]<<endl;
					}else 
					{
						cout<<Materia[4]<<endl;
					}
				cout<<"\t Las calificaciones del alumno son:"<<endl;
				j=4;
						}
					
						for(int j=0; j<=4; j++)
						{
							cout<<"\t \t "<<Materia[j]<<"= "<<Cal[i][j]<<endl;
						}//Fin de for anidado para materias
						cout<<endl;	
							}//Fin de for principal
							
						cout<<"\n \t-----------------------------------------------------------------------"
							<<"\n \t \t \t El promedio general del grupo es: "<<promt<<endl
							<<"\n \t-----------------------------------------------------------------------"<<endl<<endl;					
										
					break;
					default:
					cout<<" \n \t La opcion seleccionada no existe"<<endl;				
										
				}//fIN DE SWITCH
			cout<<"\t \t Si desea modificar algun datos presione S, si desea salir presiones N: ";
			cin>>opc;cout<<endl;
		}	while(opc=='s'||opc=='S');	
		cout<<endl;
			system("cls");
			cout<<"\n \n \t \t \t Fué un placer atenderle"<<endl<<endl<<endl;
			
		}else
		{
			cout<<"\n \t Fué un placer atenderle"<<endl;
		}//Fin de if
	system("pause");
	return 1;
}

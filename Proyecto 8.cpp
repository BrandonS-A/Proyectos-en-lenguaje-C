//Proyecto 8. Sistema para guardar información de maestros y sus materias.
/*En Azul Web se desea hacer un programa en C++ que guarde la información de los maestros que ofrecen cursos dentro de su plataforma, 
el programa debe de realizar lo siguiente:
	1.- Permitir guardar datos completos del maestro. Maestro; nombre, edad, país, especialidad. Especialidad;
					programación, base de datos y servidores.
	2.- También se desea ordenar los cursos que se están brindando. Curso; maestro, especialidad, y fecha. Fecha: día, mes y año.
(Todos los dato se deben de guardar al momento de programar, no hay que pedírselo al usuario).
3.- Al momento de correr el programa se debe de mostrar en pantalla el siguiente menú:
	>> Buscar cursos por maestro.
	>> Buscar cursos por especialidad.
	>> Buscar cursos mayores a un año brindado por el usuario.
	>> Buscar cursos menores a un año brindado por el usuario.
	>> Permitir al usuario modificar cualquiera de los datos mostrados anteriormente utilizando una contraseña
	 	(La contraseña la definimos al momento de programar).
	>> Permitir salir del programa. (El programa no se debe de cerrar hasta que el usuario así lo desee).*/
	 
using namespace std;
#include<iostream>
#include<string.h>
#include<locale.h>
#include<conio.h>

#define pass "master"
struct Maestro
{
	char Nom[100], ciudad[50], especialidad[50], curso[15][100];
	int edad;
	
};//Fin de estructura Prof

struct Fecha
{
	char mes[14][40];
	int dia[14], anhio[14];
};//Fin de Fecha



int main()
{
	
	Maestro prof[16];
	Fecha Fe[14];
	char opProf[4][100],aux[14]={}, aux2[15][100]={}, aux3[7][100]={"Programacion","Bases de datos", "Servidores"},password[10];
	char ch;
	int opc=0,opc2,opcE,cont,opcP, cont2,intentos ;
	setlocale(LC_CTYPE,"Spanish");
	
//	--------------Nombres de profesores----------------------------------
		strcpy(prof[0].Nom,"Angel Sanchez Espinoza");
		strcpy(prof[1].Nom,"Rodrigo Urcino Alvarez");
		strcpy(prof[2].Nom,"Noel Urbina");
		strcpy(prof[3].Nom,"Juan Pablo Landaverde Neri");
		strcpy(prof[4].Nom,"Pablo Rene Gomez Quiquivix");
		strcpy(prof[5].Nom,"Carlos A. Iriarte Martinez");
		strcpy(prof[6].Nom,"Martin Melo Godinez");
		strcpy(prof[7].Nom,"Jose Manuel Pereira Cih");
		strcpy(prof[8].Nom,"Daniel Orio Islas");
		strcpy(prof[9].Nom,"Carlos Hernandez");
		strcpy(prof[10].Nom,"Lucas Lucyk");
		strcpy(prof[11].Nom,"Hugo Ivan Valle Ramirez");
		strcpy(prof[12].Nom,"Francisco Escobedo");

//	---------------- Ciudad------------------------
		
		strcpy(prof[0].ciudad,"Monterrey");
		strcpy(prof[1].ciudad,"Guadalajara");
		strcpy(prof[2].ciudad,"Monterrey");
		strcpy(prof[3].ciudad,"Querétaro");
		strcpy(prof[4].ciudad,"Sololá,Guatemala");
		strcpy(prof[5].ciudad,"Tepic");
		strcpy(prof[6].ciudad,"Hidalgo");
		strcpy(prof[7].ciudad,"Cancun");
		strcpy(prof[8].ciudad,"Ciudad de México");
		strcpy(prof[9].ciudad,"Guadalajara");
		strcpy(prof[10].ciudad,"Autónoma de Buenos Aires, Argentina");
		strcpy(prof[11].ciudad,"Puebla");
		strcpy(prof[12].ciudad,"Cancún");
		
//	---------------- Especialidad------------------------	
		strcpy(prof[0].especialidad,"Programacion");
		strcpy(prof[1].especialidad,"Servidores");
		strcpy(prof[2].especialidad,"Bases de datos");
		strcpy(prof[3].especialidad,"Programacion");
		strcpy(prof[4].especialidad,"Bases de datos");
		strcpy(prof[5].especialidad,"Programacion");
		strcpy(prof[6].especialidad,"Servidores");
		strcpy(prof[7].especialidad,"Programacion");
		strcpy(prof[8].especialidad,"Servidores");
		strcpy(prof[9].especialidad,"Programacion");
		strcpy(prof[10].especialidad,"Programacion");
		strcpy(prof[11].especialidad,"Bases de datos");
		strcpy(prof[12].especialidad,"Bases de datos");
//	---------------- curso------------------------	
	strcpy(prof[0].curso[0],"*Alexa Skills Desde Cero ");
		strcpy(Fe[0].mes[0],"Julio");
		Fe[0].dia[0]=5;
		Fe[0].anhio[0]=2020;
	strcpy(prof[0].curso[1],"*Curso de Java y BlueJ");
		Fe[0].dia[1]=18;
		strcpy(Fe[0].mes[1],"Marzo");
		Fe[0].anhio[1]=2020;
	strcpy(prof[0].curso[2],"*Curso profesional de C++");
		Fe[0].dia[2]=3;
		strcpy(Fe[0].mes[2],"Noviembre");
		Fe[0].anhio[2]=2019;
	strcpy(prof[0].curso[3],"*Curso profesional de HTML y CSS.");
		Fe[0].dia[3]=27;
		strcpy(Fe[0].mes[3],"Diciembre");
		Fe[0].anhio[3]=2019;
	strcpy(prof[0].curso[4],"*Kotlin | Introducción a la Programación");
		Fe[0].dia[4]=9;
		strcpy(Fe[0].mes[4],"Abril");
		Fe[0].anhio[4]=2020;
	strcpy(prof[0].curso[5],"*Taller para crear tu portafolio profesional");
		Fe[0].dia[5]=22;
		strcpy(Fe[0].mes[5],"Noviembre");
		Fe[0].anhio[5]=2019;
	//++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[1].curso[0],"*Curso Bases del Web Scraping con Python");
		Fe[1].dia[0]=24;
		strcpy(Fe[1].mes[0],"Marzo");
		Fe[1].anhio[0]=2020;
	strcpy(prof[1].curso[1],"*Curso de Git y Github.");
		Fe[1].dia[1]=16;
		strcpy(Fe[1].mes[1],"Julio");
		Fe[1].anhio[1]=2020;
	strcpy(prof[1].curso[2],"*Python práctico desde cero.");
		Fe[1].dia[2]=16;
		strcpy(Fe[1].mes[2],"*Septiembre");
		Fe[1].anhio[2]=2020;
	
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[2].curso[0],"*Curso de Introducción a GNU/Linux");
		Fe[2].dia[0]=8;
		strcpy(Fe[2].mes[0],"Julio");
		Fe[2].anhio[0]=2020;
	strcpy(prof[2].curso[1],"*Curso profesional de SQL.");
		Fe[2].dia[1]=30;
		strcpy(Fe[2].mes[1],"Octubre");
		Fe[2].anhio[1]=2019;
	strcpy(prof[2].curso[2],"*Curso de Administración de base de datos en MSSQL");
		Fe[2].dia[2]=26;
		strcpy(Fe[2].mes[2],"Diciembre");
		Fe[2].anhio[2]=2019;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[3].curso[0],"*Curso de Java desde cero con NetBeans");
		Fe[3].dia[0]=5;
		strcpy(Fe[3].mes[0],"Septiembre");
		Fe[3].anhio[0]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[4].curso[0],"*Curso de PHP y SQL: Base de Datos.");
		Fe[4].dia[0]=10;
		strcpy(Fe[4].mes[0],"Agosto");
		Fe[4].anhio[0]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[5].curso[0],"*Curso de Videojuegos en 2D desde cero");
		Fe[5].dia[0]=29;
		strcpy(Fe[5].mes[0],"Mayo");
		Fe[5].anhio[0]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[6].curso[0],"*Curso profesional de Django");
		Fe[6].dia[0]=2;
		strcpy(Fe[6].mes[0],"Abril");
		Fe[6].anhio[0]=2020;
	strcpy(prof[6].curso[1],"*Curso profesional de React");
		Fe[6].dia[1]=8;
		strcpy(Fe[6].mes[1],"Noviembre");
		Fe[6].anhio[1]=2019;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[7].curso[0],"*Curso profesional de JavaScript");
		Fe[7].dia[0]=4;
		strcpy(Fe[7].mes[0],"Junio");
		Fe[7].anhio[0]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[8].curso[0],"*Curso profesional de Node.js");
		Fe[8].dia[0]=26;
		strcpy(Fe[8].mes[0],"Diciembre");
		Fe[8].anhio[0]=2019;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[9].curso[0],"*Curso profesional de PHP");
		Fe[9].dia[0]=21;
		strcpy(Fe[9].mes[0],"Abril");
		Fe[9].anhio[0]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[10].curso[0],"*Curso profesional de Python");
		Fe[10].dia[0]=5;
		strcpy(Fe[10].mes[0],"Noviembre");
		Fe[10].anhio[0]=2019;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[11].curso[0],"*Curso profesional VBA para Excel.");
		Fe[11].dia[0]=31;
		strcpy(Fe[11].mes[0],"Julio");
		Fe[11].anhio[0]=2020;
	strcpy(prof[11].curso[1],"*Curso Avanzado VBA para Excel.");
		Fe[11].dia[1]=16;
		strcpy(Fe[11].mes[1],"Octubre");
		Fe[11].anhio[1]=2020;
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	strcpy(prof[12].curso[0],"*Pandas para el Análisis de Datos");
		Fe[12].dia[0]=20;
		strcpy(Fe[12].mes[0],"Agosto");
		Fe[12].anhio[0]=2020;
//++++++++++++++++++++++++++++++INICIO DE PROGRAMA SINTAXIS+++++++++++++++++++++++++++++++++


	do
	{
			
	cout<<"\n \t \t \t Cursos de azul school"<<endl
	<<"\t \t Ingrese el numero de la acción  a seguir "<<endl<<endl
	<<"\t 1. Buscar cursos por maestro"<<endl
	<<"\t 2. Buscar cursos por especialidad"<<endl
	<<"\t 3. Buscar cursos mayores a un año brindado por el usuario"<<endl
	<<"\t 4. Buscar cursos menores a un año brindado por el usuario."<<endl
	<<"\t 5. Ingresar contraseña de administrador"<<endl
	<<"\t 6. Salir"<<endl
	<<"\t Ingrese la opción que desee ... "; cin>>opc;
	system("cls");
	
	switch(opc)
	{
		case 1:
			cont=0;
			cout<<"\n \t Estos son los profesores que imparten los cursos: "<<endl<<endl;
			for( int i=0; i<=12; i++)
			{
				cout<<"\t\t "<<prof[i].Nom<<endl;
			}//Fin de for mostrar los profesores
			fflush(stdin);
			cout<<endl<<endl
			<<"\t  Ingrese el nombre del profesor como se encuentra anotado para visualizar los cursos que brinda"<<endl
			<<endl<<"\t  * "; cin.getline(opProf[0],100,'\n'); cout<<endl;

			        for(int i=0; i<=14; i++)
					{	
						fflush(stdin);
				        if(strcmp(prof[i].Nom,opProf[0])==0)
						{
				        	i=15; 
				        }				        	
						cont++;
				    }//Fin de for para conteo de prof
				    
				    cont=cont-1;
				    for(int j=0; j<=5; j++)
					{
						fflush(stdin);
				        	cout<<"\t "<<prof[cont].curso[j]<<endl;
				        
				    }//Fin de for para imprimir
				    
			 break;
			 
		case 2:
     		
     		opcE=0;
     		 
     		cout<<"\n \t \t En azul school los profesores tienen una espacialidad y son: "<<endl;
     			for(int i=0; i<=2; i++)
				 {
     				cout<<"\t "<<i+1<<". "<<aux3[i]<<endl;
				 }
				 
     			
     		cout	<<"\t \t Ingrese el número de la especialidad para poder desplegar los cursos disponibles.. ";cin>>opcE;
     		cout<<endl<<endl;
     		
     	
				 
     		if(opcE==1)
     		{
     			cont=0;
     			aux2[15][100]={};
     			aux[14]={'F'};
     			for(int i=0; i<=14; i++)
				 {
				 	strcpy(aux2[i]," ");
				 }
		
     			
     			for(int i=0; i<=12; i++)
				 {
				 	
     				if(strcmp(prof[i].especialidad,aux3[0])==0 || strcmp(prof[i].especialidad,aux3[0])==0)
					 {
					 	cont++;
					 	aux[i]='V';
					 }
				 }//Fin de for conteo para saber cuantos profesores de programacion existen
				 cout<<"\t Hay "<<cont<<" profesores con esta especialidad y los cursos disponibles son:"<<endl;
				 cont=0;
				  
				 for(int i=0; i<=14; i++)
				 {	
				 	if(aux[i]=='V')
				 	{
				 	
				 		for(int j=0; j<=14; j++)
				 		{
				 			//Este if es para quitar los saltos de linea vacios en el array
				 			if(strncmp(prof[i].curso[j],"*",1)==0) 
				 			{
				 				
				 				strcpy(aux2[j],prof[i].curso[j]);
				 				cout<<" \t "<<aux2[j]<<endl;
				 				
							 }//Fin de if 	
				 		}//Fin de for J
				 		
					 }//Fin de if para buscador
					 
				 }//Fin de for imprimir
				 	for(int i=0; i<=14; i++)
				 {
				 	strcpy(aux2[i]," ");
				 	aux[i]='F';
				 }
				 
				 
	
			 }else if(opcE==2)
     		{
     			aux[14]={'F'};
     			cont=0;
     			aux2[15][100]={};
     			for(int i=0; i<=14; i++)
				 {
				 	strcpy(aux2[i],"B");
				 }
		
     			for(int i=0; i<=12; i++)
				 {
				 	
     				if(strcmp(prof[i].especialidad,aux3[1])==0)
					 {
					 	cont++;
					 	aux[i]='V';
					 }
				 }//Fin de for conteo
				 cout<<"\t Hay "<<cont<<" profesores con esta especialidad y los cursos disponibles son:"<<endl;
				 cont=0;
				 for(int i=0; i<=14; i++)
				 {	
				 	if(aux[i]=='V')
				 	{
				 	
				 		for(int j=0; j<=14; j++)
				 		{
				 			//Este if es para quitar los saltos de linea vacios en el array
				 			if(strncmp(prof[i].curso[j],"*",1)==0) 
				 			{
				 				
				 				strcpy(aux2[j],prof[i].curso[j]);
				 				cout<<" \t "<<aux2[j]<<endl;
							 }//Fin de if 	
				 		}//Fin de for J
					 }//Fin de if para buscador
				 }//Fin de for imprimir
				for(int i=0; i<=14; i++)
				 {
				 	strcpy(aux2[i]," ");
				 	aux[i]='F';
				 }
				 
			
     		} else if(opcE==3)
     		{
     			aux[14]={'F'};
     			cont=0;
     			aux2[15][100]={};
     	
     			for(int i=0; i<=12; i++)
				 {
				 
     				if(strcmp(prof[i].especialidad,aux3[2])==0)
					 {
					 	cont++;
					 	aux[i]='V';
					 }
				 }//Fin de for conteo
				 cout<<"\t Hay "<<cont<<" profesores con esta especialidad y los cursos disponibles son:"<<endl;
				 cont=0;
				 for(int i=0; i<=14; i++)
				 {	
				 	if(aux[i]=='V')
				 	{
				 	
				 		for(int j=0; j<=14; j++)
				 		{
				 			//Este if es para quitar los saltos de linea vacios en el array
				 			if(strncmp(prof[i].curso[j],"*",1)==0) 
				 			{
				 				
				 				strcpy(aux2[j],prof[i].curso[j]);
				 				cout<<" \t "<<aux2[j]<<endl;
							 }//Fin de if 	
				 		}//Fin de for J
					 }//Fin de if para buscador
					 fflush(stdin);
				 }//Fin de for imprimir
				 for(int i=0; i<=14; i++)
				 {
				 	strcpy(aux2[i]," ");
				 	aux[i]='F';
				 }
				 
				 
     		}else
     		{
     			cout<<" \t La opción que ingresó no es valida"<<endl;
			 }
			 break;
			 case 3:
			 	opcE=0;
			 	cont=0;
			 	
			 	cout<<"\n \t Por favor ingrese un año para mostrar los cursos que se añadieron en ese año y el siguiente"<<endl
			 		<<"\t # "; cin>>opcE;
			 		
			 		for(int i=0; i<= 14; i++)
			 		{
			 			for(int j=0; j<=14; j++)
			 			{
			 				if(Fe[i].anhio[j]>=opcE && Fe[i].anhio[j]<=opcE+1)
			 				{
			 					if(strncmp(prof[i].curso[j],"*",1)==0)
			 					{
			 						cout<<"\t "<<prof[i].curso[j]<<endl;
			 						cont=1;
								 }//Fin de if para quitar los espacios en blanco
							 }
						 }//Fin de for para J
			 			
					 }//Fin de for par i
					 
					 if(cont==0)
					 {
					 	cout<<"\n \t No se realizarón cursos en el año que indicó ni en el año siguiente"<<endl;
					 }
					 cont=0;
			 	break;
			 	case 4:
			 		opcE=0;
			 		cont=0;
			 	
			 	cout<<"\n \t Por favor ingrese un año para mostrar los cursos que se añadieron en ese año y el anterior"<<endl
			 		<<"\t # "; cin>>opcE;
			 		
			 		for(int i=0; i<= 14; i++)
			 		{
			 			for(int j=0; j<=14; j++)
			 			{
			 				if(Fe[i].anhio[j]<=opcE && Fe[i].anhio[j]>=opcE-1)
			 				{
			 					if(strncmp(prof[i].curso[j],"*",1)==0)
			 					{
			 						cout<<"\t "<<prof[i].curso[j]<<endl;
			 						cont=1;
								 }//Fin de if para quitar los espacios en blanco
							 }
						 }//Fin de for para J
			 			
					 }//Fin de for par i
					 
					 if(cont==0)
					 {
					 	cout<<"\n \t No se realizarón cursos en el año que indicó ni en el año anterior"<<endl;
					 }
					 cont=0;
					 break;
			 	 case 5:
				 	
					 //char caracter,password[10];
					cont2=0;
					intentos=0;
					do
					{
						
					
					cont2=0;
				 	cout<<"\n \t Ingrese la contraseña de administrador para poder modificar datos"<<endl;
				 		cout<<"\t Password: ";
				 		
				 		while(ch = getch())     
				 		{
				 			if(ch== 13) //El numero 13 es en codigo ascii de salto de linea
				 			{
				 				password[cont2]='\0';
				 				break;
				 			 }else if(ch== 8)//El numero 8 es en codigo ascii de la tecla de borrado
				 			 {
				 			 	if(cont2>0)// Este es para delimitar y no se borre la palabra password
				 			 	{
				 			 		cont2--;
				 			 	cout<<"\b \b";
				 			 		
								  }//Fin de if para evitar borrar password
				 			 	
							  }else
							  {
							  	cout<<"*";
							  	password[cont2]=ch;
							  	cont2++;
							  }
						 }
						 if(strcmp(password,pass)==0)
						 {
						 	intentos=4;
						 }else
						 {
						 	system("cls");
						 	cout<<"\n \t Le quedan "<<2-intentos<<" intentos"<<endl;
						 	 intentos++;
						
						 }
						 
						 
						 }while(intentos<=2); //Fin de while para intentos
						 system("cls");
						 if(strcmp(password,pass)==0)
						 {
						 	opcE=0;
						 	cout<<"\n \t \t Bienvenido adminstrador "<<endl<<endl
						 		<<"\t Ingrese el número segun el dato que desee modificar"<<endl<<endl
						 		<<"\t 1. Nombre de algún profesor. "<<endl
						 		<<"\t 2. Modificar nombre de algún curso"<<endl
						 		<<"\t 3. Nombre de alguna especialidad"<<endl
						 		<<"\n \t Ingrese la opción que desea: "; cin>>opcE;
						 		
						 		if(opcE==1)
						 		{
						 			opcP=0;
						 			aux2[15][100]={};
						 			cout<<"\n \t Los profesores dentro de sistema son: "<<endl<<endl;
						 			for(int i=0; i<=12; i++)
						 			{
						 				
						 				cout<<"\t "<<i+1<<". "<<prof[i].Nom<<endl;
									 }
									 
						 			cout<<"\n \t Ingrese el número del profesor a modificar: ";cin>>opcP;
						 			fflush(stdin);
						 			cout<<"\n \t Ingrese el nuevo nombre: "; cin.getline(aux2[1],100,'\n');
						 			opcP=opcP-1;
						 			strcpy(prof[opcP].Nom,aux2[1]);
						 			cout<<"\n \t Se ha cambiado el nombre del profesor exitosamente: "<<endl<<endl;
						 			for(int i=0; i<=12; i++)
						 			{
						 				
						 				cout<<"\t "<<i+1<<". "<<prof[i].Nom<<endl;
									 }
									 cout<<endl<<endl;
						 			
								 }else if(opcE==2)
								 {
								 	cont=0;
								 	aux2[15][100]={};
								 	cout<<"\n \t Los cursos  dentro de sistema son: "<<endl<<endl;
								 	for(int i=0; i<=14; i++)
						 			{
						 				for(int j=0;  j<=14; j++)
						 				{
										 if(strncmp(prof[i].curso[j],"*",1)==0)
			 								{
			 									cont++;
						 						cout<<"\t "<<cont<<". "<<prof[i].curso[j]<<endl;
						 						
											 }//Fin de if para quitar los espacios en blanco
						 				}//Fin de for para J
									 }//Fin de for para imprimir cursos
									 fflush(stdin);
									 cout<<"\n \t Ingrese el nombre del curso a cambiar iniciando con  *: "; cin.getline(aux2[2],100,'\n');
									 cout<<"\n \t Ingrese el nuevo nombre del curso empezando con *: ";cin.getline(aux2[3],100,'\n');
									 for(int i=0; i<=14; i++)
						 			{
						 				for(int j=0;  j<=14; j++)
						 				{
										 if(strcmp(prof[i].curso[j],aux2[2])==0)
			 								{
			 									strcpy(prof[i].curso[j],aux2[3]);
						 						j=15;
						 						i=15;
											 }//Fin de if para quitar los espacios en blanco
						 				}//Fin de for para J
									 }//Fin de for para modificar nombre de cursos
									 cout<<"\n \t Se ha cambiado el nombre del curso exitosamente: "<<endl<<endl;
									 cont=0;
								 	 for(int i=0; i<=14; i++)
						 			{
									 
									 for(int j=0;  j<=14; j++)
						 				{
										 if(strncmp(prof[i].curso[j],"*",1)==0)
			 								{
			 									cont++;
						 						cout<<"\t "<<cont<<". "<<prof[i].curso[j]<<endl;
						 						
											 }//Fin de if para quitar los espacios en blanco
						 				}//Fin de for para J
									 }//Fin de for para imprimir cursos
								 	cout<<endl<<endl;
								 	
								 }else if(opcE==3)
								 {
								 	
								 	cout<<"\n \t Las especialidades dentro de sistema son: "<<endl;
								 		for(int i=0; i<=2; i++)
								 		{
								 			cout<<"\t "<<aux3[i]<<endl;
										 }//Fin de for pata imprimir
						     		cout<<"\t \t Ingrese el nombre de la especialidad para poder modificar el nombre: ";
						     			fflush(stdin);
										 cin.getline(aux3[4],100,'\n');
									cout<<" \n \t \t Ingrese el nuevo nombre de la especialidad: "; cin.getline(aux3[5],100,'\n');
						     		
									for(int i=0; i<=13; i++)
						     			{
						     				if(strcmp(prof[i].especialidad,aux3[4])==0)
						     				{
						     					strcpy(prof[i].especialidad,aux3[5]);
						     					
						     				
											 }//Fin de if para buscar
											 	
										 }//Fin de for para reemplazar
									for(int i=0; i<=2; i++)
									{
										if(strcmp(aux3[i],aux3[4])==0)
												 {
												 	
						     						strcpy(aux3[i],aux3[5]);
												 }//Fin de if para buscar
									}//Fin de for para reemplazar

										 cout<<"\n \t Se ha cambiado el nombre de la especialidad exitosamente: "<<endl<<endl;
									for(int i=0; i<=2; i++)
									 {
					     				cout<<"\t "<<i+1<<". "<<aux3[i]<<endl;
									 }//Fin de for para imprimir
								 }else 
								 {
								 	cout<<"\n \t La opción no existe "<<endl<<endl;
								 	
								 }//Fin de if else menu de administrador

						 }else
						 {
						 	system("cls");
						 	cout<<" \n \t Se le terminarón los intentos"
							 	<<"\n \t La constraseña no es valida"<<endl;
						 }//Fin de if else para contraseña
						 
						 break;
						 case 6:
						 	
						 	cout<<"\n \t Que tenga un excelente día"<<endl<<endl;
						 	opc2=2;
						 	system("pause");
						 	exit (-1);//Este es para forzar la finalización del programa 
						 	break;
						 	
						 	default: 
						 	cout<<"\n \t La opción que ingresó no es valida "<<endl<<endl;

		}//Fin de switch
		
		cout<<"\n \t Si desea regresar al menú ingrese el número 1, si desea salir presione 2:  ";
		cin>>opc2;
		cout<<endl<<endl;
		system("cls");
		}while(opc2==1);
			
			cout<<"\n \t Que tenga un excelente día"<<endl<<endl;
	
	
	system("pause");
	return 1;
}//Fin de main

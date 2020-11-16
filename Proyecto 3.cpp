//Proyecto 3: Programa para calcular las notas de alumnos
/*Crea un programa en C++ para guardar las notas de N alumnos, N tiene que ser mayor o igual que 20 o menor o igual que 30,
sto se debe de verificar en el programa, y en caso de que el numero de alumnos este fuera del rango se debe de mostrar la opción de 
ingresar de nuevo el numero de alumnos.
Una vez que tengamos los notas guardadas dentro de un arreglo, hay que sumar todas las calificaciones,
mostrar el promedio del salón, mostrar el alumno con nota mas alta, mostrar alumnos con nota promedio 
(rango de promedio – 1 a promedio + 1) y el alumno con menor nota.
A los alumnos que tiene una nota menor o igual a 6 se les encargo un trabajo, este trabajo suma un punto mas a su nota.
Se debe de utilizar el arreglo con las notas originales para generar otro arreglo con las notas modificadas de estos alumnos.
Imprimir las dos notas en columnas diferentes.  
Al final se debe de mostrar la opción para volver a calcular mas notas de alumnos, o finalizar el programa.*/

using namespace std;
#include<iostream>
#include<locale.h>

int main()
{
	setlocale(LC_CTYPE,"Spanish");
	int n,alum,al,A,ALUMNO;
	char opc='s';
	double  sum=0, prom,max=0, min,alprom;
	
	do
	{
		
	
	cout<<"\n \t Ingrese el número de alumnos a  registrar calificaciones"<<endl
		<<" \t Sólo podrá registrar un monto de entre 20 y 30 alumnos"<<endl;
	do
	{
		cout<<"\t "; cin>>n; cout<<endl;
		system("cls");
		cout<<endl;
		
		if(n<=19 || n>=31)
		{
			cout<<"\t Recuerde que debe de ser entre 20 y 30 alumnos"<<endl;
		}//Fin de if opcion
					
	}while(n<=19 || n>=31);
	double Array[n]={}, Array2[n]={};
	cout<<endl;
	for(int i=0; i<=(n-1); i++)
	{
		cout<<"\t Ingrese la calificación del alumno #"<<i+1<<endl
			<<"\t ";cin>>Array[i];
			
			sum=Array[i]+sum;	
			prom=sum/n;	
			
			if(Array[i]>max)
			{
				max=Array[i];
				alum=i+1;
			}//Fin de if para numero maximo
			

	}//fin de for ingreso de alumnos
	min=max;
	for(int i=0; i<=(n-1); i++)
	{
		if(Array[i]<min)
		{
			min=Array[i];
			al=i+1;
		}//fin de if para nota minima
		
	}//Fin de for para número menor
	
	cout<<"\n \t--------------------------------------------------------------------------------"
		<<"\n \t \t Los alumnos con nota promedio son: "<<endl<<endl;
	for(int i=0; i<=(n-1); i++)
	{
					if(Array[i]>=(prom-1) && Array[i]<=(prom+1))
		{
			Array[i];
			A=i+1;
			cout<<"\t \t Alumno #"<<A<<" con nota de "<<Array[i]<<endl;
		}//Fin de if para nota promedio
	}//fin de for de alumnos promedio
	cout<<"\n \t--------------------------------------------------------------------------------";	
	
	cout<<endl<<"\t El promedio del grupo es de "<<prom<<endl
		<<"\t El alumno con la calificación más alta es el alumno #"<<alum<<" con una nota de "<<max<<endl
		<<"\t El alumno con la calificacion más baja es el alumno #"<<al<<" con una nota de "<<min<<endl<<endl

		<<"\t*************************************************************************************************"<<endl
		<<"\t\t\t Alumnos que subieron 1 punto por haber realizado un trabajo extra"<<endl<<endl;
	
	for(int i=0; i<=(n-1); i++)
	{
		Array2[i]=Array[i];
		if(Array[i]<=6)
		{
			ALUMNO=i+1;
			cout<<"\t \t El alumno #"<<ALUMNO<<" tiene una calificación de " <<Array[i]<<" y sube a "<<Array2[i]+1<<endl;
		}//Fin de if 
			
	}//Fin de for para cambio de array
		cout<<"\t*************************************************************************************************"<<endl;
		
		cout<<"\n \t \t Si desea calcular mas notas de alumnos ingrese la letra S, si de sea salir presione N"<<endl
			<<"\t \t En espera de su respuesta... "; cin>>opc;cout<<endl<<endl;
			
			system("cls");
}while(opc=='S' || opc=='s');


	system("pause");
	return 1;
}//Fin de main

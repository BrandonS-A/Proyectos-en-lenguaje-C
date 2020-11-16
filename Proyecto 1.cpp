//Proyecto 1 Traductor de fecha
/*Escriba un programa que lea tres valores enteros que represente el mes, l día y el año con cuatro dígitos.
El programa deberá mostrar la fecha en uno de los formatos siguientes, dependiendo de la selección del usuario.
Si el usuario introduce 1, se mostrara el mes con palabra (“Enero”), el día como un entero (11) y el año (1999). Si se introduce un 2,
se mostrara el mes con una abreviatura de tres letras (“Ene”), el día como un entero (11) y el año (1999).
i se produce un 3, se mostrara el mes como un entero (01), el día como un entero (11) y el año (1999). 
 Solo usar lo expuesto en temas vistos previamente.*/

using namespace std;
#include<iostream>
#include<locale.h>
int main()
{
	int dia,mes,anhio, opc;
	setlocale(LC_CTYPE, "Spanish");
	cout<<"\n    Introduzca una fecha (mes,dia,año): "<<endl
	<<"    ";cin>>mes>>dia>>anhio; cout<<endl<<endl
		<<"\n ******** ¿Cómo le gustaría mostrar la fecha?******"<<endl<<endl
		<<" Mes completo, día, año (Enero 11, 1999):  Introduzca 1"<<endl
		<<" Mes abreviado, día, año (Ene. 11, 1999):  Introduzca 2"<<endl
		<<"Mes en cifra/día/año (01/11/1999):  Introduzca 3"<<endl
		<<"  #";cin>>opc; cout<<endl<<endl;
		cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl<<endl;
		
		switch(opc)
		{
			case 1:
				if(mes<=12)
			{
				
			if(mes==1)
			{
				cout<<" La fecha traducida es: Enero "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==2)
			{
				cout<<" La fecha traducida es: Febrero "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==3)
			{
				cout<<" La fecha traducida es: Marzo "<<dia<<", "<<anhio<<endl<<endl;
			} else if(mes==4)
			{
				cout<<" La fecha traducida es: Abril "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==5)
			{
				cout<<" La fecha traducida es: Mayo "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==6)
			{
				cout<<" La fecha traducida es: Junio "<<dia<<", "<<anhio<<endl<<endl;
			} else if(mes==7)
			{
				cout<<" La fecha traducida es: Julio "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==8)
			{
				cout<<" La fecha traducida es: Agosto "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==9)
			{
				cout<<" La fecha traducida es: Septiembre "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==10)
			{
				cout<<" La fecha traducida es: Octubre "<<dia<<", "<<anhio<<endl<<endl;				
			}else if(mes==11)
			{
				cout<<" La fecha traducida es: Noviembre "<<dia<<", "<<anhio<<endl<<endl;	
			}else
			{
				cout<<" La fecha traducida es: Diciembre "<<dia<<", "<<anhio<<endl<<endl;	
			}//Fin de else anidado
			
			
			} else {
				cout<<" El numero ingresado no es valido"<<endl<<endl;
			}//fin de else 
			break;
			
			case 2:
				if(mes<=12)
			{
				
			if(mes==1)
			{
				cout<<" La fecha traducida es: Ene. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==2)
			{
				cout<<" La fecha traducida es: Feb. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==3)
			{
				cout<<" La fecha traducida es: Mar. "<<dia<<", "<<anhio<<endl<<endl;
			} else if(mes==4)
			{
				cout<<" La fecha traducida es: Abr. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==5)
			{
				cout<<" La fecha traducida es: May. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==6)
			{
				cout<<" La fecha traducida es: Jun. "<<dia<<", "<<anhio<<endl<<endl;
			} else if(mes==7)
			{
				cout<<" La fecha traducida es: Jul. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==8)
			{
				cout<<" La fecha traducida es: Ago. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==9)
			{
				cout<<" La fecha traducida es: Sept. "<<dia<<", "<<anhio<<endl<<endl;
			}else if(mes==10)
			{
				cout<<" La fecha traducida es: Oct. "<<dia<<", "<<anhio<<endl<<endl;				
			}else if(mes==11)
			{
				cout<<" La fecha traducida es: Nov. "<<dia<<", "<<anhio<<endl<<endl;	
			}else
			{
				cout<<" La fecha traducida es: Dic. "<<dia<<", "<<anhio<<endl<<endl;	
			}//Fin de else anidado
			
			
			} else {
				cout<<" El numero ingresado no es valido"<<endl<<endl;
			}//fin de else 
			break;				
			
			case 3:
				cout<<" La fecha es "<<mes<<" /"<<dia<<"/ "<<anhio<<endl<<endl;	
				break;
				default:
				cout<<"El número "<<opc<<" no se encuentra dentro de las opciones"<<endl<<endl;		
			
		}//Fin de switch
	
		cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl<<endl;	

	system("pause");
	return 1;
}//Fin de main

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <ctime>
#include <vector>
#include <windows.h> 

using namespace std;

int main(int argc, char *argv[]){
	
string boton;

cout<<"\t\t\t\t................Cafeteria Apolo 11..................";

cout<<"\n Oprime el boton";
cin>>boton;

cout<<"\n Puerta abierta puede ingresar al establecimiento";
cout<<"\n\n Su hora de entrada es:";

		/*
    struct tm {
      int tm_sec;   // seconds of minutes from 0 to 61
      int tm_min;   // minutes of hour from 0 to 59
      int tm_hour;  // hours of day from 0 to 24
      int tm_mday;  // day of month from 1 to 31
      int tm_mon;   // month of year from 0 to 11
      int tm_year;  // year since 1900
      int tm_wday;  // days since sunday
      int tm_yday;  // days since January 1st
      int tm_isdst; // hours of daylight savings time
    }
*/

/* fecha/hora actual basado en el sistema actual */
time_t now = time(0);

/* Objeto de una estructura tm con fecha/hora local */
tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 6 de junio del 2022
cout << "\nHoy " << dia_semana[time->tm_wday] << ", ";
cout << time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl;
cout << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;


	system("PAUSE");
		system ("cls");

cout<<"\n\n Su mesa es la numero:";

for(int i = 0; i<1; i++)
 printf(" %d ", rand());
 
 
        system("PAUSE");
		system ("cls");
		
		int opc;
		cout<<"\nHola este es nuestro menu:";
		cout<<"\n1. plato del dia";
		cout<<"\n2. recomendacion del chef";
		cout<<"\n3. pizza napolitana";
		cout<<"\n4. Salir";
		cout<<"\n\nelige una opcion";
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			
			cout<<"Su pedido que es plato del dia estara listo en 3 minutos digite esto en el cronometro para llevar el tiempo de su pedido :";
			
	//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido ya estaba listo desde hace minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				cout<<"\n\nDesea ordenar algo mas";
				system("PAUSE");
		system ("cls");
		
		int opc;
		cout<<"\nHola este es nuestro menu:";
		cout<<"\n1. plato del dia";
		cout<<"\n2. recomendacion del chef";
		cout<<"\n3. pizza napolitana";
		cout<<"\n4. Salir";
		cout<<"\n\nelige una opcion";
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			
cout<<"Su pedido que es plato del dia estara listo en 3 minutos digite esto en el cronometro para llevar el tiempo de tu entrega:";
			
	//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion cuando va a querer frenar su cronometro: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
			}
 
 
 
		}
		}
		}
			
		}
		
		switch(opc){
			
			case 2:
				
	cout<<"Su pedido que es la recomendacion del chef estara listo en 5 minutos digite esto en cronometro para llevar el tiempo del pedido";
				
				//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo del pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
		
			switch(opc){
				
			case 3: 
			
			cout<<"Su pedido Pizza Napolitana estara listo en 2 minutos";
			
			//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
			
				return 0;
					
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
	
		
		switch(opc){
				
			case 4: cout<<"\nGracias por venir";
		}
				
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
			
				return 0;
			}
 
 
 
		}
		}
		}
			
		}
		
		switch(opc){
			
			case 2:
				
				cout<<"Su pedido que es la recomendacion del chef estara listo en 5 minutos digite esto en cronometro para llevar el tiempo de su pedido";
				
				//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				cout<<"\n\nDesea ordenar algo mas";
				system("PAUSE");
		system ("cls");
		
		int opc;
		cout<<"\nHola este es nuestro menu:";
		cout<<"\n1. plato del dia";
		cout<<"\n2. recomendacion del chef";
		cout<<"\n3. pizza napolitana";
		cout<<"\n4. Salir";
		cout<<"\n\nelige una opcion";
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			
			cout<<"Su pedido que es plato del dia estara listo en 3 minutos digite este tiempo en el cronometro para llevar el tiempo de tu entrega:";
			
	//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion cuando va a querer frenar su cronometro: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
			}
 
 
 
		}
		}
		}
			
		}
		
		switch(opc){
			
			case 2:
				
				cout<<"Su pedido que es la recomendacion del chef estara listo en 5 minutos digite esto en cronometro para llevar el tiempo del pedido";
				
				//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo del pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				cout<<"\n\nDesea ordenar algo mas";
				return 0;
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
		
			switch(opc){
				
			case 3: 
			
			cout<<"Su pedido Pizza Napolitana estara listo en 2 minutos";
			
			//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				cout<<"\n\nDesea ordenar algo mas";
				return 0;
					
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
	
		
		switch(opc){
				
			case 4: cout<<"\nGracias por venir";
		}
				
				
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
		
			switch(opc){
				
			case 3: 
			
			cout<<"Su pedido Pizza Napolitana estara listo en 2 minutos digite esto en el cronometro para llevar el tiempo de su pedido";
			
			//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				cout<<"\nDesea ordenar algo mas";
				system("PAUSE");
		system ("cls");
		
		int opc;
		cout<<"\nHola este es nuestro menu:";
		cout<<"\n1. plato del dia";
		cout<<"\n2. recomendacion del chef";
		cout<<"\n3. pizza napolitana";
		cout<<"\n4. Salir";
		cout<<"\n\nelige una opcion";
		cin>>opc;
		
		switch(opc){
			
			case 1: 
			
			cout<<"Su pedido que es plato del dia estara listo en 3 minutos digite este tiempo en el cronometro para llevar el tiempo de tu entrega:";
			
	//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion cuando va a querer frenar su cronometro: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
			}
 
 
 
		}
		}
		}
			
		}
		
		switch(opc){
			
			case 2:
				
				cout<<"Su pedido que es la recomendacion del chef estara listo en 5 minutos digite esto en cronometro para llevar el tiempo del pedido";
				
				//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo del pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
			
				return 0;
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
		
			switch(opc){
				
			case 3: 
			
			cout<<"Su pedido Pizza Napolitana estara listo en 2 minutos";
			
			//EL USUARIO DIGITARA EN QUE HORA,MINUTO,SEGUNDO
	int tipo;
	printf("\n1. Horas");
	printf("\n2. Minutos");
	printf("\n3. Segundos");
	printf("\nDigite su opcion del tiempo de su pedido: ");
	scanf("%i", &tipo);
 
	// EL USUARIO DIGITARA LA CANTIDAD DE HORAS MINUTOS O SEGUNDOS SEGUN LO PEDIDO
	
	int cantidad;
	printf("\nDigite la cantidad: ");
	scanf("%i" , &cantidad);
 
	
	int hora,minuto,segundo;
 
	for (hora=0; hora<=24; hora++ )
	{
		for (minuto=0; minuto<60; minuto++ )
 
	{
		for (segundo=0; segundo<60; segundo++ )
		{
		
			Sleep(1000);
 
 
		
			printf("\r %.2i : %.2i : %i " , hora , minuto , segundo );
 
			
			if (tipo == 1 && cantidad <= hora)
			{
				printf("\nSu pedido estaba listo para la entrega minutos atras");
				return 0;
			}
 
			
			else if (tipo == 2 && cantidad <= minuto)
			{
				printf("\nSu pedido esta listo para la entrega");
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
					
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
	
		
		switch(opc){
				
			case 4: cout<<"\nGracias por venir";
		}
				
				
				return 0;
			}
		
			else if (tipo == 3 && cantidad <= segundo)
			{
				printf("\nSu pedido no esta listo para la entrega");
				
				return 0;
					
			}
 
 
 
		}
		}
		}
			
		
		
				
		
		}	
	
		
		switch(opc){
				
			case 4: cout<<"\nGracias por venir";
		}
				
			
			
			
			
return 0;
}



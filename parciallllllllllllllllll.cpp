#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <ctime>
#include <vector>
using namespace std;

int main(int argc, char *argv[]){
	
	
cout<<"\t\t\tbienvenido al registro de la universidad apolo11.";
string ced;
string cona= "uni.pa" ;
cout<<"\n\ningrese su cedula y se le generara una contraseña para ingresar al sistema.";

cout<<"\n\ningrese su cedula. ";cin>>ced;	

	cout<<"\n\nsu cotraseña inical es: "<<cona<< endl<< endl;
	
	 system("PAUSE");
	 
	 	system ("cls");
	 
	cout<<"\n\n\t\tREGISTRO DE LA UNIVERSIDAD. ";
	
	cout<<"\n\nINGRESE USUARIO. ";
	cin>>ced;
	
	cout<<"\n\ningrese contrasenia. ";
	cin>>cona;
	
		system ("cls");
	if(cona == "uni.pa" ){
		cout<<"\n\n\t\tBIENVENIDO AL SISTEMA ";
	string	newcon;
		cout<<"\n\nactualice su contraseña. ";
		cin>>newcon;
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
		cout<<"\n\nsu contraseña se actualizo correctamente. ";
		string cedu;
		
		cout<<"\n\ninicie sesion con su nueva contrasena.";
		
		cout<<"\n\nINGRESE USUARIO: ";cin>>cedu;
		string contra;
	cout<<"\n\nINGRESE LA NUEVA CONTRASENA: ";cin>>contra;
		
		
		if(contra==newcon && cedu==ced){
	
				system ("cls");
		int numero;
		cout<<"\t\n\nmenu.";
		cout<<"\n1. envia ticket. ";
		cout<<"\n2. ver ticket. ";
		cout<<"\n3. salir. ";
		cout<<"\n\ndijite numero del menu. ";cin>>numero;
			system ("cls");
		switch(numero){
			case 1:{
				
			string nom, id, correo, carrera, sug;
			int idd= 5071;
			 cout<<"\t\t\n crear ticket.";
			 
			cout<<"\n\b ";getline(cin,nom);
			cout<<"\n\nnombre y apellido: ";getline(cin,nom);
			cout<<"\ningrese su identificacion. ";cin>>id;
			cout<<"\ningrese su correo. ";cin>>correo;
			cout<<"\n\b ";getline(cin, carrera);
			cout<<"\ningrese su carrera. ";getline(cin, carrera);
			cout<<"\nsugerencia: ";getline(cin,sug);
			cout<<"\nsu id del ticket es: "<<idd<< endl<< endl;
			 system("PAUSE");
				system ("cls");
			int voler=1;
			int salir=2;
			int op;
			cout<<"\n1. voler";
				cout<<"\n\n2. salir. ";cin>>op;
			
			if(op==1){
				
				system ("cls");
		int numero;
		cout<<"\t\n\nmenu.";
		cout<<"\n1. ver ticket. ";
		cout<<"\n2. salir. ";
		cout<<"\n\ndijite numero del menu. ";cin>>numero;
				
				if(numero==1){
					
						system ("cls");
        
				int idd= 5071;
				
			cout<<"\ningrese el ID del ticket. ";cin>>idd;
			
			if(idd == 5071  && sug==sug){
				cout<<"\nsu ticket es: "<<sug;
				cout<<"\n\nsu ticket fue enviado exitosamente, esta en proceso de revision y sera respondido en 24 horas. ";
	
	
			
			}
		
	
		cout<<"\n\ncerrando sesion gracias por preferir la univerdad apolo11";
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

//Formato=hoy miercoles, 27 de mayo del 2015
cout << "\n\nHoy " << dia_semana[time->tm_wday] << ", ";
cout << time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl;
cout << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

 system("PAUSE");
			
			 
			
				break;
			
			} 
			else{
				cout<<"\nticket no encontrado"; 

				break;	
				}
				

				
				
			}else{
				system ("cls");
			cout<<"cerrando sesion...";
		

			}
			cout<<"\n\n gracias por preferir la univerdad apolo11";
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

//Formato=hoy miercoles, 27 de mayo del 2015
cout << "\n\nHoy " << dia_semana[time->tm_wday] << ", ";
cout << time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl;
cout << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

 system("PAUSE");
			break;
	
}
			case 3:{
		 	cout<<"\n\ncerrando sesion gracias por preferir la univerdad apolo11";
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

//Formato=hoy miercoles, 27 de mayo del 2015
cout << "\n\nHoy " << dia_semana[time->tm_wday] << ", ";
cout << time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl;
cout << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

 system("PAUSE");
			break;
	
		}
		}
	}	
		}else{
		cout<<"contraseña y/o usuario incorrecto. ";
	}

}

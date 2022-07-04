#include<iostream>
#include <string>
#define USUARIO "oswaldvelas"
#define CONTRA "oswald12"
#define SI "si"
#include<cstdlib>
#define VOLVER "1"

using namespace std;
int main(){

string usuario, contrasena, si;
cout<<"ingrese Usuario:";getline(cin, usuario);

cout<<"ingrese contrasena:";getline(cin, contrasena);

if (usuario == USUARIO && contrasena == CONTRA){
system("cls");
cout <<"\n BIENVENIDO OSWALD!!! "<< endl;

cout<<"\nnotificacion!";
cout<<"\n\nabrir notificacion?\n";getline(cin, si);

if(si==SI){
system("cls");
cout<<"\n\t\t\ttiene una nueva trnasferencia recibida"<<endl;
cout<<"\n\tla empresa triton global ha transferido 5,000 dolares con exito a su cuenta. ";

int saldo= 5000;
int op;
string cuenta;
float resta=0;
float nvsaldo;
int op2;
string volverr;

cout<<"\n\n1. consultar saldo. ";

cout<<"\n3. salir.";
cout<<"\nopcion...";cin>>op;

switch(op){
	case 1: system("cls");
	cout<<"\nsu saldo actualmente es de "<<saldo;
			cout<<"\n\n1. menu principal. \n";cin>>volverr;
			if(volverr==VOLVER){
				system("cls");
         cout<<"\n2. transferir a cuenta. ";
         cout<<"\n3. salir.";
         cout<<"\nopcion...";cin>>op;
				
				if(op == 2){
				
					system("cls");
	cout<<"ingrese en nombre de la cuenta a transferir. ";cin>>cuenta;
	cout<<"\ncuanto desea transferir?\n";cin>>resta;
	if(saldo<resta){
		cout<<"\nla transferencia ha fallado, no tiene suficientes fondos. ";	
	}else{
		nvsaldo=saldo-resta;
		cout<<"\nla transferencia ha sido un exito. ";
		cout<<"\nsu nuevo saldo es de "<<nvsaldo;
			
			saldo=nvsaldo;
			
			cout<<"\n\n1. menu principal. \n";cin>>volverr;
			system("cls");
			 cout<<"\n2. transferir a cuenta. ";
         cout<<"\n3. salir.";
         cout<<"\nopcion...";cin>>op;
			
			if(op == 2){
				
					system("cls");
	cout<<"ingrese en nombre de la cuenta a transferir. ";cin>>cuenta;
	cout<<"\ncuanto desea transferir?\n";cin>>resta;
	if(saldo<resta){
		cout<<"\nla transferencia ha fallado, no tiene suficientes fondos. ";	
	}else{
		nvsaldo=saldo-resta;
		cout<<"\nla transferencia ha sido un exito. ";
		cout<<"\nsu nuevo saldo es de "<<nvsaldo;
	saldo=nvsaldo;
	cout<<"\n\n1. menu principal. \n";cin>>volverr;
	
	if(volverr == VOLVER){
		system("cls");
		cout<<"\n\n1. consultar saldo. ";
		cout<<"\n3. salir.";
cout<<"\nopcion... ";
cin>>op;

if(op==2){
	system("cls");
	cout<<"gracias por su tiempo.";
	cout<<"\ncerrando sesion...";
	
	
	
}else{
	system("cls");
	cout<<"\nsu saldo actualmente es de "<<saldo;
	
	cout<<"\n\n1. salir del banco ";
	cin>>op;
	
	if(op==1){
		system("cls");
	cout<<"gracias por su tiempo.";
	cout<<"\ncerrando sesion...";	
	}	
}		
	}
}
	}
			}
		}
			}
			}			
}
}
else {
cout <<"\nEl usuario y/o la contrasena son incorrectos"<< endl;
}
}


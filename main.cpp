#include <iostream>
#include <stdlib.h>
#include <string>
#include "Pintura.h"

using namespace std;

int main (int argc, char *argv[]) {
	int opc, n, cont=0, i=0;
	int lim=10;
	string c, m, res, cl, rcl;
	float p=0, l=0;
	cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
	cout<<"¯¯¯¯¯¯       Bienvenido       ¯¯¯¯¯¯"<<endl;
	cout<<"¯¯¯¯¯¯            a           ¯¯¯¯¯¯"<<endl;
	cout<<"¯¯¯¯¯¯ Inventario de pinturas ¯¯¯¯¯¯"<<endl;
	cout<<"¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯"<<endl;
	cout<<"\n Hecho por: Puxka Acosta Dominguez\n            Javier Miguel Juarez Flores\n            Manuel Antonio Hernandez Maruri\n"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"|    ¿Desea entrar a los datos?    |"<<endl;
	cout<<"|                si/no             |"<<endl;
	cout<<"------------------------------------"<<endl;
	cin>>res;
	
	system("cls");//Limpar pantalla
	Pintura inv[lim];//Inicio de los objetos
	
	while(res=="si"){
		system("cls");//Limpiar pantalla
		cout<<"************************"<<endl;
		cout<<"* ¿Que desea realizar? * \n*     1= Agregar       * \n*     2= Borrar        * \n*     3= Cambiar       * \n*     4= Mostrar       * \n*     5= Salir         *"<<endl;
		cout<<"************************"<<endl;
		cin>>opc;
		switch(opc){
		case 1://Agregar
			system("cls");//Limpiar pantalla
			do{
				system("cls");//Limpiar Pantalla
				cout<<"----------------------"<<endl;
				cout<<"< Dame la clave >"<<endl;//Tiene que ser una clave unica
				cin>>cl;
				inv[cont].setClave(cl);//Guarda la clave del objeto "i"
				
				cout<<"< Dame el color >"<<endl;
				cin>>c;
				inv[cont].setColor(c);//Guarda el color del objeto "i"
				
				cout<<"< Dame la marca >"<<endl;
				cin>>m;
				inv[cont].setMarca(m);//Guarda la marca del objeto "i"
				
				cout<<"< Dame el precio >"<<endl;
				cin>>p;
				inv[cont].setPrecio(p);//Guarda el precio el objeto "i"
				
				cout<<"< Dame los litros >"<<endl;
				cin>>l;
				inv[cont].setLitros(l);//Guarda los litros del objeto "i"
				cout<<"----------------------"<<endl;
				cont++;
				system("cls");//Limpiar pantalla
				cout<<"\n¿Quieres ingresar otro bote de pintura?\n	si/no"<<endl;
				cin>>res;
			} while(res=="si");//"i" es el contador de ojetos para ciclos
			system("cls");//Limpiar pantalla
			res="si";
			i=0;//Resetear el contador de objetos para ciclos
			break;
		case 2://Eliminar
			system("cls");//Limpiar pantalla
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Que bote de pintura quiere eliminar? Por favor indiquelo por su clave >"<<endl;
			cin>>cl;
			inv[lim].setClave(cl);
			while(i<cont){
				if(inv[i].getClave()!=inv[lim].getClave()){
					i++;
					if(i>=cont){
						cout<<"|X| La clave no existe, verifica que sea correcta y vuelve a intentarlo |X|"<<endl;
						i=0;
						cin>>cl;
						inv[lim].setClave(cl);
					}
				}
				else{
					n=i;
					i=cont;
				}
			}
			while(n!=cont){
				inv[n]=inv[n+1];
				n++;
			}
			inv[cont].setClave(" ");
			inv[cont].setColor(" ");
			inv[cont].setLitros(0);
			inv[cont].setPrecio(0);
			inv[cont].setMarca(" ");
			cout<<"|O| El bote de pintura "<<cl<<" fue eliminado con exito |O| \n Escribe 'ok' para regresar al menu"<<endl;
			cout<<"------------------------------------"<<endl;
			cin>>c;
			cont--;
			res="si";
			i=0;//Resetear el contador de objetos para ciclos
			break;
		case 3:
			system("cls");//Limpiar pantalla
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Que bote de pintura quiere cambiar? Por favor indiquelo por su clave >"<<endl;
			cin>>cl;
			inv[lim].setClave(cl);
			while(i<cont){
				if(inv[i].getClave()!=inv[lim].getClave()){
					i++;
					if(i>=cont){
						cout<<"|X| La clave no existe, verifica que sea correcta y vuelve a intentarlo |X|"<<endl;
						i=0;
						cin>>cl;
						inv[lim].setClave(cl);
					}
				}
				else{
					n=i;
					i=cont;
				}
			}
			do{
				system("cls");
				cout<<"***********************"<<endl;
				cout<<"* ¿Que desea cambiar? *\n*      1= Clave       *\n*      2= Color       *\n*      3= Marca       *\n*      4= Precio      *\n*      5= Litros      *"<<endl;
				cout<<"***********************"<<endl;
				cin>>opc;
				system("cls");
				if(opc==1){
					cout<<"< Dame la nueva clave >"<<endl;
					cin>>cl;
					inv[n].setClave(cl);//Da nuevo valor a color
				}
				if(opc==2){
					cout<<"< Dame el nuevo color >"<<endl;
					cin>>c;
					inv[n].setColor(c);//Da nuevo valor a color
				}
				if(opc==3){
					cout<<"< Dame la nueva marca >"<<endl;
					cin>>m;
					inv[n].setMarca(m);//Da nuevo valor a marca
				}
				if(opc==4){
					cout<<"< Dame el nuevo precio >"<<endl;
					cin>>p;
					inv[n].setPrecio(p);//Da nuevo valor a precio
				}
				if(opc==5){
					cout<<"< Dame la nueva cantidad de litros >"<<endl;
					cin>>l;
					inv[n].setLitros(l);//Da nuevo valor a litros
				}
				cout<<"¿Desea cambiar algo mas?\n	si/no"<<endl;
				cin>>res;
			} while(res=="si");//Para seguir cambiando datos las veces deseadas
			res="si";
			i=0;//Resetear el contador de objetos para ciclos
			break;
		case 4:
			system("cls");//Limpiar pantalla
			while(i<cont){
				cout<<" ~~~~~~~~~~~~~~~~~ "<<endl;
				cout<<" Clave: "<<inv[i].getClave()<<endl;//Mostrar clave de "i"
				cout<<"\n Color: "<<inv[i].getColor()<<endl;//Mostrar Color de "i"
				cout<<"\n Marca: "<<inv[i].getMarca()<<endl;//Mostrar marca de "i"
				cout<<"\n Precio: $"<<inv[i].getPrecio()<<endl;//sino Mostrar precio de "i"
				cout<<"\n Contenido neto: "<<inv[i].getLitros()<<" L"<<endl;//Sino Mostrar litros en "i"
				cout<<"\n ~~~~~~~~~~~~~~~~~"<<endl;
				i++;
			};
			cout<<"\n¿Quieres regresar al menu?\n	si/no"<<endl;
			cin>>res;
			i=0;//Reinicar contador de objetos
			break;
		case 5:
			res="no";
			break;
		};
	};
	cout<<"\n Gracias por usar nuestro programa"<<endl;
	return 0;
};

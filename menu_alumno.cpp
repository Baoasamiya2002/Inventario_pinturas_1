#include <iostream>
#include <cstdlib>
using namespace std;

struct Alumno {
	char nombre[50];
	char matricula[12];
	char edad[3];
};
int main(int argc, char *argv[]) {
	int opc, n, cont=0, i=0, j=0, lim=4;
	string c, m, res, rcl;
	char p[50];
	char cl[50];
	Alumno a[3];
	cout<<"¿Quiere entrar a el menu? Escribe si, en caso contrario escribe no"<<endl;
	cin>>res;
	while(res=="si"){
		cout<<"\n\n************************\n* ¿Que desea realizar? * \n*     1= Agregar       * \n*     2= Cambiar       * \n*     3= Eliminar      * \n*     4= Mostrar       * \n*     5= Buscar        * \n*     6= Ordenar       * \n*     7= Salir         *\n************************"<<endl;
		cin>>opc;
		switch(opc){
		case 1: 
			do{
				if(cont>=lim){
					cout<<"|X| Ya alcanzaste el límite de alumnos a agregar |X|"<<endl;
					cont--;
					res="no";
				}
				else{
					cout<<"----------------------\n< Dame el nombre del alumno >"<<endl;
					cin>>cl;
					strcpy(a[cont].nombre, cl);
					cout<<"----------------------\n< Dame la matricula del alumno >"<<endl;
					cin>>cl;
					strcpy(a[cont].matricula, cl);
					cout<<"----------------------\n< Dame la edad del alumno >"<<endl;
					cin>>cl;
					strcpy(a[cont].edad, cl);
					cout<<"\n¿Quieres ingresar otro alumno?\n	si/no"<<endl;
					cin>>res;
				}
				cont++;
				i++;
			} while(res=="si");
			res="si";
			i=0;
			break;
		case 2:
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Que alumno quiere cambiar? Por favor indiquelo por su matricula >"<<endl;
			cin>>cl;
			strcpy(a[lim].matricula, cl);
			while(i<cont){
				if(strcmp(a[i].matricula,a[lim].matricula)!=0){
					i++;
					if(i>=cont){
						cout<<"|X| La matricula no existe, verifica que sea correcta y vuelve a intentarlo |X|"<<endl;
						i=0;
						cin>>cl;
						strcpy(a[lim].matricula, cl);
					}
				}
				else{
					n=i;
					i=cont;
				}
			}
			do{
				cout<<"* ¿Que desea cambiar? *\n*     1= Nombre       *\n*     2= Matricula    *\n*     3= Edad         *"<<endl;
				cin>>opc;
				if(opc==1){
					cout<<"< Dame el nuevo nombre >"<<endl;
					cin>>cl;
					strcpy(a[n].nombre, cl);
				}
				if(opc==2){
					cout<<"< Dame la nueva matricula >"<<endl;
					cin>>cl;
					strcpy(a[n].matricula, cl);
				}
				if(opc==3){
					cout<<"< Dame la edad >"<<endl;
					cin>>cl;
					strcpy(a[n].edad, cl);
				}
				cout<<"¿Desea cambiar algo mas?\n	si/no"<<endl;
				cin>>res;
			} while(res=="si");
			res="si";
			i=0;
			break;
		case 3:
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Que alumno quiere eliminar? Por favor indiquelo por su matricula >"<<endl;
			cin>>cl;
			strcpy(a[lim].matricula, cl);
			while(i<cont){
				if(strcmp(a[i].matricula,a[lim].matricula)!=0){
					i++;
					if(i>=cont){
						cout<<"|X| La matricula no existe, verifica que sea correcta y vuelve a intentarlo |X|"<<endl;
						i=0;
						cin>>cl;
						strcpy(a[lim].matricula, cl);
					}
				}
				else{
					n=i;
					i=cont;
				}
			}
			while(n!=cont){
				a[n]=a[n+1];
				n++;
			}
			strcpy(a[cont].nombre, " ");
			strcpy(a[cont].matricula, " ");
			strcpy(a[cont].edad, " ");
			cout<<"|O| El alumno "<<cl<<" fue eliminado con exito |O| \n Escribe 'ok' para regresar al menu"<<endl;
			cout<<"------------------------------------"<<endl;
			cin>>c;
			cont--;
			res="si";
			i=0;
			break;
		case 4:
			if(cont==0){
				cout<<"\n Aqui no hay nada... "<<endl;
			}
			while(i<cont){
				cout<<" ~~~~~~~~~~~~~~~~~ "<<endl;
				cout<<" Nombre: "<<a[i].nombre<<endl;
				cout<<"\n Matricula: "<<a[i].matricula<<endl;
				cout<<"\n Edad: "<<a[i].edad<<endl;
				cout<<"\n ~~~~~~~~~~~~~~~~~"<<endl;
				i++;
			};
			cout<<"\n¿Quieres regresar al menu?\n	si/no"<<endl;
			cin>>res;
			i=0;
			break;
		case 5:
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Como quieres buscarlo? >"<<endl;
			cout<<"*     1= Nombre       *\n*     2= Matricula    *"<<endl;
			cin>>opc;
			switch(opc){
			case 1:
				cout<<"------------------------------------"<<endl;
				cout<<"< ¿Cual es el nombre del alumno? >"<<endl;
				cin>>cl;
				strcpy(a[lim].nombre, cl);
				while(i<cont){
					if(strcmp(a[i].nombre,a[lim].nombre)!=0){
						i++;
						if(i>=cont){
							cout<<"|X| No existe alumno con ese nombre |X|"<<endl;
						}
					}
					else{
						n=i;
						i=cont;
						cout<<"El alumno buscado es\n"<<endl;
						cout<<" ~~~~~~~~~~~~~~~~~ "<<endl;
						cout<<" Nombre: "<<a[n].nombre<<endl;
						cout<<"\n Matricula: "<<a[n].matricula<<endl;
						cout<<"\n Edad: "<<a[n].edad<<endl;
						cout<<"\n ~~~~~~~~~~~~~~~~~"<<endl;
					}
					
				}
				cout<<"\n¿Quieres regresar al menu?\n	si/no"<<endl;
				cin>>res;
				i=0;
				break;
			case 2:
				cout<<"------------------------------------"<<endl;
				cout<<"< ¿Cual es la matricula del alumno? >"<<endl;
				cin>>cl;
				strcpy(a[lim].matricula, cl);
				while(i<cont){
					if(strcmp(a[i].matricula,a[lim].matricula)!=0){
						i++;
						if(i>=cont){
							cout<<"|X| No existe alumno con esa matricula |X|"<<endl;
						}
					}
					else{
						n=i;
						i=cont;
						cout<<"El alumno buscado es\n"<<endl;
						cout<<" ~~~~~~~~~~~~~~~~~ "<<endl;
						cout<<" Nombre: "<<a[n].nombre<<endl;
						cout<<"\n Matricula: "<<a[n].matricula<<endl;
						cout<<"\n Edad: "<<a[n].edad<<endl;
						cout<<"\n ~~~~~~~~~~~~~~~~~"<<endl;
					}
					
				}
				cout<<"\n¿Quieres regresar al menu?\n	si/no"<<endl;
				cin>>res;
				i=0;
				break;
			}
			break;
		case 6:
			cout<<"------------------------------------"<<endl;
			cout<<"< ¿Como quieres ordenarlo? >"<<endl;
			cout<<"*     1= Nombre       *\n*     2= Matricula    *\n*     3= Edad         *"<<endl;
			cin>>opc;
			switch(opc){
			case 1:
				for(i=0; i<cont; i++){
					for(j=i+1; j<cont; j++){
						if((strcmp(a[i].nombre,a[j].nombre))==1){ 
							strcpy(p, a[i].nombre);
							strcpy(a[i].nombre, a[j].nombre);
							strcpy(a[j].nombre, p);
							
							strcpy(p, a[i].matricula);
							strcpy(a[i].matricula, a[j].matricula);
							strcpy(a[j].matricula, p);
							
							strcpy(p, a[i].edad);
							strcpy(a[i].edad, a[j].edad);
							strcpy(a[j].edad, p);
						}
					}
				}		
				cout<<"Se han ordenado por nombre\n"<<endl;
				break;
			case 2:
				for(i=0; i<cont; i++){
					for(j=i+1; j<cont; j++){
						if((strcmp(a[i].matricula,a[j].matricula))==1){ 
							strcpy(p, a[i].nombre);
							strcpy(a[i].nombre, a[j].nombre);
							strcpy(a[j].nombre, p);
							
							strcpy(p, a[i].matricula);
							strcpy(a[i].matricula, a[j].matricula);
							strcpy(a[j].matricula, p);
							
							strcpy(p, a[i].edad);
							strcpy(a[i].edad, a[j].edad);
							strcpy(a[j].edad, p);
						}
					}
				}
				cout<<"Se han ordenado por matricula\n"<<endl;
				break;
			case 3:
				for(i=0; i<cont; i++){
					for(j=i+1; j<cont; j++){
						if((strcmp(a[i].edad,a[j].edad))==1){ 
							strcpy(p, a[i].nombre);
							strcpy(a[i].nombre, a[j].nombre);
							strcpy(a[j].nombre, p);
							
							strcpy(p, a[i].matricula);
							strcpy(a[i].matricula, a[j].matricula);
							strcpy(a[j].matricula, p);
							
							strcpy(p, a[i].edad);
							strcpy(a[i].edad, a[j].edad);
							strcpy(a[j].edad, p);
						}
					}
				}
				cout<<"Se han ordenado por edad\n"<<endl;
				break;
			};
			cout<<"\n¿Quieres regresar al menu?\n	si/no"<<endl;
			cin>>res;
			i=0;
			break;
		case 7:
			res="no";
			break;
		};
	};
	cout<<"\n\nGracias por usar el programa"<<endl;
	return 0;
}

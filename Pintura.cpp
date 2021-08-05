#include <iostream>
#include <string>
#include<stdlib.h>
#include "Pintura.h"
using namespace std;

Pintura::Pintura(){
	
};
Pintura::Pintura(string c, string m, float p, float l, string cl){
	color=c;
	marca=m;
	precio=p;
	litros=l;
	clave=cl;
};
string Pintura::getColor(){
	return color;
};
void Pintura::setColor(string c){
	color=c;
};
string Pintura::getMarca(){
	return marca;
};
void Pintura::setMarca(string m){
	marca=m;
};
float Pintura::getPrecio(){
	return precio;
};
void Pintura::setPrecio(float p){
	precio=p;
};
float Pintura::getLitros(){
	return litros;
};
void Pintura::setLitros(float l){
	litros=l;
};
string Pintura::getClave(){
	return clave;
};
void Pintura::setClave(string cl){
	clave=cl;
};

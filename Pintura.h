#include <string>
using namespace std;

class Pintura{
private:
	string clave;
	string color;
	string marca;
	float precio;
	float litros;

public:
	Pintura();
	Pintura(string c, string m, float p, float l, string cl);
	string getColor();
	void setColor(string c);
	string getMarca();
	void setMarca(string m);
	float getPrecio();
	void setPrecio(float p);
	float getLitros();
	void setLitros(float l);
	string getClave();
	void setClave(string cl);
};

#include "DynArray.hh"

class DynArray
{
public:
	//GETERS Y SETERS

	// constructors
	DynArray(void) {}; //POR DEFECTO; SIN ARGUMENTOS; HA DE CONSTRUIR UNA ARRAY PARA LA CONSTANTE DEFAULT { 8 }  CAPACITY = 8 // SIZE = 0

	DynArray(size_t size, const int &value) {}; // DECALRA UNA ARRAY DE N ELEMENTOS I LOS INICIALIZA EN UN VALOR

	// destructor
	~DynArray(void)
	{
		delete this;
	};

	DynArray& operator= (const DynArray &x)
	{
	};

	int* begin(void) const;		// DIRECION DEL PRIMER ELEMENTO DE LA ARRAY

	int* end(void) const;		// DIRECCION DEL ULTIMO ELEMENTO DE LA ARRAY


	friend bool operator== (const DynArray& lhs, const DynArray& rhs);		// checks if 2 arrays are equal (AL SER FRIEND; PUEDE ACCEDER A LOS ATRIBUTOS PRIVADOS DE LA ARRAY)
}
#include "DynArray.hh"

class DynArray 
{
public:
	//GETERS Y SETERS

	// constructors
	DynArray(void) : m_capacity{ 0 }, m_size{  }, *m_data{ 0 }
	{};

	// destructor
	~DynArray(void)
	{
		delete this;
	};
};
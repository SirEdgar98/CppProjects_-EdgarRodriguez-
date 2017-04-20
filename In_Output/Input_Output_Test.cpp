
// Estas son de C++
#include<iostream>
#include<fstream> 



void main() 
{	
	
	// operadores de entrada >> <istream>
	std::cin >> "";
	//operadores de salida << <ostream>
	std::cout << "";

	//Ficheros en C++
	// Lista de caracteres

	// FINAL DE FICHERO, en cada OS tierne una marca distinta, es un caracter no imprimible.
	 // EOF End Of File

	 // Secuencia de lectura escritura de ficheros
	   // 1. Abrir el fichero
	   // 2. Verificar que se ha abierto correctamente
	   // 3. Leer/ Escribit
	   // 4. Cerrar el fichero

//Abrir FIchero
	std::ofstream OutFile; // FICHERO DE SALIDA
	OutFile.open("");

	std::ifstream InFile; //FICHERO DE ENTRADA
	InFile.open("");

// LEER ENTEROS
	// SUPONEMOS QUE EL FICHERO CONTIENE
	// 1 2
	// 8 9 
	int x1, y1;
	InFile >> x1 >> y1;

// LEER POR LINEAS
	// Se usa el separador \n
	//Haciendo uso de una array de chars
	char line[250];
	while (InFile.getline(line, 250)) // La funcion Getline guarda los chars hasta encontrar el /n de la linea, que es el salto de lina
		//no hace falta controlar el EOF, ya que la fucnion te devuelve true siempre que pueda llegar al /n i devolvera false al llegar al EOF por defecto
		// asi que imprimira todas las lineas de fichero
	{
		//Procesar la linea
		std::cout << line << std::endl;
	}

//Cerrar Fichero
	InFile.close();
	OutFile.close();

}

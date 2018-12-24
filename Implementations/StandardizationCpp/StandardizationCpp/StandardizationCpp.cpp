#include "fstat.h"
#include<iostream>

int main()
{
	std::vector<double> v3{ 1.1,2.3,45.7,78.00,90.00,45.78 };
	std::vector<double> z{ 0,0,0,0,0,0 };//TODO: COMO DECLARA VACIO UN VECTOR EN C++ PARA LUEGO ALLOCAR VALORES

	std::cout << "tamano "<< v3.size()<<std::endl;
	std::cout << "media "<< mean(v3)<<std::endl;
	std::cout << "varianza " <<variance(v3)<<std::endl;

	for (int i = 0; i < v3.size(); i++) {
		z[i] = (v3[i]-mean(v3))/variance(v3);
		std::cout << "estandarizacion " << z[i];
	}

		std::cout << "La media/varianza es" << v3.size(); // mean(v3) / variance(v3);
	return 0;
}
#ifndef Date_h
#define Date_h
#include <string>


class Date {
	
 private:
	 
	 std::string strFecha;
	 
	int dia;
	int mes;
	int anio;
	int _hr;
	int _min;
	

 public:

    Date(std::string strFecha);

    std::string verEnStr();

    int d();

    int m();

    int a();

    int hr();

    int min();


};

#endif // Date_h

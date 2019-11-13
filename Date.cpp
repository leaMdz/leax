#include "Date.h"




Date::Date(std::string strFecha)
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BD5 begin
{
	this->dia = atoi(strFecha.substr(0,2).c_str());
	this->mes = atoi(strFecha.substr(3,5).c_str());
	this->anio = atoi(strFecha.substr(5,10).c_str());
	this->_hr = atoi(strFecha.substr(11,13).c_str());
	this->_min = atoi(strFecha.substr(14,strFecha.npos).c_str());
	this->strFecha = strFecha;
	
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BD5 end

std::string Date::verEnStr()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BDD begin
{
	return this->strFecha;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BDD end

int Date::d()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BDF begin
{
	return this->dia;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BDF end

int Date::m()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE1 begin
{
	return this->mes;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE1 end

int Date::a()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE3 begin
{
	return this->anio;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE3 end

int Date::hr()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE5 begin
{
	return this->_hr;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE5 end

int Date::min()
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE7 begin
{
	return this->_min;
}
// section 127-0-1-1-4474e22f:16a4228c63a:-8000:0000000000000BE7 end

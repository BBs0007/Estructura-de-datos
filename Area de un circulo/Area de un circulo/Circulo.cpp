#include "StdAfx.h"
#include "Circulo.h"


Circulo::Circulo(void)
{
}
float Circulo::Get_radio()
{
 return radio;
}
float Circulo::Get_area()
{
 return area;
}
void Circulo::Set_radio(float r)
{
 radio=r;
}
void Circulo::Set_area(float a)
{
 area=a;
}
float Circulo::Calcular()
{
	area=(radio*radio)*3.1416;
	return area;
}

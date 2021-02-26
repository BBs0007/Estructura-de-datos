#include "StdAfx.h"
#include "Calculos.h"


Calculos::Calculos(void)
{
}

float Calculos::Get_suma()
{
	return suma;
}
float Calculos::Get_resta()
{
	return resta;
}
float Calculos::Get_mult()
{
	return mult;
}

float Calculos::Get_divi()
{
	return divi;
}
float Calculos::Get_n1()
{
	return n1;
}
float Calculos::Get_n2()
{
	return n2;
}
float Calculos::Get_resultadoS()
{
	return resultadoS;
}
float Calculos::Get_resultadoR()
{
	return resultadoR;
}
float Calculos::Get_resultadoM()
{
	return resultadoM;
}
float Calculos::Get_resultadoD()
{
	return resultadoD;
}
	

	
void Calculos::Set_suma(float s)
{
	suma=s;
}
void Calculos::Set_resta(float r)
{
	resta=r;
}
void Calculos::Set_mult(float m)
{
	mult=m;
}
void Calculos::Set_divi(float d)
{
	divi=d;
}
void Calculos::Set_n1(float nu1)
{
	n1=nu1;
}
void Calculos::Set_n2(float nu2)
{
	n2=nu2;
}

void Calculos::Set_resultadoS(float rs)
{
	resultadoS=rs;
}
void Calculos::Set_resultadoR(float rr)
{
	resultadoR=rr;
}
void Calculos::Set_resultadoM(float rm)
{
	resultadoM=rm;
}
void Calculos::Set_resultadoD(float rd)
{
	resultadoD=rd;
}


float Calculos::Calcularsuma()
{
	resultadoS=n1+n2;
	return resultadoS;
}

float Calculos::Calcularresta()
{
	resultadoR=n1-n2;
	return resultadoR;
}

float Calculos::Calcularmult()
{
	resultadoM=n1*n2;
	return resultadoM;
}

float Calculos::Calculardivi()
{
	resultadoD=n1/n2;
	return resultadoD;
}
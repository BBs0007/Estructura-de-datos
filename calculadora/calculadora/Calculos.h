#pragma once
class Calculos
{
private: 

	float suma;
	float resta;
	float mult;
	float divi;
	float n1;
	float n2;
	float resultadoS;
	float resultadoR;
	float resultadoM;
	float resultadoD;

public:
	Calculos(void);
	float Get_suma();
	float Get_resta();
	float Get_mult();
	float Get_divi();
	float Get_n1();
	float Get_n2();

	float Get_resultadoS();
	float Get_resultadoR();
	float Get_resultadoM();
	float Get_resultadoD();
	
	void Set_suma(float s);
	void Set_resta(float r);
	void Set_mult(float m);
	void Set_divi(float d);
	void Set_n1(float nu1);
	void Set_n2(float nu2);
	
	void Set_resultadoS(float rs);
	void Set_resultadoR(float rr);
	void Set_resultadoM(float rm);
	void Set_resultadoD(float rd);

	float Calcularsuma();
	float Calcularresta();
	float Calcularmult();
	float Calculardivi();

};


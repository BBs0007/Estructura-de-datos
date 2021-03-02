#pragma once
class Circulo
	
{

private: 
	float radio;
	float area;
	
			 
		 
public:


	Circulo(void);

	float Get_radio();
	float Get_area();
	void Set_radio(float r);
	void Set_area(float a);

	float Calcular();
};


#include "pch.h"
#include <windows.h>
#include <math.h>  
#include <stdio.h> 

extern "C" {
	__declspec(dllexport) double __cdecl GetPerimeter(double side1, double side2, double side3);
	__declspec(dllexport) double __cdecl GetArea(double side1, double side2, double side3);
	__declspec(dllexport) void __cdecl GetDescription(double side1, double side2, double side3, char* buffer);

	double GetPerimeter(double side1, double side2, double side3)
	{
		return side1 + side2 + side3;
	}


	double GetArea(double side1, double side2, double side3)
	{
		double s;
		double area;

		s = (side1 + side2 + side3) / 2.0; 
		area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); 

		return area;
	}

	void GetDescription(double side1, double side2, double side3, char* buffer)
	{
		sprintf_s(buffer, 256, "Triangle with sides: %.2f, %.2f, %.2f", side1, side2, side3);
	}

}


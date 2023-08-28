#include <iostream>


double Sqrt(double x);
void some_function(double x);
double Pow_2(double x);

void main() 
{
	setlocale(LC_ALL, "");

	double x;
	std::cout << "Введите число: "; std::cin >> x;

	double root = sqrt(2);
	std::cout << Sqrt(x) << std::endl;
	std::cout << Pow_2(x) << std::endl;

	std::cout << root << std::endl;
	

}


double Sqrt(double x)     // извлечение корня 
{
	double guess = x / 2;

	while (guess * guess - x > 10e-12)
	{
		guess = (guess + x / guess) / 2;
	}
	return guess;
}


double Pow_2(double x) // просто возведение в квадрат 
{
	double result = x * x;
	
	return result;
}
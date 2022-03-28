#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void print_array(int m[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		m[i] = rand();
	}
}
void print_fill(int m[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << m[i] << ", ";
	}
	cout << "\n";
}
void print_array2(int m[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += m[i];
	}
	cout << sum << "\n";

}
void print_array3(int m[], int size)
{
	double sum = 0;
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		sum += m[i];
		total++;
	}
	cout << sum / total << "\n";
}

int main()
{
	int ar[5] = {};
	
	// пример передачи массива в качестве параметра
	print_array(ar, 5); // первый параметр - имя массива (без квадратных скобок)
	// второй параметр - какое количество элементов необходимо обработать
	print_fill(ar, 5);
	print_array2(ar, 5);
	print_array3(ar, 5);

}
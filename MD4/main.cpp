
// Funkcija main ievietojama vēl citā C++ failā(main.cpp).
// 
// D2. "Izveidot klasi ""Skola"" - School, kurā tiek glabāti 12 skaitļi - skolas klašu skolēnu skaits. 
// Klasei izveidot šādas metodes: 
// (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības, 
// (2) destruktors, kurš paziņo par objekta likvidēšanu, 
// (3) metode ""Mainīt"" - change ar diviem parametriem - klases numurs un jaunais skolēnu skaits, 
// (4) metode ""Drukāt"" - print, kas izdrukā skolēnu skaitu pa klasēm un kopējo skolēnu skaitu, 
// (5) metode ""Aprēķināt"" - calculate, kas izdrukā skolas kopējo skolēnu skaitu, 
//		vidējo skolēnu skaitu klasē, 
//		maksimālo un minimālo skolēnu skaitu klasē."
//
#include "program.h"


int main()
{
	int skolas_dati[] = { 11, 11, 13, 13, 11, 11, 13, 13, 11, 11, 13, 13 };
	Skola lu_skola(skolas_dati);
	lu_skola.print();
	lu_skola.change(3, 11);
	lu_skola.print();
	lu_skola.calculate();
}
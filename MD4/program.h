
//Klases hederi obligāti novietot atsevišķā hedera failā(program.h).
//
//Klases dati pēc noklusēšanas ir slēpti(private), bet metodes atklātas(public).

#ifndef __PROGRAM_H__
#define __PROGRAM_H__

class Skola {
private:
	int klases[12];
public:
	Skola(int input[]);//konstuktors

	~Skola();//destruktos

	void change(int klase, int skol_sk);//izmana vertibu norādītajā no klasē

	void print();//izdrukā skolēnu skaitu pa klasēm un kopējo skolēnu skaitu

	void calculate();//izdrukā skolas kopējo skolēnu skaitu, vidējo skolēnu skaitu klasē, maksimālo un minimālo skolēnu skaitu klasē."

};
#endif // !__PROGRAM_H__

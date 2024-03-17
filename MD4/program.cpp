
//Visas metodes realizēt ārpus hedera faila – speciālā C++ failā(program.cpp).

#include "program.h"
#include <iostream>

Skola::Skola(int input[]){//konstruktors
	std::copy(input, input + 12, klases);//norādam vietu atmiņā no kurienes uz kurieni pārkopēt
	}
Skola::~Skola() {//destruktors
	std::cout << "Skolas objekts tika idzests.\n";
}

void Skola::change(int klase, int skol_sk) {//izmaina skolēnu skaitu norādītajā klasē
		klases[klase - 1] = skol_sk;//-1 jo masīvs sākas ar 0 bet klases numuri ar 1
	}

void Skola::print() {//izvada info par klasēm un skolu
	int sum = 0;
	std::cout << "skolenu skaits pa klasem:\n";
	for (int i = 0; i < 12; i++) {
		sum = sum + klases[i];
		std::cout << i+1<<".klase -"<<klases[i]<<" \n";//i+1 jo for loops sākas ar 0 nevis 1
	}
	std::cout << "skolenu skaits skola:\n" << sum << "\n\n";
}

void Skola::calculate() {
	int sum = klases[0],//loop skaksies ar 1 tapec 0 elem ir jau jabut summā pirms loop
	min = klases[0],//pienemam ka pirmaja klase ir vismazakais skolēnu skaits
	max = klases[0];//pienemam ka pirmaja klase ir vislielakais skolēnu skaits
	float avg;//videjais skolenu skaits klasēs
	for (int i = 1; i < 12; i++) {//sakam loop ar 1 jo 0tais elem jau visiem mainigajiem ir piedēvēts
		sum = sum + klases[i];
		if (klases[i] > max)max = klases[i];
		if (klases[i] < min)min = klases[i];
	}
	avg = sum / 12.0;
	std::cout << "skolas kopejais skolenu skaits:\n" << sum << "\n";
	std::cout << "videjais skolenu skaits klase:\n" << avg << "\n";
	std::cout << "maksimalais skolenu skaits klase:\n" << max << "\n";
	std::cout << "minimalais skolenu skaits klase:\n" << min << "\n\n";
}


#include "Osoba.hpp"
#include <vector>

class Imenik {
public:
	void unos(string ime, string prezime, string broj);
	void unos(Osoba osoba);
	void prikaz();
	Osoba pretrazi(string broj);
private:
	std::vector<Osoba> osobe;
};



#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

struct Osoba {
	string ime;
	string prezime;
	string broj;
};

class Imenik {
public:
	void unos(string ime, string prezime, string broj) {
		osobe.push_back({ ime, prezime, broj });
	}
	void unos(Osoba osoba) {
		osobe.push_back(osoba);
	}
	void prikaz() {
		for (int i = 0; i < osobe.size(); i++) {
			std::cout << osobe[i].ime << " " << osobe[i].prezime << " " << osobe[i].broj << std::endl;
		}
		/*for (auto it = osobe.begin(); it != osobe.end(); it++) {
			std::cout << it->ime << " " << it->prezime;
		}*/
	}
	Osoba pretrazi(string broj) {
		for (int i = 0; i < osobe.size(); i++) {
			if (osobe[i].broj == broj) {
				return osobe[i];
			}
		}
		return { "", "", "" };
	}
private:
	vector<Osoba> osobe;
};

int main() {
	Imenik nasImenik;
	nasImenik.unos("Nina", "Badric", "0981232123");
	nasImenik.unos({ "Miro", "Skoro", "21323" });
	//nasImenik.prikaz();

	Osoba trazena = nasImenik.pretrazi("21323");
	std::cout << trazena.prezime;
}



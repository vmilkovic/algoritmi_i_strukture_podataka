#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Stog {
public:
	Stog() {}
	Stog(vector<string> vector) : stog(stog) {}
	string* vrh() {
		if (stog.empty()) {
			return nullptr;
		}
		else {
			return &stog.back();
		}
	}
	void ubaci(string string) {
		stog.push_back(string);
	}
	void izbaci() {
		if (stog.empty()) {
			cout << "Klasa je prazna" << endl;
		}
		else {
			stog.pop_back();
		}

	}

	int velicina() const {
		return stog.size();
	}
	bool prazan() {
		return stog.empty();
	}

private:
	vector<string> stog;
};

int main(){
	Stog stog;
	stog.ubaci("Ubaci1");
	stog.ubaci("Ubaci2");
	stog.ubaci("Ubaci3");

	cout << *stog.vrh() << endl;
	cout << stog.velicina() << endl;
	cout << stog.prazan() << endl;

	stog.izbaci();

	cout << *stog.vrh() << endl;
}
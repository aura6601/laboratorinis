#include "funkcijos.h"
#include "struktura.h"

int main()
{
	auto start1 = chrono::high_resolution_clock::now();

	list<studentas> sarasas = nuskaitymas();

	auto finish1 = chrono::high_resolution_clock::now();
	chrono::duration<double> time1 = finish1 - start1;
	cout << "Duomenu is failo nuskaitymas uztruko: " << time1.count() << "s" << endl;

	auto start2 = chrono::high_resolution_clock::now();

	vector<vargsiukai> varg;
	vector<galvociai> galv;

	for (studentas& s : sarasas) {
		if (s.galutinis < 5) {
			varg.push_back(vargsiukai{ s.vardas, s.pavarde, s.galutinis });
		}
		else if (s.galutinis >= 5) {
			galv.push_back(galvociai{ s.vardas, s.pavarde, s.galutinis });
		}
	}

	auto finish2 = chrono::high_resolution_clock::now();
	chrono::duration<double> time2 = finish2 - start2;
	cout << "Studentu suskirstymas uztruko: " << time2.count() << "s" << endl;

}
#include "funkcijos.h"
#include "struktura.h"

int main()
{
	string ats; 
	do {
		try {
			cout << "Pasirinkite konteinerio tipa 'list' arba 'vector'" << endl;
		    cin >> ats;

			if (ats != "list" && ats != "vector") {
				throw runtime_error("Klaida! Reikia ivesti 'list' arba 'vector'");
			}
		}
		catch (runtime_error& e) {
			cout << e.what() << endl;
			cout << "Jus ivedete: " << ats<< endl;
		}
	}
	while (ats != "list" && ats != "vector");
	if (ats == "list")
	{
		auto start1 = chrono::high_resolution_clock::now();

		vector<studentas> sarasas = nuskaitymas_vector();

		auto finish1 = chrono::high_resolution_clock::now();
		chrono::duration<double> time1 = finish1 - start1;
		cout << "Duomenu is failo nuskaitymas uztruko: " << time1.count() << "s" << endl;

		auto start2 = chrono::high_resolution_clock::now();

		list<vargsiukai> varg;

		for (studentas& s : sarasas) {
			if (s.galutinis < 5) {
				varg.push_back(vargsiukai{ s.vardas, s.pavarde, s.galutinis });
			}
		}

		auto finish2 = chrono::high_resolution_clock::now();
		chrono::duration<double> time2 = finish2 - start2;
		cout << "Studentu suskirstymas uztruko: " << time2.count() << "s" << endl;

		sarasas.clear();

	}
	else if{

	}
	else return 1;
	}
	
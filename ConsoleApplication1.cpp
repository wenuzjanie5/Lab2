// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "zadanie 1, 2 i 3"<<endl;

	float a, b, c, delta;
	cout << "podaj a, b i c" << endl;
	cin >> a >> b >> c;
	if (a != 0) {
		delta = (b * b) - (4 * a * c);

		if (delta == 0) {
			cout << "jedno rozwiazanie, x1 = " << -b / (2 * a) << endl;
		}
		else if (delta > 0) {
			cout << "dwa rozwiazania";
			cout << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl;
			cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		}
		else {
			cout << "brak rozwiazania" << endl;
		}
	}
	else {
		cout << "zadanie 1" << endl;
		int a, b;
		cout << "podaj a i b" << endl;
		cin >> a >> b;
		int solution = (0 - b) / a;
		cout << solution << endl;
	}

	cout << endl << "zadanie 4" << endl;

	int x;
	cout << "a)" << endl;
	cout << "podaj argument x" << endl;
	cin >> x;
	if (x > 0) 
		cout << 2 * x << endl;
	else if (x == 0) 
		cout << 0 << endl;
	else 
		cout << -3 * x << endl;

	cout << "b)" << endl;
	cout << "podaj argument x" << endl;
	cin >> x;
	if (x >= 1) 
		cout << x * x << endl;
	else 
		cout << x << endl;

	cout << "c)" << endl;
	cout << "podaj argument x" << endl;
	cin >> x;
	if (x > 2)
		cout << 2 + x << endl;
	else if (x == 2)
		cout << 8 << endl;
	else
		cout << x - 4 << endl;
	
	cout << endl << "zadanie 5" << endl;
	cout << "podaj x, y i z";
	int y, z;
	cin >> x >> y >> z;
	if      ((x >= y) && (y >= z))
		cout << x << y << z << endl;
	else if ((z >= x) && (x >= y))
		cout << z << x << y << endl;
	else if ((y >= z) && (z >= x))
		cout << y << z << x << endl;
	else if ((x >= z) && (z >= y))
		cout << x << z << y << endl;
	else if ((z >= y) && (y >= x))
		cout << z << y << x << endl;
	else if ((y >= x) && (x >= z))
		cout << y << x << z << endl;

	cout << endl << "zadanie 6" << endl;
	char odp;
	bool deszcz, autobus;
	cout << "czy jest autobus? (y/n)";
	cin >> odp;
	switch (odp) {
	case 'y':
		autobus = true;
		break;
	case 'n':
		autobus = false;
		break;
	}
	cout << "czy pada deszcz? (y/n)";
	cin >> odp;
	switch (odp) {
	case 'y':
		deszcz = true;
		break;
	case 'n':
		deszcz = false;
		break;
	}
	if (deszcz && autobus)
		cout << "Wex parasol" << endl << "Dostaniesz sie na uczelnie" << endl;
	else if (deszcz && !autobus)
		cout << "Nie dostaniesz sie na uczelnie" << endl;
	else if (!deszcz && autobus)
		cout << "Dostaniesz sie na uczelnie" << endl << "Milego dnia i pieknej pogody" << endl;
	else 
		cout << "Nie wiem" << endl;

	cout << endl << "zadanie 7" << endl;

	bool znizka, premia;
	cout << "czy jest premia? (y/n)";
	cin >> odp;
	switch (odp) {
	case 'y':
		premia = true;
		break;
	case 'n':
		premia = false;
		break;
	}
	cout << "czy jest znizka? (y/n)";
	cin >> odp;
	switch (odp) {
	case 'y':
		znizka = true;
		break;
	case 'n':
		znizka = false;
		break;
	}
	if (!znizka || premia)
		cout << "Mozesz kupic samochod !" << endl << "znizki na samochod nie ma" << endl;
	else if (!znizka || !premia)
		cout << "na samochod trzeba odlozyc na pozniej..."<<endl<<"znizki na samochod nie ma" << endl;
	else if (znizka || premia)
		cout << "mozesz kupic samochod" << endl;

	cout << endl << "zadanie 8" << endl;
	char choice;
	int a1;
	int b1;

	cout << "wybierz działanie (+, -, :, *) i podaj dwie liczby\n";
	cin >> choice >> a1 >> b1;

	switch (choice) {
	case '+':
		cout << a1 + b1;
		break;
	case '-':
		cout << a1 - b1;
		break;
	case ':':
		if (b == 0) break;
		else {
			cout << a1 / b1;
			break;
		}
	case '*':
		cout << a1 * b1;
		break;
	case '%':
		cout << a1 % b1;
		break;
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

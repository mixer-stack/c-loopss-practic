#include <iostream>
#include <string>
using namespace std;
int main() {
//1
	int number_1;
	cout << "vvedit chislo: ";
	cin >> number_1;
	for (int i = 0; i < number_1; i++) {
		cout << i << "\n";

	}
//2
	int start_2, finish_2, cont_2;
	cout << "vvedit pochatok diapazonu: ";
	cin >> start_2;
	cout << "vvedit cinets diapazonu: ";
	cin >> finish_2;
	if (start_2 > finish_2) {
		cont_2 = start_2;
		start_2 = finish_2;
		finish_2 = cont_2;
	}
	else if (start_2 == finish_2) {
		cout << "!!pochartok i kinets odnakovi!!";
	}
	cout << "\nparni chisla: ";
	for (int i = start_2; i < finish_2; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " , ";
		}
	}
	cout << "\nneparni chisla: ";
	for (int i = start_2; i < finish_2; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << " , ";
		}
	}
	cout << "\nchisla kratni semy: ";
	for (int i = start_2; i < finish_2; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << " , ";
		}
	}
//3
	int start_3, finish_3, sum_3 = 0;
	cout << "vvedit pochatok diapazonu: ";
	cin >> start_3;
	cout << "vvedit cinets diapazonu: ";
	cin >> finish_3;
	for (int i = start_3; i < finish_3; i++)
	{
		sum_3 += i;
	}
	cout << " suma vsih chisel diapazonu: " << sum_3;
//4
	int number_4 = 1, sum_4;
	cout << "vvedit chislo: ";
	cin >> sum_4;
	while (number_4 != 0) {
		cout << "vvedit chislo yake hochete dodaty: ";
		cin >> number_4;
		sum_4 += number_4;
	}
	cout << "vasha suma: " << sum_4;
//5
	int random_5, guess_5 = -1, attempts_5 = 0;
	srand(time(0));
	random_5 = rand()% 500 + 1;
	while (guess_5 != 0) {
		attempts_5++;
		cout << "vvedit zagadane chislo: ";
		cin >> guess_5;
		if (random_5 == guess_5) {
			cout << "vi vgadaly, tse chislo = " << guess_5;
			cout << "\nvashi sproby: " << attempts_5;

			break;
		}
		else if (random_5 > guess_5) {
			cout << "vi ne vgadaly, randomne chislo bilshe";
		}
		else if (random_5 < guess_5) {
			cout << "vi ne vgadaly, randomne chislo menshe";
		}
	}
	//6
	string first_valut_6, second_valut_6;
	float kurs_6, valut_in_6, valut_out_6;
	cout << "vvedit kilkist valuty: ";
	cin >> valut_in_6;
	cout << "vvedit vashu valuty(UAH,USD,EUR): ";
	cin >> first_valut_6;
	cout << "vvedit neobhidnu valuty(UAH,USD,EUR): ";
	cin >> second_valut_6;
	if (first_valut_6 == second_valut_6) {
		cout << "odnakovi valyty no mojna obminyvaty";
	}
	else {
		if (first_valut_6 == "UAH") {
			if (second_valut_6 == "USD") {
				kurs_6 = 0.024;
			}
			else if (second_valut_6 == "EUR") {
				kurs_6 = 0.021;
			}
			else {
				cout << "!!Incorect out valut!!";
			}
		}
		else if (first_valut_6 == "USD") {
			if (second_valut_6 == "UAH") {
				kurs_6 = 41.33;
			}
			else if (second_valut_6 == "EUR") {
				kurs_6 = 0.85;
			}
			else {
				cout << "!!Incorect out valut!!";
			}
		}
		else if (first_valut_6 == "EUR") {
			if (second_valut_6 == "USD") {
				kurs_6 = 1.17;
			}
			else if (second_valut_6 == "UAH") {
				kurs_6 = 48.36;
			}
			else {
				cout << "!!Incorect out valut!!";
			}
		}
		else {
			cout << "!!Incorect in valut!!";
		}
		valut_out_6 = valut_in_6 * kurs_6;
		cout << "vi otrimaly " << valut_out_6 << " " << second_valut_6;
	}
}
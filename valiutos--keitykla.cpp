#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const double GBP_Bendras  = 0.8729;
    const double GBP_Pirkti   = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras  = 1.1793;
    const double USD_Pirkti   = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras  = 104.6918;
    const double INR_Pirkti   = 101.3862;
    const double INR_Parduoti = 107.8546;

    int veiksmas;
    int valiuta;
    double suma;
    double rezultatas;
    double bendras;
    double pirkti;
    string pavadinimas;

    cout << fixed << setprecision(2);

    do
    {
        cout << endl;
        cout << "===== VALIUTOS KEITYKLA =====" << endl;
        cout << "1. Valiutos kurso palyginimas su euru" << endl;
        cout << "2. Valiutos pirkimas (EUR -> valiuta)" << endl;
        cout << "3. Valiutos pardavimas (valiuta -> EUR)" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkite veiksma: ";
        cin >> veiksmas;

        if (veiksmas == 4)
        {
            cout << "Programa baigta. Viso gero!" << endl;
        }
        else if (veiksmas < 1 || veiksmas > 3)
        {
            cout << "Klaida: tokio meniu pasirinkimo nera!" << endl;
        }
        else
        {
            cout << endl;
            cout << "Pasirinkite valiuta:" << endl;
            cout << "1 - GBP" << endl;
            cout << "2 - USD" << endl;
            cout << "3 - INR" << endl;
            cout << "Jusu pasirinkimas: ";
            cin >> valiuta;

            if (valiuta == 1)
            {
                bendras = GBP_Bendras;
                pirkti = GBP_Pirkti;
                pavadinimas = "GBP";
            }
            else if (valiuta == 2)
            {
                bendras = USD_Bendras;
                pirkti = USD_Pirkti;
                pavadinimas = "USD";
            }
            else if (valiuta == 3)
            {
                bendras = INR_Bendras;
                pirkti = INR_Pirkti;
                pavadinimas = "INR";
            }
            else
            {
                cout << "Klaida: tokios valiutos nera!" << endl;
                continue;
            }

            switch (veiksmas)
            {
            case 1:
                cout << "1.00 EUR = " << bendras << " " << pavadinimas << endl;
                cout << "1.00 " << pavadinimas << " = " << 1 / bendras << " EUR" << endl;
                break;

            case 2:
                cout << "Iveskite suma eurais: ";
                cin >> suma;
                if (suma <= 0)
                {
                    cout << "Klaida: suma turi buti teigiama!" << endl;
                }
                else
                {
                    rezultatas = suma * pirkti;
                    cout << "Pradine suma: " << suma << " EUR" << endl;
                    cout << "Perkama valiuta: " << pavadinimas << endl;
                    cout << "Gaunama suma: " << rezultatas << " " << pavadinimas << endl;
                }
                break;

            case 3:
                cout << "Pardavimas dar nepadarytas." << endl;
                break;
            }
        }

    } while (veiksmas != 4);

    return 0;
}

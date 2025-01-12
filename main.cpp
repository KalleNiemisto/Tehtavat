#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    std::srand(std::time(0));
    int random_number = std::rand() % 20 + 1;
    int guesstimes = 0;

    cout << "Arvaa tietokoneen arpoma luku valilta 1- " << maxnum << "." << endl;

    while(true) {
        int guess;
        cout << "Anna arvauksesi: ";
        cin >> guess;

         guesstimes++;

        if (guess < random_number) {
            cout << "Luku on suurempi." << endl;
        }

        else if (guess > random_number) {
            cout << "Luku on pienempi." << endl;
        }

        else {
            cout << "Oikea vastaus! Luku oli " << random_number << "." << endl;
            cout << "Arvasit " << guesstimes << " kertaa." << endl;
            break;
        }
    }
    return guesstimes;
}


int main()
{
    int maxnum;

    cout << "Anna suurin mahdollinen arvottava luku: ";
    cin >> maxnum;

    game(maxnum);
    return 0;
}

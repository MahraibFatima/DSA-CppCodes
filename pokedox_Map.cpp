#include <iostream>
#include <unordered_map>
#include <string>
#include <list>
using namespace std;
int main()
{

    unordered_map<string, list<string>> pokedox;

    list<string> pikachuAttack{"Thunder shock", "Iron tail", "Thunder shock"};
    list<string> charmanderAttack{"Flame Charge", "Flamethrower", "Frustration Shadow"};
    list<string> chikoritaAttacks{"Body Slam", "Energy Ball", "Grass Knot"};

    pokedox.insert(pair<string, list<string>>("Pikachu", pikachuAttack));
    pokedox.insert(pair<string, list<string>>("Charmander", charmanderAttack));
    pokedox.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

    for (auto pair : pokedox)
    {
        cout << pair.first << endl
             << "\t";
        for (auto attack : pair.second)
            cout << attack << " ";

        cout << endl;
    }

    return 0;
}
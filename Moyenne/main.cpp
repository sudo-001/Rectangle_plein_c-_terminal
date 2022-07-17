#include <iostream>

using namespace std;

// Protoype de la fonction qui calcule la moyenne
double moyenne(double notes[], int nbreNote);

int main()
{
    int nbreNotes(5);

    double notes[nbreNotes];

    notes[0] = 12;
    notes[1] = 13;
    notes[2] = 14;
    notes[3] = 15;
    notes[4] = 16;

    cout << "La moyenne de ces notes est : " << moyenne(notes, nbreNotes) << endl;

    return 0;
}

double moyenne(double notes[], int nbreNote)
{
    double moyenne, somme;

    for (int i(0);i<nbreNote; i++)
    {
        somme +=(notes[i]);
    }

    moyenne = somme / nbreNote;

    return moyenne;
}

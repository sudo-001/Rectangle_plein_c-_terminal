#include <iostream>

using namespace std;

void rectangle(double longueur, double largeur, char symbole)
{

    if (longueur<0 or largeur<0)
    {
        cout << "La longueur ou la largeur est négative veuillez relancer le programme et saisir des valeurs positives " << endl;
        return ;
    } else {
        for (int i(0);i<largeur;i++)
        {
            for (int j(0);j<longueur;j++)
                {
                    cout << symbole;
                }
            cout << endl;
        }
    }


}

int main()
{
    double longueur , largeur;
    char symbole;

    cout << "Entrez la longueur du rectangle : " ;
    cin >> longueur ;

    cout << "Entrez la largeur du rectangle : ";
    cin >> largeur;

    cout << "Entrez le symbole dont vous voullez obtenir un rectangle : ";
    cin >> symbole;

    rectangle(longueur , largeur , symbole);
    return 0;
}

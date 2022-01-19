/**
  Obs: Dat fiind că citirea datelor are deja O(n), dacă după citire facem și-o parcurgere
clasică a vectorului, algorimtul rămâne TOT în O(n) (că de fapt e O(2*n)) deci ordinul de
complexitate NU se modifică, algoritmul rămânând tot liniar.

  Ca să avem o departajare între un algoritm naiv (căutare pe for) și unul smart, considerăm
eficiența DUPĂ ce datele au fost deja citite într-un vector.

  Rezolvarea eficientă se bazează pe alogoritmul de căutare binară.

  Astfel, presupunem că vectorul este v și capetele intervalului sunt a și b.

  Facem o căutare binară a lui a în v.
  Dacă îl găsim, răspunsul este chiar a.

  Dacă nu-l găsim, alg. de căutare binară s-a oprit cu v[lf] < a < v[li]
și deci, în principiu, elementul care ne-ar interesa este v[li].
 DAR mai avem următoarele două situații:
   dacă li>n  înseamnă că a este de fapt mai mare decât ORICE elem. din șir => NU există
   dacă li<=n verific ca v[li]<=b  (deci numărul găsit să fie în intervalul dat.)
   Dacă da, el (adică v[li]) este răspunsul. Dacă nu, din  nou avem de-a face cu "nu există"
*/
#include <iostream>
#include <fstream>

using namespace std;

int cb(int v[], int n, int a)
{
    int li, lf;
    li = 1;
    lf = n;
    int m = (li + lf) / 2;
    while (li <= lf)
    {
        if (v[m] == a)
            return m;
        if (a < v[m])
            lf = m - 1;
        else
            li = m + 1;
        m = (li + lf) / 2;
    }
    return li;
}

int main()
{
    ifstream fin("bac.txt");
    int n, v[30001], a, b;
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];
    fin >> a >> b;

    int r = cb(v, n, a);
    if (r > n)
    {
        cout << "nu exista";
        return 0;
    }
    if (r <= n)
    {
        if (v[r] <= b)
        {
            cout << v[r];
            return 0;
        }
        cout << "nu exista";
        return 0;
    }
    return 0;
}

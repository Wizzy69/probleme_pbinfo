/**
Rezolvare eficientă:
  notăm cu x primul număr.
  Ele tre' să fie în număr de k și să dea suma n.

Deci:
  x+(x+1)+(x+2)+...(x+(k-1)) = n
        k   termeni
  =>   x = n/k - (k-1)/2 = (2*n-k*k+k)/2*k

  SO, dacă numărătorul 2*n-k*k+k  NU se împarte exact la 2*k = răspunsul este NU
     De asemenea, dacă x<0  => răspunsul este nu

În caz contrar afișăm k numere începând cu x.

Este eficient pt. că are ord. de complexitate O(k).

*/
#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int x = (2 * n - k * k + k) / (2 * k);
  if (x < 0 || ((2 * n - k * k + k) % (2 * k)) != 0)
    cout << "nu exista";
  else
    for (int i = 0; i < k; i++)
      cout << x + i << " ";

  return 0;
}

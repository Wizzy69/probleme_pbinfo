/**
 * Exercitiul 1:
 *  Raspuns: a
 * 
 * Exercitiul 2:
 * a)***#***
 * n    i   j
 * 4    1   4
 *      2   4
 *      3   4
 *         
 * b) 12
 * d) citeşte n (număr natural nenul)
       i <- 1
      ┌cat timp i<n execută
      │┌dacă i%2=0 atunci
      ││ scrie ’#’
      │└■
      | j <- i+1
      │┌cat timp j<=n execută
      ││ scrie ’*’
      || j <- j+1
      │└■
      | i <- i+1
      └■
 c)
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            cout << '#';
        for (int j = i + 1; j <= n; j++)
            cout << '*';
    }
    return 0;
}

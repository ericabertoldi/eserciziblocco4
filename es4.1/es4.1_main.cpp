/*  SUP che chiede all'utente di specificare un intervallo per il quale calcolare le seguenti classificazioni
numeriche. Le verifiche di appartenenza devono essere svolte in funzioni. Per ogni gruppo sono indicati
gli identificativi di serie numeriche OEIS.
 Numeri Abbondanti: numeri più piccoli della somma dei divisori propri. A005101.
Esempio: 12 essendo 1+2+3+4+6 = 16.
 Numeri Difettivi: numeri più grandi della somma dei divisori propri. A005100.
Esempio: 21 essendo 1+3+7 = 11.
 Numeri Abbondanti Primitivi: numeri Abbondanti i cui divisori propri sono tutti numeri Difettivi.
A071395.
 Numeri Semiperfetti: numeri uguali alla somma di alcuni dei suoi divisori propri. A005835.
 Numeri Bizzarri: numeri Semiperfetti che non sono abbondanti. A006037   */

#include "numtheory.hpp"
#include <iostream>

using namespace std;
int main()
{
    int start, stop;
    cout << "insert starting number" << endl;
    cin >> start;
    cout << "insert ending number" << endl;
    cin >> stop;

    for (int y = start; y <= stop; y++) {
        cout << y << endl;
        if (isAbundant(y)) {
            cout << " abundant" << endl;
        }
        if (isDeficient(y)) {
            cout << " deficient" << endl;
        }
        if (isAbundantPrimitive(y)) {
            cout << " abundantprimitive" << endl;
        }
    }
    return 0;
}
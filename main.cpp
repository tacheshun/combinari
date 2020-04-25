//Bloc de sarcini 3
//Problema 2
#include <iostream>
using namespace std;

int combinari(int c, int k) {
    if (k == 0)
        return 1;
    else if (k > c)
        return 0;
    else
        return (combinari(c - 1, k) + combinari(c - 1, k - 1));
}

int main() {
    int k, c;
    cout << "Combinari.\n\n"
         << "Combinari de ";
    cin >> c;
    cout << "Luate cate ";
    cin >> k;
    cout << "Rezultatul combinarii este " << combinari(c, k);
}
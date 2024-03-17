/*== = B7 ====================================== =

Izveidot programmu gan C++, gan Python, obligāti izmantojot norādītās vai kādas citas funkcijas.
Prasības tādas pašas kā iepriekšējā uzdevumā, precīzāk sk.Laboratorijas darbu noteikumos.

B7.Dots naturāls skaitlis n < 10. Atrast visus racionālos skaitļus, kuri atrodas intervālā[0, 1]
un kuriem saucējs nepārsniedz n.
*/


#include <iostream>
using namespace std;

int main()
{   
    //Autors pieņem, ka saucējs nedrīkst būt 0

    int n = 9;//Maksimālaā vērtība naturālam skaitlim ('grutakais variants')
    for (int i = 0; i <= n; i++) {//
        for (int j = 1; j <= n; j++) {//saucēju loop // sākam ar 1 jo saucējs nedrikst but 0
            if (i <= j) {// tatad dalijums ir mazaks vai vienads ar 1
                cout << i << "/" << j << endl;
            }
        }
    }
}
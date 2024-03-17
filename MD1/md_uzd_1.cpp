
/*


== = A8 ====================================== =

Izveidot programmu gan C++, gan Python.
Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs 
paziņojums.Jābūt iespējai programmu izpildīt atkārtoti.Atrādot programmu, jāatrāda:
a) programmas teksts,
b) testa piemēri,
c) programma darbībā.
Precīzākas prasības sk.Laboratorijas darbu noteikumos.

A8.Dots naturāls skaitlis n.Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.
*/

#include <iostream>
using namespace std;

int main()
{   
    //Autors pieņem, ka 0 ir naturāls skaitlis 
    
    int x;// Mainigais, kura tiks ievadits naturals skaitlis
    cout << "Ievadi naturalu skaitli:";
    cin >> x;

    if (x < 0) cout << endl << "Nepareiza ievade!" << endl << "Ludzu ievadiet naturalu skaitli!\n";
    else if (x == 0) cout << 0;// vadrats 0 un reizinajums ar 0 ir 0
    else {
        for (int i = 1; i * i <= x; i++) {//sakam ar 1 jo reizinajums ar 0 ir 0
            if (x % (i * i) == 0) {
                cout<<i*i<<endl;
            }
        }
    }
    

}
/*
|----------|---|---------------------|---|---|--------|
| Input    | 0 | -81                 | 1 | 2 | 81     |
|----------|---|---------------------|---|---|--------|
| Expected | 0 | "Nepareiza ievade!" | 1 | 1 | 1,9,81 |
|----------|---|---------------------|---|---|--------|
| C++      | 0 | "Nepareiza ievade!" | 1 | 1 | 1,9,81 |
|----------|---|---------------------|---|---|--------|
| Python   | 0 | "Nepareiza ievade!" | 1 | 1 | 1,9,81 |
|----------|---|---------------------|---|---|--------|
*/
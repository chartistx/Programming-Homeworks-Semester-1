
// == = C4 ====================================== =
//
// Izveidot programmu valodā C++, obligāti izmantojot norādītās vai kādas citas funkcijas.
//
// C4.
// Dota skaitļu virkne a(1), a(2), , a(n), kur visi 
// elementi ir pa pāriem atšķirīgi.Samainīt vietām šajā 
// virknē lielāko un pēdējo elementu.
//

#include <iostream>
using namespace std;
void uzgeneret_virkni_ar_random_skaitliem(int n,float* virnes_point);//ģenerē un izprintē random skaitļu virkni
int atrast_lielaka_skaitla_vietu(int n, float virkne[]);//atriež lielāka skaiļa atrašanās vietu masīvā 

int main()
{   
    int n;

    cout << "Ievadiet virknes izmeru: \n";
    cin >> n;
    float* sk_virkne = new float[n];//izveido virkni ievaditā virnes izmera lielumā
    uzgeneret_virkni_ar_random_skaitliem(n,sk_virkne);
   

    int lokacija_lielakajam_sk = atrast_lielaka_skaitla_vietu(n, sk_virkne);
    
    float pagaidu_mainigais = sk_virkne[n - 1];//samainišanas operacijai vajadzigs pagaidu mainigais
                                                //kur uzglabat skaitli kamer notiek maina
                                         
    sk_virkne[n - 1] = sk_virkne[lokacija_lielakajam_sk];
    sk_virkne[lokacija_lielakajam_sk] = pagaidu_mainigais;
    

    //izprintejam rezultātu pēc skaitļu maiņas
    cout << "\nRezultats:\n";
    for (int i = 0; i < n; i++) {
        cout << sk_virkne[i];
        if (i == lokacija_lielakajam_sk)cout << " <-----\n";
        else cout << endl;
    }

    delete[] sk_virkne;
        
}

int atrast_lielaka_skaitla_vietu(int n, float virkne[]) {
    int lokacija_lielakajam_sk = 0;//pieņemam ka pirmais sk ir lielakais
    for (int i = 1; i < n; i++) {//sākam loop ar 1 jo pieņemam ka 0 pozicija ir lielakais skaitlis
        if (virkne[i] > virkne[lokacija_lielakajam_sk])lokacija_lielakajam_sk = i;
    }
    return lokacija_lielakajam_sk;
}

void uzgeneret_virkni_ar_random_skaitliem(int n,float *sk_virkne) {
    
    srand((unsigned)time(NULL));//rand funkcijas inicializacija un bāzes skaitla definēšana
    
    cout << "\nTika uzgenereti sadi skaitli: \n";

    for (int i = 0; i < n; i++) {
        //Komentēti random ģenerēšanas veidi priekš testēšanas
        // 
        //sk_virkne[i] = rand() % (100) - 50;//ģenerējam skaitlus robežā no -50 līdz 50
        //sk_virkne[i] = rand() % (100) - 100;//ģenerējam skaitlus robežā no -100 līdz 0
        //sk_virkne[i] = rand() % (100);//ģenerējam skaitlus robežā no 0 līdz 100
        //sk_virkne[i] = 0; //ģenerējam 0
        sk_virkne[i] = (rand() % (1000) - 500)/10.0;//ģenerējam skaitlus robežā no -50.0 līdz 50.0

        cout << sk_virkne[i] << endl;
    }
    
}



/*
|-----------------------|-----------------------|-----------------------|
| Input                 | Expected              | C++                   | 
|-----------------------|-----------------------|-----------------------|
| 0,0,0,0,0,0           | 0,0,0,0,0,0           | 0,0,0,0,0,0           |
|-----------------------|-----------------------|-----------------------|
| -6,27,-37,49          |  -6,27,-37,49         | -6,27,-37,49          |
|-----------------------|-----------------------|-----------------------|
| -16,-69,-21,-53,-16   |   -16,-69,-21,-53,-16 |  -16,-69,-21,-53,-16  |
|-----------------------|-----------------------|-----------------------|
| 7,48,60,19,19         |  7,48,19,19,60        | 7,48,19,19,60         |
|-----------------------|-----------------------|-----------------------|
| 6.5,-36.7,-8.2,-16.7  | -16.7,-36.7,-8.2,6.5  | -16.7,-36.7,-8.2,6.5  |
|-----------------------|-----------------------|-----------------------|

*/


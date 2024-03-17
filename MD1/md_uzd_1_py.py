
#   == = A8 ====================================== =

#   Izveidot programmu gan C++, gan Python.

#   Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs 
#   paziņojums.Jābūt iespējai programmu izpildīt atkārtoti.Atrādot programmu, jāatrāda:

#   a) programmas teksts,
#   b) testa piemēri,
#   c) programma darbībā.

#   Precīzākas prasības sk.Laboratorijas darbu noteikumos.

#   A8.Dots naturāls skaitlis n.Izdrukāt tos skaitļa n reizinātājus, kuri ir kāda naturāla skaitļa kvadrāti.


x = int(input("Ievadiet naturalu skaitli: "))

if x<0:# x jabut naturalam skaitlim
    print("Nepareiza ievade! Ludzu ievadīt naturalu skaitli!")
elif x==0:
    print(0)# kvadrāts un reizinajums ar 0 ir 0
else:
    i=1# naturālo skaitļu mainīgas, sākam ar 1 jo reizinajumi ar 0 ir 0
    while i*i<=x:
        if x%(i*i)==0:
            print(i*i)
        i+=1
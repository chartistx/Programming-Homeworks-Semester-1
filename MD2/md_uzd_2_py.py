
#== = B7 ====================================== =

#Izveidot programmu gan C++, gan Python, obligāti izmantojot norādītās vai kādas citas funkcijas.
#Prasības tādas pašas kā iepriekšējā uzdevumā, precīzāk sk.Laboratorijas darbu noteikumos.

#B7.Dots naturāls skaitlis n < 10. Atrast visus racionālos skaitļus, kuri atrodas intervālā[0, 1]
#un kuriem saucējs nepārsniedz n.


#Autors pieņem, ka saucējs nedrīkst būt 0

n = 9 #Maksimālaā vērtība naturālam skaitlim ('grutakais variants')

for i in range(0,n+1):#skaititaja cikls, i = skaititaja mainigais 
    for j in range(1,n+1):# sauceja cikls , j = sauceja mainigais , sākam ar 1 jo saucējs != 0
        if(i<=j):# tatad dalijums ir mazaks vai vienads ar 1
            print(i,"/",j)


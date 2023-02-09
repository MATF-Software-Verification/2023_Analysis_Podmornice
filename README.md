# 2023_Analysis_Podmornice

# Samostalni praktični rad u okviru kursa Verifikacija softvara

U ovom radu biće dat detaljan prikaz analize projekta koji se nalazi na sledecoj adresi: 
https://github.com/matf-pp/2021_Podmornice.
Projekat je nastao u okviru kursa Programske paradigme a tvorci su Sara Mišić (github nalog: https://github.com/SaraMisic) i Milena Filipović (github nalog: https://github.com/Milena-99). \
Projekat koji se analizira je igrica potapanja podmornica. Postoje pet podmornica različitih veličina koje mogu biti postavljene horizontalno ili vertkalno.
Pri svakom pokretanju igrice podmornice se iznova postavljaju na slučajan način. Igrač bira polja koja otvara u nadi da ce potopiti neku podmornicu. U toku igre dostupna je tabela u kojoj igrač vidi koju je podmornicu potopio i ispisan je broj koraka koji je do tada napravljen. Svako promašeno polje se boji u crveno a svako pogođeno u neku nijansu plave (svaka podmornica ima jednu nijansu plave). Ukoliko igrač uspe da nađe sve podmornice u najviše 60 koraka podebio je, u suprotnom je izgubio.
Primena alata će biti izvršena na main grani, nad komitom čiji je
hash code sledeći: ec528ce43af9de94bf2fab308ce2d6270584881c. \
Dataljan postupak i opis analize projekta dat je u ProjectAnalysisReport.pdf. 

# Alati koji su korišćeni za verifikaciju:
1.Valgrind alat Memcheck \
2.Valgrind alat Callgrind \
3.GCOV  \
4.UnitTest  

# Zaključci koji su doneti i bagovi koji su otkriveni:
Testiranje koje je rađeno na odredjenim funkcijama je uspešno. Odnosno svi testovi prolaze i imaju dobru pokrivenost. Testiraju se sve funkcije koje opisuju logiku igrice.   \
Nema curenja memorije i funkcije su optimalno implementirane. Može se povećati granularnost koda radi lakšeg testiranja. Nije zgodno za testiranje što su korišćene random funkcije tj. generisani su random brojevi. 

# Autor
Milica Kleut 1025/2022 

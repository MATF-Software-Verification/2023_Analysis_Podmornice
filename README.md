# 2023_Analysis_Podmornice

# Samostalni praktični rad u okviru kursa Verifikacija softvara

U ovom radu biće dat detaljan prikaz analize projekta koji se nalazi na sledecoj adresi: 
https://github.com/matf-pp/2021_Podmornice.
Projekat je nastao u okviru kursa Programske paradigme a tvorci su Sara Mišić (github nalog: https://github.com/SaraMisic) i Milena Filipović (github nalog: https://github.com/Milena-99). 
Primena alata će biti izvršena na main grani, nad komitom čiji je
hash code sledeći: ec528ce43af9de94bf2fab308ce2d6270584881c. \
Dataljan postupak i opis analize projekta dat je u ProjectAnalysisReport.pdf. 

# Alati koji su korišćeni za verifikaciju:
1.Valgrind alat Memcheck \
2.Valgrind alat Callgrind \
3.GCOV  \
4.UnitTest  

# Zaključci koji su doneti i bagovi koji su otkriveni:
Najveći udeo u izvršavanju imaju funkcije za pravljenje gui-a. Mali je udeo funkcija koje su direktno implementirane u kodu koji analiziramo.  \
Testiranje koje je rađeno na odredjenim funkcijama je uspešno. Odnosno svi testovi prolaze.  \
Najveći problem koji je nađen u kodu jeste curenje memorije. Dataljan izveštaj o curenju memorije je dobijen kao izlaz Memcheck-a.

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits.h>
#include <string.h>
#include <vector>
#include <string.h>

using namespace std;

void es1();
void es2();
void es3();
void es4();
void es5();
void es19();
void es24();
void es31();
void es40();
void es46();
void es54();
void es56();
void es67();

//struttura e funzione es67




int main(){
  int scelta;
  do{
    cout << endl << endl;
    cout << "1. Caricare un vettore di N elementi con valori letti da tastiera." << endl;
    cout << "2. Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice." << endl;
    cout <<"3. Caricare un vettore di N elementi, stampando la somma dei suoi elementi." << endl;
    cout << "4. Determinare se un numero e' pari o dispari."<< endl;
    cout << "5. Somma degli elementi che precedono il primo 0 nel vettore e la sua posizione." << endl;
    cout << "19. Quadrati numeri relativi." << endl;
    cout <<"24. Positivi, negativi e nulli." << endl;
    cout << "31. calendario 1990." << endl;
    cout <<"40. Potenza maggiore, minore e la loro posizione nel vettore." << endl;
    cout << "46. Volume col prezzo massimo e minimo di un dato argomento." << endl;
    cout << "54. Riordinare l'elenco in ordine alfabetico." << endl; 
    cout <<"56. Determinare il saldo finale conoscendo i movimenti effettuati." << endl;
    cout << "67. Determina gli elementi che si ripetono piu' spesso e la frequenza" << endl;



    cout << "0. Fine!" << endl;
    cin >> scelta;
    if(cin.fail()){
      cout << "wrong number" << endl;
      cin.clear();
      scelta = -1;
    }else{
      switch(scelta){
        case 0:
          cout << "good bye" << endl;
          break;
        case 1:
          es1();
          break;
        case 2:
          es2();
          break;
        case 3:
          es3();
          break;
        case 4:
          es4();
          break;
        case 5:
          es5();
          break;
        case 19:
          es19();
          break;
        case 24: 
          es24();
          break;
        case 31:
          es31();
          break;
        case 40:
          es40();
          break;
        case 46:
          es46();
          break;
        case 54:
          es54();
          break;
        case 56:
          es56();
          break;
        case 67:
          es67();
          break;
        default:
          cout << "wrong choice" << endl;
      }
    }
     if(scelta != 0){
        cout << "\nscrivi un carattere e digita invio" << endl;
        string avanti;
        cin >> avanti;
      }
  }while(scelta != 0);
return 0;
}
void es1(){
  cout << "Caricare un vettore di N elementi con valori letti da tastiera." << endl <<endl;
  // tutti gli esercizi cominciano cosi':
  int N=5; // qua solo 5 perche' dobbiamo metterli a mano;
  int numeri[N]; // cambiando il valore di N cambia la dimensione del vettore;
  cout << "Dovrai inserire " << N << " valori" << endl;
    for (int i = 0; i < N; i++){
      cout << "inserisci il " << (i+1) << "° valore" << endl;
      cin >> numeri[i];
    }
    // alla fine di ogni esercizio visualizzo il/i vettore/i;
      for ( int i = 0; i < N; i++){
        cout << numeri[i] << " ";
      }
    cout << "\nFatto";
}

void es2(){
  cout << "Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice." << endl << endl;
 int N;
 N = 10; // numero elementi nel vettore;
 int numeri[N];
  for(int i = 0; i < N; i++){ //gli elementi del vettore assumono come valore la posizione che hanno all'interno del vettore stesso;
    numeri[i] = i;
  }
  for(int i = 0; i < N; i++){ //output vettore;
  cout << numeri[i] << " ";
  }
  cout << "\nFatto";
}

void es3(){
  cout <<"Caricare un vettore di N elementi, stampando la somma dei suoi elementi." << endl << endl;
  int N = 5; // numero di elementi del vettore;
  int numeri[N];
  int somma = 0;
    for(int i = 0; i < N; i++){ // carico il vettore con N elementi casuali;
      numeri[i]=rand() % 9 + 1;
      
    }
      for(int i = 0; i < N; i++){ // faccio la somma;
        somma = somma + numeri[i];
      }

        for(int i = 0; i < N; i++){ // mostro i valori nel vettore;
         cout << numeri[i] << " ";
        }
    cout << "\nLa somma e': " << somma << "." << endl; // output;
  
} 

void es4(){
  cout << "Dato un vettore di N elementi, determinare se ciascun elemento e' pari o dispari (ovviamente gli elementi sono numeri interi) (l'output sara' l'elenco degli elementi del vettore con a fianco la scritta pari o dispari)." << endl << endl;
  int N = 100;
  int numeri[N];
    for (int i = 0; i < N; i++){
      numeri[i] = rand() % 100 + 1;
    }
    for(int i = 0; i < N; i++){
      if(numeri[i] % 2 == 0){
        cout << numeri[i] << " pari" << endl;
      }else if(numeri[i] % 2 != 0){
        cout << numeri[i] << " dispari" << endl;
      }
    }
}

void es5(){
  cout << "Caricare un vettore di N elementi. Scorrendo il vettore, al primo zero incontrato stampare la somma di tutti gli elementi considerati e il loro numero (ovviamente caricando con rnd lo zero deve essere tra i valori possibili, o, in alternativa, una volta caricato il vettore assegnare ad un elemento casuale il valore 0)." << endl << endl;
  int N = 100;
  int numeri[N];
  int somma = 0;
    for (int i = 0; i < N; i++){ // inserimento dei N numeri nel vettore;
      numeri[i] = rand() % 10;
    }
    
    numeri[rand () % N] = 0; //nonostante la possibilita' che nel vettore sia presente il valore "0" e' molto elevata (e' quasi impossibile che non sia stato inserito nel precendete for), inserisco comunque uno "0" in una posizione casuale del vettore per precauzione;

      for(int i = 0; i < N; i++){ // vettore post inserimento dello 0;
       cout << numeri[i] << " ";
      }
    cout << endl;
    int i;
    for(i = 0; numeri[i] != 0 ; i++){ // somma dei "n" numeri precedenti al primo 0;
      somma = somma + numeri[i];
    }
  cout << "Ci sono "<<i<<" elementi prima dello 0 e la loro somma e': " << somma << "." << endl; // output.
}

void es19(){
  cout << "\nLeggere N numeri interi relativi (cioe' positivi e negativi) e memorizzarli in un vettore NUM di N elementi. Calcolare i quadrati degli N numeri e memorizzarli ordinatamente in un vettore QUADR di N elementi. Visualizzare i numeri ed i loro quadrati." << endl << endl;

  int N = 10;
  int NUM[N];
  int QUADR[N];
  for(int i = 0; i < N; i++){ // vettore basi
    NUM[i] = rand () % 15+1 - 15/2;
    cout << NUM[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < N; i++){
    QUADR[i] = pow(NUM[i], 2); cout << QUADR[i] << " "; //potenza
  }
  cout << endl << endl;
  for(int i = 0; i < N; i++){ //output
    if( i != N - 1){
      cout << NUM[i] << " " << QUADR[i] << ", ";
    }else if(i == N - 1){
      cout << NUM[i] << " " << QUADR[i];
    }
  }
}

void es24(){
cout << "\nDato un vettore di N elementi, contenente valori numerici, separare i valori positivi da quelli negativi, memorizzandoli in due vettori distinti. Segnalare (in un altro vettore) la posizione occupata all'interno del vettore dagli elementi nulli (uguali a zero) e calcolarne il numero." << endl << endl;
  
  int N = 100;
  int numeri[N];
  int iN = 0, iP = 0, iZ = 0;
  int numeriPositivi[N];
  int numeriNegativi[N];
  int zeri[N];
  for(int i = 0; i < N; i++){
    numeri[i] = rand() % 30 - 15;
  }
    for(int i = 0; i < N; i++){
      cout << numeri[i] << " ";
    }
        cout << endl;
  //svolgimento
    for(int i = 0; i < N; i++){
      if(numeri[i] < 0){
        numeriNegativi[iN] = numeri[i];
        iN++;
      }else{
        if(numeri[i] == 0){
         zeri[iZ] = i;
         iZ++;
        }else{
          numeriPositivi[iP] = numeri[i];
          iP++;
        }
      }  
    }
      //mostro il risultato
      cout << endl << "Valori positivi: ";
        for(int i = 0; i < iP; i++){
          cout << numeriPositivi[i] <<  " ";  
        }
        cout << endl;
        cout << endl << "Valori negativi: ";
        for(int i = 0; i < iN; i++){
          cout << numeriNegativi[i] << " ";
        }
        cout << endl << endl;  cout << "Gli zeri sono: " << iZ <<" e stanno nei posti: " <<  endl;
        for(int i = 0; i < iZ; i++){
          cout << zeri[i] << " ";
        }
}

void es31(){
  cout << "\nStampare il calendario del 1990 sapendo che l'ultimo giorno del 1989 era domenica. L'output (per i 12 mesi). " << endl;
  int casella[8] [7];  // lo 0 mi turba, cominciamo con 1; provo a visualizzare il primo mese supponendo Domenica sia il primo giorno del mese;
 int giorniDelMese[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
 int settimana = 1;
 int giornoIniziale = 2;//giorno della settimana del primo giorno del mese
 int giornoMese = 1;
 string mese[13] = {" ", "GENNAIO", "FEBBRAIO", "MARZO", "APRILE", "MAGGIO", "GIUGNO", "LUGLIO", "AGOSTO", "SETTEMBRE", "OTTOBRE", "NOVEMBRE", "DICEMBRE"};
 for (int m = 1; m < 13; m++){
    giornoMese = 1;
    cout << "\n| " << mese[m] << " 1990\n| D| L| M| M| G| V| S|" <<endl;
    for(int casella = 1; casella < giorniDelMese[m] + giornoIniziale; casella++){
          if (casella < giornoIniziale){
             cout << "|  ";
          }else{
             if(giornoMese < 10 ){
                cout <<"| " << giornoMese;
             }else{
                cout << "|" << giornoMese;
             }
             giornoMese++;
          }// fine else
          settimana++;
          if (settimana > 7){
             cout << "| \n";
             settimana = 1;
          }
    }// fine for
    if(settimana != 1){
      for (int i = settimana; i <= 8; i++){
        cout << "|  ";
      }
    }
    cout << endl << endl;
    giornoIniziale = settimana;
    settimana = 1;
 } // vov
}

void es40(){
cout << "Dati 2 vettori numerici B e E, di dimensione N, contenenti rispettivamente base ed esponente, determinare qual e' la potenza maggiore, la potenza minore e i loro indici (cioe' la loro posizione nel vettore) (per gli esponenti tenetevi bassi per evitare overflow (100^4 =100.000.000))." << endl << endl;
int N = 5;
float B[N];
float E[N];
float P[N];
int iE = 0;
int iB = 0;
float minimo = INT_MAX;
float massimo = INT_MIN;
int indiceMax;
int indiceMin;
//svolgimento
cout << "Le basi che verranno elevate sono: ";
  for(int i = 0; i < N; i++){
    B[iB] = rand () % 10 - 5;
      cout << B[iB] << " ";  
    iB++;
  }
  cout << endl;
  cout << "Gli esponenti delle basi sono: ";
    for(int i = 0; i < N; i++){
      E[iE] = rand() % 10;
      cout << E[iE] << " ";  
      iE++;
    }
    cout << endl;
    cout << "Le rispettive potenze sono: ";
     for(int i = 0; i < N; i++){
       P[i] = pow(B[i], E[i]);
        cout << P[i] << " ";  
     }
    cout << endl;
      for(int i = 0; i < N; i++){
        if(P[i] < minimo){
          minimo = P[i];
          indiceMin = i;
        }
      }
      cout << endl;
        for(int i = 0; i < N; i++){
          if(P[i] > massimo){
            massimo = P[i];
            indiceMax = i;
          }
        }
//mostra il risultato
  cout << "La potenza piu' piccola e': " << minimo << " e si trova alla posizione: " << indiceMin << " all'interno del vettore, la potenza piu' grande invece e': " << massimo << " e si trova alla posizione: " << indiceMax << " all'interno del vettore." << endl;
}


string GeneraParole(int quante);


void es46(){
  struct struct_Libri{
  string libro;
  string autore;
  string argomento;
  int prezzo;
};
  cout << "\nCONSEGNA: Dato un elenco di libri con autore, argomento e prezzo determinare il volume con il prezzo minimo, il volume con il prezzo massimo scegliendoli fra quelli che riguardano un argomento dato in input. Se non vi sono volumi corrispondenti all'argomento proposto stampare un appropriato messaggio caricare il vettore nel codice usando una struttura" << endl << endl;
  int N=20;
  struct_Libri Libri[N];
  struct_Libri cheap;
  struct_Libri caro;
  int quante = 8;
  int max = INT_MIN;
  int min = INT_MAX;
  string piuCostoso;
  string piuCostosoAutore;
  string scegliArgomento;
   string ciao[4] = {"narrativa", "fantascienza", "giallo", "biografico"}; //supporto per il vettore degli argomenti
 
  for(int i = 0; i < N; i++){ // nomi dei libri casuali
    Libri[i].libro = GeneraParole(quante);
    Libri[i].autore = GeneraParole(6);
    Libri[i].argomento = ciao[rand () % 4];
    Libri[i].prezzo = rand () % 37 + 10;
    
  }
  cout << endl;
  cout << "titolo autore prezzo argomento "<<endl;
  for(int i = 0; i < N; i++){ //argomenti casuali
    cout << Libri[i].libro << " " << Libri[i].autore << " " << Libri[i].prezzo << " " << Libri[i].argomento << "\n"; 

  }


  /*
  scegliArgomento = Libri[rand () % 4].argomento;
  cout << "\nargomento casuale: " << scegliArgomento << endl; // proviamo a vedere se va questa schifezza
  */
  cout << "\n\nNel nostro catalogo troverai sicuramente libri di narrativa, fantascienza, biografico e giallo. Scegline uno (NO CAPS LOCK): ";
  cin >> scegliArgomento;
  cout << "\n";

  int presente = 0;
  for(int i = 0; i < N; i++){
    if(Libri[i].argomento == scegliArgomento){
      if(!presente){
        caro=cheap=Libri[i];
        min=max=Libri[i].prezzo;
      }else{
      if(Libri[i].prezzo > max){
        max = Libri[i].prezzo;
        caro=Libri[i];
        }else{
        if(Libri[i].prezzo < min){
          min = Libri[i].prezzo;
          cheap = Libri[i];
        }            
      }
      }
       presente++;
    }
  }
  if(presente == 0){
    cout << "Mi dispiace nel nostro catalogo non e' presente alcun libro che ha come argomento: " << scegliArgomento << endl;
  }else{
  cout << "Il volume con il prezzo piu' basso nel catalogo dei libri che ha come argomento " << scegliArgomento << " e' " 
   << cheap.libro << ", costa " << cheap.prezzo << " euro ed e' stato scritto da " << cheap.autore;
    cout << ".\nIl volume con il prezzo piu' alto nel catalogo dei libri che ha come argomento " << scegliArgomento << " e' " 
   << caro.libro << ", costa " << caro.prezzo << " euro ed e' stato scritto da " << caro.autore << endl;
  }
}

string GeneraParole(int quante){
  string vocali[]={"a", "e", "i", "o", "u"};
  string cons[]={"b", "c", "d", "f", "g", "l", "m", "n", "p", "r", "s", "t", "v", "z"};
  string stringa= "";
  for(int i = 0; i < quante; i++){
    if(i % 2 == 0){
      stringa = stringa + cons[rand () % 14];
    }else{
      stringa = stringa + vocali[rand () % 5];
    }
  }
return stringa;
}

string GeneraClasse(int quante);

void es54(){
  cout << "Si ha un elenco di studenti di scuola media formato da nome e classe. Stampare gli elenchi in ordine alfabetico della classe prima, seconda, terza. Caricare il vettore nel codice usando una struttura (naturalmente il vettore NON e' ordinato per classe)." << endl << endl;

  struct struct_Studenti{
    string nome;
    string classe;
  };

  int N = 100;
  int quante = 6;
  struct_Studenti Studenti[N];
  struct_Studenti tmp;
  for(int i = 0; i < N; i++){ // inizializzo il vettore con nomi casuali
    Studenti[i].nome = GeneraParole(quante);
    Studenti[i].classe = GeneraClasse(2);
  } 
  cout << "Vettore originale:\n";
  for(int i = 0; i < N; i++){
    cout << Studenti[i].nome << "  " << Studenti[i].classe << "  ";
  }
  cout << endl;
  for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        if(Studenti[i].classe.substr(0,1) < Studenti[j].classe.substr(0,1)){
          tmp = Studenti[i];
          Studenti[i] = Studenti[j];
          Studenti[j] = tmp;
        }
      }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(Studenti[i].classe.substr(0,1) == Studenti[j].classe.substr(0,1)){
        if(Studenti[i].nome < Studenti[j].nome){
          tmp = Studenti[i];
          Studenti[i] = Studenti[j];
          Studenti[j] = tmp;
        }
      }
    }
  }
  cout << "\n\n\nVettore ordinato:\n"; 
  for(int i = 0; i < N; i++){ // output
    cout << Studenti[i].nome << "  " << Studenti[i].classe << "  ";
  }
}

string GeneraClasse(int quante){
  int numClasse[3] = {1,2,3};
  string letClasse[5] = {"A","B","C","D","E"};
  string classe= "";
  for(int i = 0; i < quante; i++){
    if(i % 2 == 0){
      classe = classe + to_string(numClasse[rand() % 3]);
    }else if(i % 2 != 0){
      classe = classe + letClasse[rand() % 5];
    }
  }
  return classe;
}
        
void es56(){
cout << "Si conoscono i movimenti effettuati su un C/C di una banca. Ogni movimento e' definito da data, causale, somma. Conoscendo il saldo iniziale determinare il saldo finale in base ai movimenti effettuati, producendo un prospetto come sotto evidenziato: DATA DESCRIZ. DARE AVERE SALDO .......... .......... ........ .......... .......... .......... .......... ........ .......... .......... .......... .......... ........ .......... .......... .......... .......... ........ .......... .......... Se la somma e' positiva e' in DARE, se negativa e' in AVERE. Caricare il vettore nel codice usando una struttura." << endl << endl;
int N = 4;
int saldo = 0;
cout << "saldo nel C/C iniziale: " << saldo << " euro" << endl;
int movimento[N];
string movimentoS[N];
string descrizione[N];
int giorno[N];
string giornoS[N];
string data[N];
giorno[0]= 3;
  for(int i = 1; i < N; i++){
    giorno[i] = giorno[i-1] + 5;
  } 
    for(int i = 0; i < N; i++){
      data[i] = to_string(giorno[i]) + " ottobre";
    }
    cout << endl;
      for(int i = 0; i < N; i++){
        movimento[i] = rand() % 100 - 50;
        movimentoS[i] = to_string(movimento[i]);
        if(movimento[i] < 0){
          
          descrizione[i] = "hai depositato: " + to_string(abs(movimento[i])) + " euro.";
          cout << data[i] << ", "<<  descrizione[i] << endl; 
        }else if(movimento[i] > 0){
          descrizione[i] = "hai prelevato: " + to_string(abs(movimento[i])) + " euro.";
          cout << data[i] << ", " << descrizione[i] << endl;
        }
      }
      //mostra il risultato
      cout << endl;
      cout << endl;
  cout << "DATA         DESCRIZ.                        DARE        AVERE       SALDO";
    for (int i = 0; i < N; i++){
      cout << "\n" << data[i] << "    " << descrizione[i];
      saldo = saldo - movimento[i];
          if(movimento[i] < 0){
            cout << "        " << abs(movimento[i]);
            cout << "                      " << saldo << endl;
          }else if(movimento[i] >= 0){
          cout << "                     " << abs(movimento[i]);
          cout << "           " << saldo << endl;
          }
    }
}

struct Numero{
  int frequenza = 0;
  int valore;
};

int NumeroGiaPresente (int numeroCercato, Numero elencoNumeri[], int N);
void RefaVettore (int a, Numero b[], int c);
void es67(){
  cout << "Dato un vettore numerico determinare qual e' l'elemento (o gli elementi) che si ripete pia' volte e con quale frequenza." << endl << endl;
  int N = 10;
  int nuovoNumero;
  int massimaFrequenza = 0;

Numero numeri[N];
int v[N];
int frequenza = 0;
int iNF = 0;  //indice numeri piu' frequenti
int numeroPiuFrequente[N];
int contaNumeri = 0, dove;
//svolgimento
  for(int i = 0; i < N; i++){
    v[i] = rand () % 5;
  }
  //ecco il vettore
  for(int i = 0; i < N; i++){
      cout << v[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < N; i++){

      if((dove =NumeroGiaPresente(v[i], numeri, contaNumeri)) < 0){
        numeri[contaNumeri].valore = v[i];
        numeri[contaNumeri].frequenza = 1;
        contaNumeri ++;
    }else{
      numeri[dove].frequenza ++;
      RefaVettore(dove,numeri,N);
    }
  }
  cout << numeri[0].valore << " si ripete " << numeri[0].frequenza << " volte " << endl;
  // vediamo se ce ne sono altri
  int i = 1;
  while(i < contaNumeri && numeri[i].frequenza == numeri[0].frequenza){
     cout << numeri[i].valore << " si ripete " << numeri[i].frequenza << " volte " << endl;
     i++;
  }
  /*cout << endl;
  cout << "i numeri che vengono ripetuti piu' volte all'interno del vettore sono: ";
    for(int i = 0; i < sizeof(numeri)/4; i++){
      if(numeri[i].frequenza == massimaFrequenza){
        cout << numeri[i].valore << " ";
      }
    }
  cout << ", e si ripetono con una frequenza pari a: " << massimaFrequenza << endl;*/
}
//funzione es67
int NumeroGiaPresente (int numeroCercato, Numero elencoNumeri[],int N){
  for(int i = 0; i < N; i++){
    if(numeroCercato == elencoNumeri[i].valore){
      return i;
    }
  }
  return -1;
}

void RefaVettore(int j, Numero elencoNumeri[],int N){
  Numero house;
  while(j > 0 && elencoNumeri[j-1].frequenza < elencoNumeri[j].frequenza ){
    house = elencoNumeri[j];
    elencoNumeri[j] = elencoNumeri[j-1];
    elencoNumeri[j-1] = house;
    j--;
  }
}
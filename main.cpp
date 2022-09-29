#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits.h>
#include <cstring>

using namespace std;

void es1();
void es2();
void es3();
void es4();
void es5();
void es12();
void es26();
void es39();
void es64();
void es74();
void clearScreen();

int main(){
  
    int scelta;
    do {
        cout << "1. Caricare un vettore di N elementi con valori letti da tastiera." << endl;

        cout << "2. Costruire un vettore di N elementi, inserendo in ogni elemento il valore del suo indice." << endl;

        cout << "3. Caricare un vettore di N elementi, stampando la somma dei suoi elementi." << endl;

        cout << "4. Dato un vettore di N elementi, determinare se ciascun elemento è pari o dispari " << endl;

        cout << "5. Caricare un vettore di N elementi. Scorrendo il vettore, al primo zero incontratostampare la somma di tutti gli elementi considerati e il loro numero " <<  endl;

        cout << "12. Dato un vettore di N elementi al primo elemento dispari stampare quanti valori diversi da zero si sono incontrati, il numero dispari incontrato e la sua posizione nel vettore." << endl;

        cout << "26. Dato due vettori di N elementi alfanumerici, riordinarli in un unico vettore." << endl;

        cout << "39. Dati due vettori di dimensione N contenenti numeri interi positivi costruire un vettore C contenente alternativamente un elemento dispari e uno pari " << endl;

        cout << "64. Dato un vettore numerico di N elementi, verificare se un valore dato in input e' presente fra i suoi componenti; se non e' presente visualizzare quello immediatamente inferiore e quello immediatamente superiore, se uno di questi manca (inferiore o superiore) segnalarlo con un messaggio." << endl;

        cout << " 74. Dato un vettore di numeri reali si vuole produrre in uscita la corrispondente sequenza normalizzata." << endl;
        
        cout << "0. Fine!" << endl;

        cin >> scelta;
        switch (scelta) {

            case 0:
                cout << "good bye" << endl;
                break;

            case 1:
                 es1();
                break;

            default:
                 cout << "wrong chioce" << endl;

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

          case 12:
                 es12();
                 break;

          case 26:
                es26();
                break;
          
          case 39:
                es39();
                break;

          case 64:
                es64();
                break;

          case 74:
                es74();
                break;
         
        }

    } while (scelta != 0);

    return 0;
}

void es1(){
  clearScreen();
  int contaValori=10;
  cout << "quanti valori vuoi inserire?> ";
  cin >> contaValori;
  int valori[contaValori];
  cout << "Dovrai inserire " << contaValori << " valori" << endl;
    for (int i = 0; i < contaValori; i++){
      cout << "inserisci il " << (i + 1) << "\u00b0 valore" << endl;
      cin >> valori[i];
    }
    for ( int i = 0; i < contaValori; i++){
      cout << valori[i] << ", ";
    }
    cout << "\nfatto" << endl;
}

void es2(){
  clearScreen();
  int contaValori=10;
  cout << "quanti valori vuoi inserire?> ";
  cin >> contaValori;
  int vettore[contaValori];
  for(int i = 0; i < contaValori; i++){
    vettore[i] = i;
    cout << vettore[i] << endl;
  }
}


void es3(){
  clearScreen();
  int contaValori=10;
  cout << "quanti valori vuoi inserire?> ";
  cin >> contaValori;
  int vettore[contaValori];
  int somma = 0;
    for(int i = 0; i < contaValori; i++){
      vettore[i]=rand() % 9 + 1;
      
    }
      for(int i = 0; i < contaValori; i++){
        somma = somma + vettore[i];
      }

        for(int i = 0; i < contaValori; i++){
          cout << vettore[i] << " ";
        }
    cout << "la somma \u00e8: " << somma << endl;
  
} 

void es4(){
  clearScreen();
  int contaValori=10;
  cout << "quanti valori vuoi inserire?> ";
  cin >> contaValori;
  int vettore[contaValori];
    for (int i = 0; i < contaValori; i++){
      vettore[i] = rand() % 100 + 1;
    }
      for(int i = 0; i < contaValori; i++){
        if(vettore[i] % 2 == 0){
          cout<< vettore[i] << " pari " << endl;
        }else if(vettore[i] % 2 != 0){
          cout<< vettore[i] << " dispari " << endl;
        }
      }
}

void es5(){
  clearScreen();
  int N=100;
  int vettore[N];
  int somma=0;
  int i;
  for(i=0;i<N;i++){
      vettore[i]=rand()%10;
       cout<<vettore[i]<<" ";
  }
  cout << endl;
  i=0;
  while(vettore[i]!= 0 ){
  somma=somma+vettore[i];
  i++;
  }
cout<<"La somma è "<<somma<<endl;
cout<<"il loro numero è"<<i<<endl;
}





void es12() {
  clearScreen();
  cout << "12. Dato un vettore di N elementi al primo elemento dispari stampare quanti valori diversi da zero si sono incontrati, il numero dispari incontrato e la sua posizione nel vettore." << endl;
  int Valori=10;
  int vect[Valori];
  int positionDispari = 0;
  int counter = 0;
  int numeroDispari;
  cout<<endl;

 
    for( int i=0; i<Valori;i++ ){
      vect[i]=rand()%3;
      cout<<" "<<vect[i];
    }
  for(int i = 0; i  < Valori; i++){
    if(i % 2 != 0 && positionDispari == 0){
      positionDispari = 0;
      numeroDispari = vect[i];
    }
  }
  if(positionDispari == 0){
    cout << "\nnon ci sono numeri precedenti al primo numero dispari\n";
  }else
    for(int i = 0; i < Valori; i++){
      if(vect[i] != 0){
        counter += 1;
      }
    cout << "prima del primo numero dispari sono presenti " << counter << " numeri diversi da 0\n";
    }
  cout << "il primo numero dispari si trova alla posizione " << positionDispari << " ed e' il numero " << numeroDispari << "\n\n";

     
}


void es26() {

string GeneraAlfanumerico(int quante);

  int N = 6;
  string alfanumerico[N];
  string tmp="";
  cout << "vettore disordinato: ";
  for(int i = 0; i < N; i++){
    alfanumerico[i]= GeneraAlfanumerico(rand()%8+1);
    cout << alfanumerico[i] << " ";
  }
  for(int i = 0; i < N; i++){
    tmp = "";
    for(int j = 0; j < N; j++){
      if(alfanumerico[i].length()<alfanumerico[j].length()){
        tmp = alfanumerico[j];
        alfanumerico[j] = alfanumerico[i];
        alfanumerico[i]=tmp;
      }
    }
  }
  cout << "\nvettore ordinato: ";
  for(int i = 0; i < N; i++){
    cout << alfanumerico[i] << " ";
  }
}

string GeneraAlfanumerico(int quante){
  string caratteri[21] = {"a","e","i","o","u","b","c","d","l","m","n","p","q","r","s","t","f","g","h","v","z"};
  string numeri[10] = {"0","1","2","3","4","5","6","7","8","9"};
  string alfanumerico="";
  for(int i = 0; i < quante; i++){
    if(i%2==0){
      alfanumerico+=caratteri[rand() % 21];
    }else{
      alfanumerico+=numeri[rand() % 10];
    }
  }
  return alfanumerico;
}


  
  
  
  
  void es39() {
  
    cout << "Dati due vettori di dimensione N contenenti numeri interi positivi costruire un vettore C contenente alternativamente un elemento dispari e uno pari (provenienti indifferentemente dai due vettori A e B). Procedere alla costruzione di C fino a quando uno dei due insiemi (pari o dispari) finisce. Visualizzare C e, se i due insiemi non hanno lo stesso numero di elementi, gli elementi rimasti." << endl;
  
    int n=10;
    
    int vectB [5] ={};
    int pari [10] ={};
    int vectA [5] ={};
    int dispari [10] ={};
    int vectC [10] ={};
    int resto =0, posizionePari =0, posizioneDispari =0, posizioneC =0;
    for (int i = 0; i < n; i++){
       vectA[i] = rand() % 5 + 1;
       vectB[i] = rand() % 5 + 1;
    }
    cout << "vectA:\n";
    for (int i = 0; i < n; i++) {
      cout << vectA[i] << " ";
    }
    cout << endl;
    cout << "vectB:\n";
    for (int i = 0; i < n; i++) {
      cout << vectB[i] << " ";
    }
    for (int i = 0; i < n; i++) {
      if(vectA[i] % 2 == 0) {
           
            pari[posizionePari] = vectA[i];
            posizionePari = posizionePari + 1;
           
        } else {

            dispari[posizioneDispari] = vectA[i];
            posizioneDispari = posizioneDispari + 1;

        }
        if(vectB[i] % 2 == 0) {
         
            pari[posizionePari] = vectB[i];
            posizionePari = posizionePari + 1;
         
        } else {
         
            dispari[posizioneDispari] = vectB[i];
            posizioneDispari = posizioneDispari + 1;

        }
    }
    cout << endl;
 
    if ( posizionePari > posizioneDispari ) {
        for (int i = 0; i < posizioneDispari ; i++) {
            vectC[posizioneC] = pari[i];
            posizioneC = posizioneC + 1;
            vectC[posizioneC] = dispari[i];
            posizioneC = posizioneC + 1;
        }
    } else {
        for (int i = 0; i < posizionePari ; i++) {
            vectC[posizioneC] = pari[i];
            posizioneC = posizioneC + 1;
            vectC[posizioneC] = dispari[i];
            posizioneC = posizioneC + 1;
        }
    }
 
    cout << "pari:\n";
    for (int i = 0; i < posizionePari; i++) {
        cout << pari[i] << " ";
    }
    cout << endl;
    cout << "dispari:\n";
    for (int i = 0; i < posizioneDispari; i++) {
        cout << dispari[i] << " ";
    }
  
    cout << endl;
    cout << endl;
   
    if ( posizionePari > posizioneDispari ) {
        for (int i = 0; i < posizioneDispari*2; i++) {
            cout << vectC[i] << " ";
            resto = i;
        }
      
        cout << "\nrimanenti: " << endl;
        for (int i = resto/2 +1; i < posizionePari; i++) {
            cout << pari[i] << " ";
        }
    } else {
        for (int i = 0; i < posizionePari * 2; i++) {
            cout << vectC[i] << " ";
            resto = i;
        }
        cout << "\nrimanenti: " << endl;
        for (int i = resto/2 +1; i < posizioneDispari; i++) {
            cout << dispari[i] << " ";
        }
    }
   
   
}



void es64(){
  
  cout << " Dato un vettore numerico di N elementi, verificare se un valore dato in input e' presente fra i suoi componenti; se non e' presente visualizzare quello immediatamente inferiore e quello immediatamente superiore, se uno di questi manca (inferiore o superiore) segnalarlo con un messaggio." << endl;

int N=25;
int vettore[N], vettoreBubble[N];
int numero;
bool differenza = false;
int h=0, s=0, temp;
int y=0;
int max, min;

 for(int i=0; i < N; i++) {
   vettore[i] = rand() % 200;
    cout << vettore[i] << " ";
 }
 cout << "\n" << endl;

 
for(int v=0; v < N; v++)  {
  vettoreBubble[v]= vettore[v];
  }
 
for(int v=0; v < N-1; v++)  {
  
  for(int l=0;l<N;l++){
if(vettoreBubble[l] < vettoreBubble[l+1])
{
temp= vettoreBubble[l];
vettoreBubble[l]= vettoreBubble[l+1];
vettoreBubble[l+1]=temp;
}
  }
}
  max = vettoreBubble[0];
  min = vettoreBubble[N-1];


 cout << "\n" << endl;

cout << "inserisci il numero da cercare nel vettore: " << endl;
cin >> numero;

for(int j = 0; j < N; j++){
  
  differenza = false;
    if(numero != vettore[j]) {
      
    differenza = true;
    }else{
      
      differenza = false;
    }
  if(differenza == false)  {
  y = y+1;
  }
}
if(y != 0)  {
  cout << "\nIl valore in input compare nel vettore" << endl;
}else{
  cout << "\nIl valore in input NON COMPARE nel vettore" << endl;

  if(numero > max){
  cout << "\nIl valore immediatamente inferiore: " << max << endl;
  cout << "Il valore immediatamente superiore non c'e', e' il valore piu' alto " << endl;
}else if(numero < min){  
    cout << "\nIl valore immediatamente inferiore non c'e', e' il valore piu' basso" << endl;
    cout << "Il valore immediatamente superiore e' " << min << endl;
    }else{
do{
  differenza = false;
  numero = numero + 1;
for(int j = 0; j < N; j++){
    if(numero != vettore[j]) {
    differenza = true;
    }else{
      differenza = false;
    }
  if(differenza == false)  {
  h = j;
    }
  }
}while(h == 0);

do{
  differenza = false;
  numero = numero-1;
    for(int j=0; j<N; j++){
    if(numero != vettore[j]) {
    differenza = true;
    }else{
      differenza = false;
    }
  if(differenza == false)  {
  s = j;
    }
  }
}while(s == 0);
    }  

 

 
  if(numero > min && numero < max)  {
  cout << "\nIl valore immediatamente inferiore: " << vettore[s] << endl;}

  if(numero < max && numero > min)  {
  cout << "Il valore immediatamente superiore: "<< vettore[h] << endl;
  cout << endl;
      }
    }
  }





void es74(){
  cout << "Dato un vettore di numeri reali si vuole produrre in uscita la corrispondente sequenza normalizzata, cioe' la sequenza dei numeri compresi tra -1 e 1 ottenuti dividendo ciascun numero per il massimo valore assoluto di tutta la sequenza. E' evidente che nel vettore ci sono anche numeri negativi. Il valore assoluto si ottiene con la funzione Abs(numero)che vuole la liberia stdlib.h." << endl << endl;

  int N = 10;
  float numeri[N];
  float numeriAssoluti[N];
  float max =INT_MIN;
  float seqNormalizzata[N];
  for(int i = 0; i < N; i++){
    numeri[i] = rand() % 20 - 20/2;
    cout << numeri[i] << " ";
  }
  cout << "\n";
  for(int i = 0; i < N; i++){
    numeriAssoluti[i] = abs(numeri[i]);
    cout << numeriAssoluti[i] << " ";
  }
  for(int i = 0; i < N; i++){
    if(numeriAssoluti[i] > max){
      max = numeriAssoluti[i];
    }
  }
  cout << "\n" << max << "\n";
  for(int i = 0; i < N; i++){
    seqNormalizzata[i] = numeri[i] / max;
    cout << seqNormalizzata[i] << " ";
  }
  
  for(int i = 0; i < N; i++){
    float tmp = 0;
    for(int j = 0; j < N; j++){
      if(seqNormalizzata[i] < seqNormalizzata[j]){
        tmp = seqNormalizzata[i];
        seqNormalizzata[i] = seqNormalizzata[j];  
        seqNormalizzata[j] = tmp;
      }
    }
  }
  cout << endl;
}

void clearScreen(){
  if(_osplatform==2){
    system("cls");
  }else{
    system("clear");
  }
}

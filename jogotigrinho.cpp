#include <iostream>
#include<cstdlib>
#include<time.h>
#include <iomanip>

using namespace std;

bool ganhou( int jogo[3]) {
    if (jogo[0] == jogo[1] && jogo[1] == jogo[2])
    {
        

       
    return true;

    }
    else {
       return false;  
    }






    
}

void abertura() {
    cout << "**********************" << endl;
    cout << "$    Little Tiger    $" << endl;
    cout << "**********************" << endl;




}



void desenhaMapa(char mapa[3][3]) {
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mapa[i][j] = 'X';
            cout << mapa[i][j] << ' ';
        }
        cout << endl;
    
    }
    cout << endl;

}




void comecaJogo(char linhaX[3], int jogo[3],  int tentativas, float premio) {
    cout << fixed << setprecision(2);
    srand(time(0));
    for (int cont = 1; cont <=tentativas; cont++)
    {
        
    
    cout << endl;

 for ( int i = 0; i < 3; i++)
    {
        linhaX[i] = 'X';
        cout << linhaX[i] << ' ';
    }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        jogo[i] = (rand() % 8);
        cout << jogo[i] << ' ';
    }

    cout << endl;

    for ( int i = 0; i < 3; i++)
    {
        linhaX[i] = 'X';
        cout << linhaX[i] << ' ';
    }
    cout << endl << endl;
    cout << "Tentativa nro: " << cont << endl << endl;
    if (ganhou(jogo) == true)
    {
        
    cout <<  endl << "Voce ganhou!"<< endl;

     switch (jogo[0])
        {
        case 1:
            premio= premio + 1.00;

            break;

        case 2:
            premio= premio + 1.10;
            break;
        

        case 3:
            premio= premio + 1.25;
            break;
        

        case 4:
            premio= premio + 1.50;
            break;
        

        case 5:
            premio= premio + 1.70;
            break;
        

        case 6:
            premio= premio + 2.00;
            break;
        

        case 7:
            premio= premio + 5.00;
            break;
        

        case 8:
            premio= premio + 1.20;
            break;

        case 9:
            premio= premio + 2.20;
            break;
        
        
        default:
            premio = premio + 0.75;
            break;
    
    }
    
   
    
    cout << endl;

    
    }
    

     
    
    system("pause");





    

}
cout << endl << "Seu premio total foi de: "  << premio<< endl << endl;
}



int main() {
char letraX[3];
int jogo[3];
char mapa[3][3];
float saldo;
int tentativas;
float premio = 0;
bool comeca;



abertura();


 cout<< "Adicione um saldo (em reais) para jogar: " << endl;
 cin >> saldo;
 cout << endl;
 if (saldo >=  1.00)
 {  
    
     desenhaMapa(mapa);

    tentativas = saldo / 1.00;
   
 
 cout << "Voce tem " << tentativas << " tentativas" << endl << endl;
 cout<< "Deseja comecar o jogo? (1 - Comeca / 0 - Nao comeca)" << endl;
cin >> comeca;

    if(comeca == true) {
        comecaJogo(letraX, jogo, tentativas, premio);
         ganhou(jogo);

    
    
    


   system("pause");

    return  0; 
    } else{
        return 0;
    }
   
 }
 else {
    cout<< "Impossivel jogar com o seu saldo!"<< endl;
    system("pause");
    return 0;
 }
 
}
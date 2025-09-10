#include <iostream>
#include <stdlib.h>
#include <time.h>

class Carta{
    public:
    int forca;
    int energia;
    int defesa;
    int fadiga; 
    
    Carta(){
        srand(time(NULL));
        _sleep(1000);
        
        forca = rand() % 100;
        energia = rand() % 100;
        defesa = rand() % 100;
        fadiga = rand() % 100;
    }
    
    void mostrarCarta(){
        printf("\n-----CARTA %i-----");
        printf("\nForca: %i", forca);
        printf("\nEnergia: %i", energia);
        printf("\nDefesa: %i", defesa);
        printf("\nFadiga: %i\n", fadiga);
    }
};


class Jogador{  
    public:
    int pontuacao;
    Carta monteCarta[5];
        
        jogador(){
            pontuacao = 0;
            for(int i=0; i<=4; i++){
                Carta carta;
                monteCarta[i] = carta;
            }
        }
        
        void exibirMonte(){
            for(int i=0; i<=4; i++){
                monteCarta[i].mostrarCarta();
            }       
        }
};

main(){
    Carta victoria;
    victoria.mostrarCarta();
    Jogador victoria1;
    victoria1.exibirMonte();
}

#include <iostream>
#include <string>

#include "Pontuacao.h"
    
//Functions
PTVermelha::PTVermelha();

//Functions
virtual void PTVermelha::definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const{
    pontuacao_tela_impressao+=contador_check_cor*4;
}

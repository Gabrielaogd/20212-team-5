#include <iostream>
#include <string>

#include "Pontuacao.h"
    
//Functions
PTRoxa::PTRoxa();

//Functions
virtual void PTRoxa::definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const{
    pontuacao_tela_impressao+=contador_check_cor*3;
}

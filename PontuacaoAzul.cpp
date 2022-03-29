#include <iostream>
#include <string>

#include "Pontuacao.h"

PTAzul::PTAzul();

//Functions
virtual void PTAzul::definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const{
    pontuacao_tela_impressao+=contador_check_cor*2;
}


#ifndef VERMELHA_H
#define VERMELHA_H

#include "Pontuacao.h"

class PTVermelha: public Pontuacao{

public:
    PTVermelha();
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const override;
};
#endif
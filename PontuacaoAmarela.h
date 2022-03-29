#ifndef AMARELA_H
#define AMARELA_H

#include "Pontuacao.h"

class PTAmarela: public Pontuacao{

public:
    PTAmarela();
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const override;
};
#endif
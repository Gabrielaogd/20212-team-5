#ifndef AZUL_H
#define AZUL_H

#include "Pontuacao.h"

class PTAzul: public Pontuacao{

public:
    PTAzul();
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const override;
};
#endif
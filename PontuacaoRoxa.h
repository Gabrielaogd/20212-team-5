#ifndef ROXA_H
#define ROXA_H

#include "Pontuacao.h"

class PTRoxa: public Pontuacao{

public:
    PTRoxa();
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const override;
};
#endif
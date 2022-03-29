#ifndef VERDE_H
#define VERDE_H

#include "Pontuacao.h"

class PTVerde: public Pontuacao{

public:
    PTVerde();
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int contador_check_cor, int pontuacao_tela_impressao) const override;
};
#endif
#ifndef LARANJA_H
#define LARANJA_H

#include "Pontuacao.h"

class PTLaranja: public Pontuacao{

public:
    //Functions- Sobrescrevendo funcao
    virtual void definir_pontuacao(int check_type, int x, int y) const override;
};
#endif
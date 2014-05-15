//
//  Loro.h
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/14/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//

#ifndef ExamenProgra3_Loro_h
#define ExamenProgra3_Loro_h

#include "Animal.h"

class Loro : public Animal{
public:
    Loro(int edad, string nom){
        this->edad = edad;
        this->nom = nom;
        this->tipo = "Loro";
    }
    
    void rugir(){
        cout << "GALLETA GALLETA\n";
    }
    
};

#endif

//
//  Header.h
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/14/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//

#ifndef ExamenProgra3_Header_h
#define ExamenProgra3_Header_h

#include "Animal.h"

class Canario : public Animal{
    
public:
    Canario(int edad, string nom){
        this->tipo = "Canario";
        this-> edad = edad;
        this-> nom = nom;
    }
    
    void rugir(){
        cout << "CHIRP CHIRP\n";
    }
    
};


#endif

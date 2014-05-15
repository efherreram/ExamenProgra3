//
//  Perro.h
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/14/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//



#ifndef ExamenProgra3_Perro_h
#define ExamenProgra3_Perro_h

#include "Animal.h" 

class Perro : public Animal{
public:

Perro(int edad, string nom){
    this->edad = edad;
    this->nom = nom;
    this->tipo = "Perro";
    
}
    void volar(){
    cout << "no puedo volar\n";
}

void rugir(){
    cout << "Guau Guau\n";

}
};

#endif

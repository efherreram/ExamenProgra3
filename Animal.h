//
//  Animal.h
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/14/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//

#ifndef ExamenProgra3_Animal_h
#define ExamenProgra3_Animal_h

#include <iostream>
using namespace std;

class Animal{
    
public:
    string tipo;
    int edad;
    string nom;
    Animal* sig;
    
    Animal(){
        sig = NULL;
    }
    
    void imprimir(){
        cout << "Tipo: " << this ->tipo << endl;
        cout << "Edad: " << this->edad << endl;
        cout << "Nombre: " << this->nom << endl;
        volar();
        rugir();
    }
    
    virtual void volar(){
        cout << "Estoy volando\n";
    }
    
    virtual void rugir() = 0;
        
    virtual ~Animal(){
        
    }
        
    
    
};


#endif

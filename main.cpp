//
//  main.cpp
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/14/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Animal.h"
#include "Perro.h"
#include "Loro.h"
#include "Canario.h"
#include "Lista.h"


using namespace std;


//MAIN
int main(int argc, char * argv[])
{

    Lista l;
    l.agregar(new Perro(3,"epdro"));
    l.imprimir();
    l.escribir();
    
    
    return 0;

}


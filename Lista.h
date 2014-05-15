//
//  Lista.h
//  ExamenProgra3
//
//  Created by Edwin Herrera on 5/15/14.
//  Copyright (c) 2014 Edwin Herrera. All rights reserved.
//

#ifndef ExamenProgra3_Lista_h
#define ExamenProgra3_Lista_h

#include "Animal.h"
#include "Perro.h"
#include "Loro.h"
#include "Canario.h"
#include <fstream>

class Lista{
public:
    
    
    
    
    Animal *inicio = NULL;
    
    void agregar(Animal* animal){
        
        if(inicio == NULL){
            inicio = animal;
            return;
        }
        
        Animal* tmp = inicio;
        while(tmp->sig!=NULL){
            tmp = tmp->sig;
        }
        
        tmp->sig = animal;
        
    }
    
    void imprimir(){
        if(inicio == NULL){
            return;
        }
        
        Animal* tmp=inicio;
        while(tmp!= NULL){
            tmp->imprimir();
            tmp = tmp->sig;
        }
        
        
    }
    
    void escribir(){
        ofstream write("an.txt");
        
        if(inicio==NULL){
            return;
        }
        
        Animal* tmp = inicio;
        
        while (tmp!= NULL) {
            write<<tmp->tipo<<"   "<<tmp->edad<<"   "<<tmp->nom<<endl;
            write<<" "<<endl;
            tmp=tmp->sig;
        }
        write.close();
    }
    
    void Leer(){
        ifstream read("an.txt");
        
        cout<<"Leyendo Lista Del Archivo"<<endl;
        
        read.seekg(0);
        string tipo;
        string edad;
        string nom;
        
        
        while(read>>tipo>>edad>>nom){
            
            
            int e=atoi(edad.c_str());
            
            if(tipo=="Perro")
                agregar(new Perro(e,nom));
            if(tipo=="Canario")
                agregar(new Canario(e,nom));
            if(tipo=="Loro")
                agregar(new Loro(e,nom));
            
            
            
            
        }
        
        
        read.close();
    }
    

    
};


#endif

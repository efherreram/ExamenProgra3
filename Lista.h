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
    
    double promedio(){
        if(inicio == NULL){
            return 0;
        }
        
        double suma = 0;
        double cant = 0;
        
        Animal *tmp = inicio;
        
        while(tmp!=NULL){
            suma+= tmp->edad;
            cant+=1;
            tmp = tmp->sig;
        }
        
        cout << "Promedio: " <<  suma/cant << endl;
        return suma/cant;
        
    }
    
    Animal* Mayor(){
        if(inicio== NULL){
            return NULL;
        }
        
        Animal*tmp = inicio;
        Animal*mayor = tmp;
        
        while(tmp!=NULL){
            if(tmp->edad>mayor->edad)
                mayor = tmp;
            tmp = tmp->sig;
        }
        return mayor;
        
    }

    Animal* Menor(){
        if(inicio== NULL){
            return NULL;
        }
        
        Animal *tmp = inicio;
        Animal *menor = tmp;
        
        while(tmp!=NULL){
            if(tmp->edad<menor->edad)
                menor = tmp;
            tmp = tmp->sig;
        }
        return menor;
        
    }
    
    Animal* buscar(string nom){
        if(inicio == NULL)
            return NULL;
        
        Animal *tmp = inicio;
        
        while(tmp!=NULL){
            if (tmp->nom == nom) {
                return tmp;
            }
            tmp = tmp->sig;
        }
        cout << "ANIMAL NO EXISTE\n";
        return NULL;
        
    }
    
    void borrar(string nom){
        if(inicio==NULL)
            return;
        if(inicio->nom==nom){
            inicio = inicio->sig;
            return;
        }
        
        Animal *tmp = inicio;
        while(tmp->sig!=NULL){
            if(tmp->sig->nom==nom){
                if(tmp->sig->sig==NULL){
                    delete tmp->sig;
                    tmp->sig = NULL;
                    return;
                }
                delete tmp->sig;
                tmp->sig = tmp->sig->sig;
                return;
            }
            tmp = tmp->sig;
        }
    }
    
    void insertar(Animal*animal , int posicion ){
        
        if(posicion == 0){
            
            Animal *tmp = animal;
            tmp->sig = inicio;
            inicio = tmp;
            return;
        }
        Animal*temp = inicio;
        
        for(int i= 1; i < posicion; i++){
            
            if(temp->sig == NULL){
                temp->sig = animal;
                return;
            }
            temp = temp->sig;
        }
        
        animal-> sig = temp -> sig;
        temp -> sig = animal;
        
        
    }
    

    
};


#endif

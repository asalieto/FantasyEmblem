/* 
 * File:   Armas.cpp
 * Author: Ricardo
 * 
 * Created on 15 de abril de 2015, 9:42
 */

#include "../headers/Armas.h"
//#include "../headers/Unidad.h"
//#include "../headers/Aliadas.h"
//#include "../headers/Cofre.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdio.h>
#include <string.h>

using namespace std;
using namespace sf;


Armas::Armas(const char* nom, const char* tip, int pes, int pod, int golp, int alcan, int usos, const char* nombArma) {
    
    Nombre=nom;
    Tipo=tip;
    
    Peso=pes;
    Poder=pod;
    Golpe=golp;
    Alcance=alcan;
    Usos=usos;
    
    spriteArma = new Sprite();
    texturaArma = new Texture();
    
    string s1 = string(nombArma);
    string s = "resources/"+s1;
    
    if (!texturaArma->loadFromFile(s))
    {
        std::cerr << "Error cargando la imagen textura del arma";
        exit(0);
    }
    
    spriteArma->setTexture(*texturaArma);
    
}

Armas::~Armas() {
}

Sprite Armas::getSprite()
{
    return *spriteArma;
}
const char* Armas::getNombre(){
    return Nombre;
}

const char* Armas::getTipo(){
    return Tipo;
}

int Armas::getPeso(){
    return Peso;
}

int Armas::getPoder(){
    return Poder;
}

int Armas::getGolpe(){
    return Golpe;
}

int Armas::getAlcance(){
    return Alcance;    
}

int Armas::getUsos(){
    return Usos;
}

void Armas::setUsos(int uso){
    Usos=Usos-uso;
}
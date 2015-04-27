/* 
 * File:   MenuAcciones.cpp
 * Author: Ricardo
 * 
 * Created on 26 de abril de 2015, 12:12
 */

#include "../headers/MenuAcciones.h"


using namespace std;

MenuAcciones* MenuAcciones::pinstance = 0;
MenuAcciones* MenuAcciones::Instance()
{
    if(pinstance==0)
    {
        pinstance=new MenuAcciones();
    }
    return pinstance;
}


MenuAcciones::MenuAcciones()
{
    texturaDanyo=new Texture();
    texturaDedo=new Texture();
    texturaMenu=new Texture();
    texturaObjetos=new Texture();
    cursorDedo= new Sprite();
    danyo=new Sprite();
    menu= new Sprite();
    objetos= new Sprite();
    reloj=new Clock();
    evento=new Event();
    /*m=map;
    ali=al;
    enem=ene;
    index=indice;*/
    
    init_state();
}

MenuAcciones::~MenuAcciones() {
    delete texturaDanyo;
    delete texturaDedo;
    delete texturaMenu;
    delete texturaObjetos;
    delete menu;
    delete objetos;
    delete danyo;
    delete cursorDedo;
    delete reloj;
    delete evento;
}

void MenuAcciones::init_state()
{
    if (!texturaMenu->loadFromFile("recursos/menu.png"))
    {
            std::cerr << "Error cargando la imagen boton1.png";
            exit(0);
    }

    if (!texturaDedo->loadFromFile("recursos/dedo.png"))
    {
            std::cerr << "Error cargando la imagen dedo.png";
            exit(0);
    }

    if (!texturaDanyo->loadFromFile("recursos/dano.png"))
    {
            std::cerr << "Error cargando la imagen dano.png";
            exit(0);
    }
    
    if (!texturaObjetos->loadFromFile("recursos/objeto.png"))
    {
            std::cerr << "Error cargando la imagen objeto.png";
            exit(0);
    }
    
    menu->setTexture(*texturaMenu);
    cursorDedo->setTexture(*texturaDedo);
    danyo->setTexture(*texturaDanyo);
    objetos->setTexture(*texturaObjetos);
    
    /*posicionar sprites*/
}



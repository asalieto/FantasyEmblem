/* 
 * File:   Escenario.h
 * Author: Ricardo
 *
 * Created on 15 de abril de 2015, 9:41
 */

#ifndef ESCENARIO_H
#define	ESCENARIO_H

#include "../headers/Juego.h"
#include "../headers/Escenario.h"
#include "../headers/Estado.h"
#include "../headers/Mapa.h"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <stdio.h>
#include <string>

//using namespace tinyxml2;
using namespace std;
using namespace sf;

class Escenario: public Estado{
public:
    
    static Escenario* Instance();
    /*
    void Pause();
    void Resume();
    */
    //void init();
    void input();
    
    void cambiaSpriteCursorMano();
    void cambiaSpriteCursorSeleccionar();
    bool hayunidad(sf::Sprite sp);
        
protected:
    Escenario();
    ~Escenario();

private:
    static Escenario* pinstance;
    
    
    void init_State();
    void render_State();
    void update_State();
    
    sf::Texture* texturaSeleccionar;
    sf::Texture* texturaMano;
    sf::Sprite* spriteCursor;
    sf::Clock* reloj;
    sf::Event* evento;
<<<<<<< HEAD
    
    Mapa* mapa;
=======
    Unidad aliadas[5];//aray de unidades aliadas (posiblemente esten en mapa)
    Unidad enemigos[5];//array de unidades enemigas
>>>>>>> 5fc7d0477be174a70d2075fa6ddd5c3d00aaeec7
};

#endif	/* ESCENARIO_H */


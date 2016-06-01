#include "spaceship.hpp"
#include <iostream>
void spaceship::Move(sf::Sprite& spaceshipsprite){

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
{
 spaceshipsprite.move(sf::Vector2f(0,10));

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        spaceshipsprite.move(sf::Vector2f(0,-10));

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        spaceshipsprite.move(sf::Vector2f(-10,0));

    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        spaceshipsprite.move(sf::Vector2f(10,0));

    }



}
void spaceship::Show(sf::RenderWindow& app){

    if (!spaceshiptexture.loadFromFile("pics/spaceship.png"))
        {

        }


spaceshipsprite.setTexture(spaceshiptexture);
app.draw(spaceshipsprite);

    }


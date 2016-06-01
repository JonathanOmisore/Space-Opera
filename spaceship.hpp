#ifndef SPACESHIP_HPP_INCLUDED
#define SPACESHIP_HPP_INCLUDED
#include <SFML/Graphics.hpp>
class spaceship {

public:
    void Show(sf::RenderWindow& app);
    void Move(sf::Sprite &spaceshipsprite);
    sf::Texture spaceshiptexture;
sf::Sprite spaceshipsprite;


};



#endif // SPACESHIP_HPP_INCLUDED

#ifndef PLANET_HPP_INCLUDED
#define PLANET_HPP_INCLUDED
#include <SFML/Graphics.hpp>

class planet{

public:
    void Show(sf::RenderWindow& app);
sf::Texture gretex;
sf::Sprite grespr;

sf::Texture bltex;
sf::Sprite blspr;

sf::Texture retex;
sf::Sprite respr;

};


#endif // PLANET_HPP_INCLUDED

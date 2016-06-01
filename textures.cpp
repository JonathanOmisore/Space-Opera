#include "textures.hpp"

void createtexture::load(sf::RenderWindow app){

    texture.loadFromFile("pics/yellowplanet.png");
    sf::Sprite sprite(texture);
    app.draw(sprite);

}

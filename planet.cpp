#include "planet.hpp"
#include "spaceship.hpp"
#include "spaceship.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
void planet::Show(sf::RenderWindow & app){
int bluexchord[80];
int blueychord[80];
int greenxchord[80];
int greenychord[80];
    std::vector<sf::Sprite> blueplanet(80, sf::Sprite(blspr));
    std::vector<sf::Sprite> greenplanet(80, sf::Sprite(grespr));

srand(90);
    gretex.loadFromFile("pics/greenplanet.png");


        bltex.loadFromFile("pics/blueplanet.png");
        grespr.setTexture(gretex);
        blspr.setTexture(bltex);

for(int x =0, y=0; x<80 && y<80; x++,y++){
        //generate random xy coordinates
bluexchord[x] = rand()%12000;
blueychord[y] = rand()%1000;


}
for(int x = 0, y=0; x<80 && y<80; x++,y++){

    greenxchord[x] = rand()%27000;
greenychord[y] = rand()%3800;
}

for(int x =0, y=0; x<80 && y<80; x++,y++) {
        //try to prevent planets from being stuck together...
        if(bluexchord[x] - bluexchord[x + 1] < 700)
        {
            bluexchord[x + 1] += 80;
        }
        if(bluexchord[x] - bluexchord[x + 1] < 800)
        {
            bluexchord[x + 1] += 900;
        }
         if(blueychord[y] - blueychord[y + 1] < 200)
        {
            blueychord[y + 1] += 1000;
        }




}
for(int x = 0, y=0;x<80 && y<80; x++,y++){

 if((greenplanet[x].getGlobalBounds().intersects(greenplanet[x].getGlobalBounds())))
       greenxchord[x] += 1000;
         greenxchord[y] += 200;
}

for(int x =0, y=0; x<80 && y<80; x++,y++){
blueplanet[x].setPosition(bluexchord[x],blueychord[y]);
greenplanet[x].setPosition(greenxchord[x],greenxchord[y]);

}
for(int x = 0; x< 80; x++){
app.draw(blueplanet[x]);
app.draw(greenplanet[x]);
std::cout << "Y cord " << blueychord[80] << "\n ";
std::cout  << "X cord " << bluexchord[80] << "\n ";
}


}


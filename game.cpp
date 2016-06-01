#include "game.hpp"
#include "planet.hpp"
#include "spaceship.hpp"
void Game::Start(){
sf::RenderWindow app;
sf::View view1;
planet planetshow;
spaceship spaceshipshow;
app.create(sf::VideoMode(1200,1000),"Space");
view1.reset(sf::FloatRect(200, 200, 1200, 800));
while(app.isOpen()){

 sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();




        }
         app.clear();
        app.setView(view1);
view1.setCenter(0, 0);
view1.move(spaceshipshow.spaceshipsprite.getPosition());

                planetshow.Show(app);
                 spaceshipshow.Show(app);
          spaceshipshow.Move(spaceshipshow.spaceshipsprite);
                app.display();



}
}

#pragma once

#include <vector>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Drawable.hpp>

class Activity
{
public:
   /* Lancer l'activit� */
   virtual void run(cv::Mat frame) = 0;

   /* Proposer un event � r�cuperer. Si l'event est r�cup�r�, on renvoie vrai */
   virtual bool catchEvent(sf::Event event) = 0;

   /* Proposer un event � r�cuperer. Si l'event est r�cup�r�, on renvoie vrai */
   virtual std::vector<sf::Drawable> getDrawables(sf::Event event) = 0;

};
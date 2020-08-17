#pragma once

#include "SFMLClickableSquare.hpp"
#include <SFML/Graphics/Texture.hpp>

class SFMLButton : SFMLClickableSquare
{
public:
   SFMLButton(const Action action, sf::Vector2f pos, sf::Vector2f size, sf::Texture& texture);
   
   // Ex�cute l'action associ�e au bouton
   const Action execute;
};

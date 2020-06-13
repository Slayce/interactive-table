#pragma once

#include "activities/MainActivity.hpp"
#include <opencv2/videoio.hpp>

class MenuActivity : public MainActivity
{
public:
   MenuActivity(const sf::Vector2u window_size);

   virtual void run(cv::Mat frame) override;
   virtual bool catchEvent(sf::Event event) override;
   virtual std::vector<std::unique_ptr<sf::Drawable>> getDrawables() const override;
};


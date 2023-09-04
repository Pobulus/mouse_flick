#include <SFML/Window.hpp> 
#include <SFML/System.hpp> 
#include <string>

void sendKeys(std::string combo){
	std::string cmd = "xdotool keydown " + combo + " keyup " + combo;
	system(cmd.c_str());
}

int main(int argc, char** argv){
	int threshold 	= 300;
	int delay 	= 100;

	sf::Vector2i initPos = sf::Mouse::getPosition();
	sf::sleep(sf::milliseconds(delay));
	sf::Vector2i displacement =  sf::Mouse::getPosition() - initPos ;
	
	if(displacement.x > threshold){ 	//RIGHT
		sendKeys("ctrl alt Right");
	}else if(displacement.x < -threshold){ //LEFT
		sendKeys("ctrl alt Left");
	}else if(displacement.y < -threshold){ //UP
		sendKeys("ctrl alt Up");
	}else if(displacement.y > threshold){ //DOWN
		sendKeys("ctrl alt Down");
	}else{
		sendKeys("ctrl alt d");
	}

	return 0;
}

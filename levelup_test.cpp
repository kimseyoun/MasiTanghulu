#include <SFML/Graphics.hpp>
#include "levleup.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1500, 800), "레벨업 화면 테스트");
    Levelup levelup;
    levelup.run(window);
    return 0;
}

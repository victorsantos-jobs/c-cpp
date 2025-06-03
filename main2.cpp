#include <SFML/Graphics.hpp>

int main() {
    // Cria a janela
    sf::RenderWindow window(sf::VideoMode(800, 600), "Quadrado se Movendo");

    // Cria o quadrado
    sf::RectangleShape quadrado(sf::Vector2f(50.0f, 50.0f));
    quadrado.setFillColor(sf::Color::Green);
    quadrado.setPosition(375, 275); // posição inicial (centro)

    // Velocidade de movimento
    float velocidade = 200.0f;

    // Clock para deltaTime
    sf::Clock clock;

    // Loop principal
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Fecha a janela
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Calcular o tempo decorrido
        float deltaTime = clock.restart().asSeconds();

        // Verifica teclas pressionadas
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            quadrado.move(-velocidade * deltaTime, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            quadrado.move(velocidade * deltaTime, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            quadrado.move(0, -velocidade * deltaTime);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            quadrado.move(0, velocidade * deltaTime);

        // Limpa, desenha e exibe
        window.clear();
        window.draw(quadrado);
        window.display();
    }

    return 0;
}











#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Jogo meu");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}

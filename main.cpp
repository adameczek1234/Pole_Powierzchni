#include <iostream>

class Circle {
public:
    Circle(float r);
    float PoliczPole();
    float PoliczObw();
private:
    float radius = 0;
};

Circle::Circle(float r) {
    radius = r;
}

float Circle::PoliczPole() {
    return 3.14 * radius * radius;
}

float Circle::PoliczObw() {
    return 2 * 3.14 * radius;
}

class Rectangle {
public:
    Rectangle(float a, float b);
    float PoliczPole();
    float PoliczObw();
private:
    float a = 0;
    float b = 0;
};

Rectangle::Rectangle(float a_, float b_) {
    a = a_;
    b = b_;
}

float Rectangle::PoliczPole() {
    return a * b;
}

float Rectangle::PoliczObw() {
    return a + a + b + b;
}

class Square {
public:
    Square(float a);
    float PoliczPole();
    float PoliczObw();
private:
    float a = 0;
};

Square::Square(float a_) {
    a = a_;
}

float Square::PoliczPole() {
    return a * a;
}

float Square::PoliczObw() {
    return 4 * a;
}

void Menu() {
    std::cout
            << "1. Kolo\n"
            << "2. Prostokat\n"
            << "3. Kwadrat\n"
            << "4. Zakoncz\n";
}

int main(){
    while (true) {
        Menu();
        int choice = 0;
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::cout << "Podaj promien: ";
                float r; std::cin >> r;
                auto kolo = new Circle(r);
                std::cout << "Pole jest rowne: " << kolo->PoliczPole() << ", a obwod: " << kolo->PoliczObw() << std::endl;
                break;
            }
            case 2: {
                std::cout << "Podaj bok a i b po spacji: ";
                float a, b; std::cin >> a >> b;
                auto prostokat = new Rectangle(a, b);
                std::cout << "Pole jest rowne: " << prostokat->PoliczPole() << ", a obwod: " << prostokat->PoliczObw() << std::endl;
                break;
            }
            case 3: {
                std::cout << "Podaj bok a: ";
                float a; std::cin >> a;
                auto kwadrat = new Square(a);
                std::cout << "Pole jest rowne: " << kwadrat->PoliczPole() << ", a obwod: " << kwadrat->PoliczObw() << std::endl;
                break;
            }
            case 4:
                std::exit(0);
            default:
                std::cout << "Niepoprawny wybor! Sprobuj ponownie!\n\n";
        }
    }
}

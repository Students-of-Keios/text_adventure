#include <iostream>

int main() {
    int answer1;
    int answer2;
    int answer3;
    int answer4;
    int answer5;
    std::cout << "Q1:what is the name of the main character in hakiyu?\n";
    std::cout << "1)hinata\n";
    std::cout << "2)kageyama\n";
    std::cout << "3)daichi\n";
    std::cout << "4)sugawara\n";
    std::cout << "5)tanaka\n";
    std::cin >> answer1;
    switch ( answer1) {
        case 1: {
           std::cout << "correct!!\n";
            break;
        }
        default:
            std::cout << "incorrect!!";
            break;
    }
    std::cout << "Q2:what is kageyama number in the back?\n";
    std::cout << "1)6\n";
    std::cout << "2)10\n";
    std::cout << "3)9\n";
    std::cin >> answer2;
    switch (answer2) {
        case 3: {
            std::cout << "correct!!\n";
            break;
        }
        default: {
            std::cout << "incorrect!!\n";
            break;
        }
    }
    std::cout << "Q3:what is the strongest team in japan?\n";
    std::cout << "1)karasuno\n";
    std::cout << "2)Shiratorizawa\n";
    std::cout << "3)aoba johsai\n";
    std::cout << "4)date tech\n";
    std::cin >> answer3;
    switch (answer3) {
        case 2: {
            std::cout << "correct!!\n";
            break;
        }
        default: {
            std::cout << "incorrect!!\n";
            break;
        }
    }
}

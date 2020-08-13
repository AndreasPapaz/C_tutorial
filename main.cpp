#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

void playGame(){
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true) {
        int guess;
        std::cin >> guess;

        if (guess == random) {
            std::cout << "you win! \n";
            break;
        }
        else if (guess < random) {
            std::cout << "Too low \n";
        }
        else {
            std::cout << "Too Hight \n";
        }
    }
}

int main() {
    int choice;
    srand(time(NULL));

    do {
        std::cout << "0 : quit" << std::endl << "1 : start game\n";
        int choice;
        std::cin >> choice;

        switch(choice) {
            case 0:
                std::cout << "Hey you duck\n";
                return 0;
            case 1:
                std::cout << "Lets Play!" << std::endl;
                playGame();
                break;
        }
    }
    while(choice != 0);

}
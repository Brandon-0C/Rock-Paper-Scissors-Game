#include <iostream>
#include <ctime>

// Function declaration
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{
    char player;
    char computer;

    player = getUserChoice();  //setting player to getUserChoice function
    std::cout << "Your Choice: ";
    showChoice(player); // Calling showChoice to translate users choice

    computer = getComputerChoice(); //setting computer to getComputerChoice function
    std::cout << "Computer's Choice: ";
    showChoice(computer); // Calling showChoice to translate users choice

    chooseWinner(player, computer); //Calling function to determine winner

}

char getUserChoice() //Prompts user to enter a valid choice
{
    char player;
    std::cout << "Rock-Paper-Scissor Game!\n";
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "r for Rock\n";
        std::cout << "p for paper\n";
        std::cout << "s for Scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;

}

char getComputerChoice() //Random generator for PC choice
{
    srand(time(0));
    int ranNum = rand() % 3 + 1;

    switch (ranNum)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';

    }
    
}

void showChoice(char choice)//Function that passes users and PC choice to translate 
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;

    case 'p':
        std::cout << "Paper\n";
        break;

    case 's':
        std::cout << "Scissor\n";
        break;
    }

}

void chooseWinner(char player, char computer)//Function that compares player and PC option to determine winner 
                                             //using a swithc and if statements
{
    switch (player)
    {
    case 'r':           if (computer == 'r')
    {
        std::cout << "It's a tie!\n";
    }
            else if (computer == 'p')
    {
        std::cout << "You loose!";
    }
            else
    {
        std::cout << "You win!";
    }
            break;

    case 'p':           if (computer == 'r')
    {
        std::cout << "You win!\n";
    }
            else if (computer == 'p')
    {
        std::cout << "It's a tie!";
    }
            else
    {
        std::cout << "You loose!";
    }

            break;

    case 's':           if (computer == 'r')
    {
        std::cout << "You loose!\n";
    }
            else if (computer == 'p')
    {
        std::cout << "You win!";
    }
            else
    {
        std::cout << "It's a tie!";
    }
            break;
    }

}

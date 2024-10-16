#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> //time()

int createRandNum(){

    srand(time(0)); // Seed validation for creating randNum
    return(rand() %100) + 1; //Create randNum between 1 and 100
}

void guessCheck(int randNum, int attempt){

    int* guesses = new int[attempt];
    int userGuess;
    bool correctGuess = false; //At first, this is zero.
    int guessCount = 0;
    while(attempt > 0 && !correctGuess){

        std::cout<<"Guess a number: " << "You have "<<attempt<<" rights left: ";
        std::cin>>userGuess;
        guesses[guessCount] = userGuess;
        guessCount++;

        if(userGuess < randNum){
            std::cout <<"Guess bigger number."<< std::endl;
        } else if(userGuess > randNum){
            std::cout <<"Guess smaller number."<< std::endl;
        } else{
            std::cout <<"Congrats! Right guess."<< std::endl;
            correctGuess = true;
        } 
        attempt--;
    }

        if (!correctGuess)
        {
            std::cout <<"YOUR GUESS RIGHTS HAVE ENDED! Correct number is: "<< randNum << std::endl;
        }
        
    std::cout<<"Guesses made: ";
    for(int i = 0 ; i < guessCount ; i++){
        std::cout<< guesses[i] << " ";
    }
    std::cout<<std::endl;

    delete[] guesses; // free to dynamic mem

}



int main(){
    char playAgain;
    
    do {
        int randNum = createRandNum();
        int attempt = 5;
        guessCheck(randNum, attempt);

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while(playAgain == 'Y' || playAgain == 'y'); 

    std::cout << "The game is over!" << std::endl;

    return 0;
}
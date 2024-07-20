#include <SFML/Graphics.hpp>
#include <ctime>

void randomWord(sf::Text &theWord, int gameOver, int wordNumber, int randomNumber, int chosenWord[5])
{
    if(randomNumber==1)
       {
    // Value
        chosenWord[0]=22;
        chosenWord[1]=1;
        chosenWord[2]=12;
        chosenWord[3]=21;
        chosenWord[4]=5;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was value!");
        }
    }
    // Study
        if(randomNumber==2)
    {
        chosenWord[0]=19;
        chosenWord[1]=20;
        chosenWord[2]=21;
        chosenWord[3]=4;
        chosenWord[4]=25;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was study!");
        }
    }
    // Table
    if(randomNumber==3)
    {
        chosenWord[0]=20;
        chosenWord[1]=1;
        chosenWord[2]=2;
        chosenWord[3]=12;
        chosenWord[4]=5;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was table!");
        }
    }
    // Taken
    if(randomNumber==4)
    {
        chosenWord[0]=20;
        chosenWord[1]=1;
        chosenWord[2]=11;
        chosenWord[3]=5;
        chosenWord[4]=14;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was taken!");
        }
    }
    // Times
    if(randomNumber==5)
    {
        chosenWord[0]=20;
        chosenWord[1]=9;
        chosenWord[2]=13;
        chosenWord[3]=5;
        chosenWord[4]=19;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was times!");
        }
    }
    // Knows
    if(randomNumber==6)
    {
        chosenWord[0]=11;
        chosenWord[1]=14;
        chosenWord[2]=15;
        chosenWord[3]=23;
        chosenWord[4]=19;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was knows!");
        }
    }
    // Court
    if(randomNumber==7)
    {
        chosenWord[0]=3;
        chosenWord[1]=15;
        chosenWord[2]=21;
        chosenWord[3]=18;
        chosenWord[4]=20;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was court!");
        }
    }
    // Young
    if(randomNumber==8)
    {
        chosenWord[0]=25;
        chosenWord[1]=15;
        chosenWord[2]=21;
        chosenWord[3]=14;
        chosenWord[4]=7;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was young!");
        }
    }
    // Words
    if(randomNumber==9)
    {
        chosenWord[0]=23;
        chosenWord[1]=15;
        chosenWord[2]=18;
        chosenWord[3]=4;
        chosenWord[4]=19;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was words!");
        }
    }
    // White
    if(randomNumber==10)
    {
        chosenWord[0]=23;
        chosenWord[1]=8;
        chosenWord[2]=9;
        chosenWord[3]=20;
        chosenWord[4]=5;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was white!");
        }
    }
    // Light
    if(randomNumber==11)
    {
        chosenWord[0]=12;
        chosenWord[1]=9;
        chosenWord[2]=7;
        chosenWord[3]=8;
        chosenWord[4]=20;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was light!");
        }
    }
    // Least
    if(randomNumber==12)
    {
        chosenWord[0]=12;
        chosenWord[1]=5;
        chosenWord[2]=1;
        chosenWord[3]=19;
        chosenWord[4]=20;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was least!");
        }
    }
    // Gavel
    if(randomNumber==13)
    {
        chosenWord[0]=7;
        chosenWord[1]=1;
        chosenWord[2]=22;
        chosenWord[3]=5;
        chosenWord[4]=12;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was gavel!");
        }
    }
    // Child
    if(randomNumber==14)
    {
        chosenWord[0]=3;
        chosenWord[1]=8;
        chosenWord[2]=9;
        chosenWord[3]=12;
        chosenWord[4]=4;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was child!");
        }
    }
    // Death
    if(randomNumber==15)
    {
        chosenWord[0]=4;
        chosenWord[1]=5;
        chosenWord[2]=1;
        chosenWord[3]=20;
        chosenWord[4]=8;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was death!");
        }
    }
    // Place
    if(randomNumber==16)
    {
        chosenWord[0]=16;
        chosenWord[1]=12;
        chosenWord[2]=1;
        chosenWord[3]=3;
        chosenWord[4]=5;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was place!");
        }
    }
    // Cased
    if(randomNumber==17)
    {
        chosenWord[0]=3;
        chosenWord[1]=1;
        chosenWord[2]=19;
        chosenWord[3]=5;
        chosenWord[4]=4;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was cased!");
        }
    }
    // Doing
    if(randomNumber==18)
    {
        chosenWord[0]=4;
        chosenWord[1]=15;
        chosenWord[2]=9;
        chosenWord[3]=14;
        chosenWord[4]=7;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was doing!");
        }
    }
    // Party
    if(randomNumber==19)
    {
        chosenWord[0]=16;
        chosenWord[1]=1;
        chosenWord[2]=18;
        chosenWord[3]=20;
        chosenWord[4]=25;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was party!");
        }
    }
    // Using
    if(randomNumber==20)
    {
        chosenWord[0]=21;
        chosenWord[1]=19;
        chosenWord[2]=9;
        chosenWord[3]=14;
        chosenWord[4]=7;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was using!");
        }
    }
    // Chunk
    if(randomNumber==21)
    {
        chosenWord[0]=3;
        chosenWord[1]=8;
        chosenWord[2]=21;
        chosenWord[3]=14;
        chosenWord[4]=11;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was chunk!");
        }
    }
    // Based
    if(randomNumber==22)
    {
        chosenWord[0]=2;
        chosenWord[1]=1;
        chosenWord[2]=19;
        chosenWord[3]=5;
        chosenWord[4]=4;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was based!");
        }
    }
    // Whose
    if(randomNumber==23)
    {
        chosenWord[0]=23;
        chosenWord[1]=8;
        chosenWord[2]=15;
        chosenWord[3]=19;
        chosenWord[4]=5;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was whose!");
        }
    }
    // South
    if(randomNumber==24)
    {
        chosenWord[0]=19;
        chosenWord[1]=15;
        chosenWord[2]=21;
        chosenWord[3]=20;
        chosenWord[4]=8;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was south!");
        }
    }
    // Tonal
    if(randomNumber==25)
    {
        chosenWord[0]=20;
        chosenWord[1]=15;
        chosenWord[2]=14;
        chosenWord[3]=1;
        chosenWord[4]=12;
        if(gameOver==5||wordNumber>6)
        {
            theWord.setString("The word was tonal!");
        }
    }
}

//**********************************************************************

void endGame(double &wins, double &losses, double &winpct, int gd[6], int wordNumber, int gameOver)
{
    if(gameOver==5)
    {
        wins++;

        if(wordNumber-1==6)
        {
            gd[5]++;
        }
        else if(wordNumber-1==5)
        {
            gd[4]++;
        }
        else if(wordNumber-1==4)
        {
            gd[3]++;
        }
        else if(wordNumber-1==3)
        {
            gd[2]++;
        }
        else if(wordNumber-1==2)
        {
            gd[1]++;
        }
        else if(wordNumber-1==1)
        {
            gd[0]++;
        }
    }
    else
    {
        losses++;
    }

    winpct=(wins/(wins+losses))*100;
}

//**********************************************************************

void again(bool &game, int &randomNumber, int &letter, sf::Text keyboardText[27], int yourWord[36], sf::Text word[36], bool keyboardBool[27])
{
    game=true;
    randomNumber=(rand()%25)+1;
    letter=0;
    for(int i=0; i<36; i++)
    {
        yourWord[i]=0;
        word[i].setString(" ");
        word[i].setFillColor(sf::Color(250, 128, 114));
    }
    for(int i=1; i<27; i++)
    {
        keyboardText[i].setFillColor(sf::Color::White);
        keyboardBool[i]=true;
    }
}

//**********************************************************************

int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(500, 700), "Wordle");
    app.setFramerateLimit(60);

    // Variables
    int yourWord[36];
    int chosenWord[5];
    int letter=0;
    int wordNumber=1;
    int once=0;
    int num=0;
    int num2=0;
    int usedNum=0;
    int gameOver=0;
    bool game=true;
    bool keyboardBool[27];
    for(int i=1; i<27; i++)
    {
        keyboardBool[i]=true;
    }

    // Game over variables
    double win=0;
    int winInt=0;
    double loss=0;
    int lossInt=0;
    int gd[6];
    for(int i=0; i<6; i++)
    {
        gd[i]=0;
    }
    int guesses=1;
    double winpct=100;
    int winpctInt=100;

    sf::Clock clock;

    // Random number to pick word
    srand((unsigned)time(0));
    int randomNumber=(rand()%25)+1;

    // Text boxes
    sf::Font wordleFont;
    wordleFont.loadFromFile("HelveticaNeue.ttf");

    sf::Text word[36];
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            word[num].setFont(wordleFont);
            word[num].setCharacterSize(40);
            word[num].setPosition(j*80+75, i*80+85);
            word[num].setFillColor(sf::Color(250, 128, 114));
            num++;
        }
        num++;
    }

    sf::Font titleFont;
    titleFont.loadFromFile("Georgia.ttf");

    sf::Text titleText;
    titleText.setFont(titleFont);
    titleText.setCharacterSize(50);
    titleText.setString("Wordle");
    titleText.setPosition(170, 10);
    titleText.setFillColor(sf::Color::Black);

    // The keyboard
    sf:: Text keyboardText[27];
    for(int i=1; i<27; i++)
    {
        keyboardText[i].setFont(wordleFont);
        keyboardText[i].setCharacterSize(30);
        keyboardText[i].setFillColor(sf::Color::White);
    }

    // First row
    keyboardText[17].setString("Q");
    keyboardText[17].setPosition(60, 565);
    keyboardText[23].setString("W");
    keyboardText[23].setPosition(100, 565);
    keyboardText[5].setString("E");
    keyboardText[5].setPosition(140, 565);
    keyboardText[18].setString("R");
    keyboardText[18].setPosition(180, 565);
    keyboardText[20].setString("T");
    keyboardText[20].setPosition(220, 565);
    keyboardText[25].setString("Y");
    keyboardText[25].setPosition(260, 565);
    keyboardText[21].setString("U");
    keyboardText[21].setPosition(300, 565);
    keyboardText[9].setString(" I");
    keyboardText[9].setPosition(340, 565);
    keyboardText[15].setString("O");
    keyboardText[15].setPosition(380, 565);
    keyboardText[16].setString("P");
    keyboardText[16].setPosition(420, 565);

    // Second row
    keyboardText[1].setString("A");
    keyboardText[1].setPosition(80, 600);
    keyboardText[19].setString("S");
    keyboardText[19].setPosition(120, 600);
    keyboardText[4].setString("D");
    keyboardText[4].setPosition(160, 600);
    keyboardText[6].setString("F");
    keyboardText[6].setPosition(200, 600);
    keyboardText[7].setString("G");
    keyboardText[7].setPosition(240, 600);
    keyboardText[8].setString("H");
    keyboardText[8].setPosition(280, 600);
    keyboardText[10].setString("J");
    keyboardText[10].setPosition(320, 600);
    keyboardText[11].setString("K");
    keyboardText[11].setPosition(360, 600);
    keyboardText[12].setString("L");
    keyboardText[12].setPosition(400, 600);

    // Third row
    keyboardText[26].setString("Z");
    keyboardText[26].setPosition(120, 635);
    keyboardText[24].setString("X");
    keyboardText[24].setPosition(160, 635);
    keyboardText[3].setString("C");
    keyboardText[3].setPosition(200, 635);
    keyboardText[22].setString("V");
    keyboardText[22].setPosition(240, 635);
    keyboardText[2].setString("B");
    keyboardText[2].setPosition(280, 635);
    keyboardText[14].setString("N");
    keyboardText[14].setPosition(320, 635);
    keyboardText[13].setString("M");
    keyboardText[13].setPosition(360, 635);

    // Background
    sf::RectangleShape background;

    background.setFillColor(sf::Color(255, 160, 122));
    background.setSize(sf::Vector2f(500, 700));

    // Making boxes for the letters to go into
    sf::RectangleShape letterBoxes[30];

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            letterBoxes[num2].setSize(sf::Vector2f(60, 60));
            letterBoxes[num2].setPosition(j*80+60, i*80+80);
            letterBoxes[num2].setFillColor(sf::Color::White);
            num2++;
        }
    }

    // Game over
    sf::RectangleShape endingBox;
    endingBox.setSize(sf::Vector2f(380, 480));
    endingBox.setFillColor(sf::Color::White);
    endingBox.setPosition(60, 80);

    sf::Font endingFont;
    endingFont.loadFromFile("Neuton.ttf");

    sf::Text stats;
    stats.setFont(endingFont);
    stats.setCharacterSize(40);
    stats.setPosition(185, 105);
    stats.setFillColor(sf::Color(255, 160, 122));
    stats.setString("Statistics");

    sf::Text wins;
    wins.setFont(endingFont);
    wins.setCharacterSize(25);
    wins.setPosition(100, 200);
    wins.setFillColor(sf::Color(255, 160, 122));
    wins.setString("Wins");

    sf::Text winNum;
    winNum.setFont(endingFont);
    winNum.setCharacterSize(40);
    winNum.setPosition(115, 155);
    winNum.setFillColor(sf::Color(255, 160, 122));
    winNum.setString(std::to_string(winInt));

    sf::Text losses;
    losses.setFont(endingFont);
    losses.setCharacterSize(25);
    losses.setPosition(215, 200);
    losses.setFillColor(sf::Color(255, 160, 122));
    losses.setString("Losses");

    sf::Text lossNum;
    lossNum.setFont(endingFont);
    lossNum.setCharacterSize(40);
    lossNum.setPosition(235, 155);
    lossNum.setFillColor(sf::Color(255, 160, 122));
    lossNum.setString(std::to_string(lossInt));

    sf::Text winPercentage;
    winPercentage.setFont(endingFont);
    winPercentage.setCharacterSize(25);
    winPercentage.setPosition(335, 200);
    winPercentage.setFillColor(sf::Color(255, 160, 122));
    winPercentage.setString("Win %");

    sf::Text winpctNum;
    winpctNum.setFont(endingFont);
    winpctNum.setCharacterSize(40);
    winpctNum.setPosition(335, 155);
    winpctNum.setFillColor(sf::Color(255, 160, 122));
    winpctNum.setString(std::to_string(winpctInt));

    sf::Text guessDistribution;
    guessDistribution.setFont(endingFont);
    guessDistribution.setCharacterSize(40);
    guessDistribution.setPosition(110, 245);
    guessDistribution.setFillColor(sf::Color(255, 160, 122));
    guessDistribution.setString("Guess Distribution");

    sf::Text numGuessDistribution[6];
    for(int i=0; i<6; i++)
    {
        numGuessDistribution[i].setFont(endingFont);
        numGuessDistribution[i].setCharacterSize(25);
        numGuessDistribution[i].setPosition(i*50+120, 350);
        numGuessDistribution[i].setFillColor(sf::Color(255, 160, 122));
        numGuessDistribution[i].setString(std::to_string(guesses));
        guesses++;
    }

    sf::Text guessDistributionNum[6];
    for(int i=0; i<6; i++)
    {
        guessDistributionNum[i].setFont(endingFont);
        guessDistributionNum[i].setCharacterSize(40);
        guessDistributionNum[i].setPosition(i*50+120, 295);
        guessDistributionNum[i].setFillColor(sf::Color(255, 160, 122));
        guessDistributionNum[i].setString(std::to_string(gd[i]));
    }

    sf::Text answer;
    answer.setFont(endingFont);
    answer.setCharacterSize(40);
    answer.setPosition(190, 395);
    answer.setFillColor(sf::Color(255, 160, 122));
    answer.setString("Answer");

    sf::Text theWord;
    theWord.setFont(endingFont);
    theWord.setCharacterSize(25);
    theWord.setPosition(155, 445);
    theWord.setFillColor(sf::Color(255, 160, 122));

    sf::Text playAgain;
    playAgain.setFont(endingFont);
    playAgain.setCharacterSize(40);
    playAgain.setPosition(215, 490);
    playAgain.setFillColor(sf::Color(255, 160, 122));
    playAgain.setString("Click");

//**********************************************************************

    // Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
            {
                app.close();
            }
        }

        // Game logic
        if(game==true)
        {
            gameOver=0;
        }

        // Choosing a word
        randomWord(theWord, gameOver, wordNumber, randomNumber, chosenWord);

        // Typing letters
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)&&letter<36&&once==0)
        {
            yourWord[letter] = 1;
            word[letter].setString("A");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)&&letter<36&&once==0)
        {
            yourWord[letter] = 2;
            word[letter].setString("B");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::C)&&letter<36&&once==0)
        {
            yourWord[letter] = 3;
            word[letter].setString("C");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)&&letter<36&&once==0)
        {
            yourWord[letter] = 4;
            word[letter].setString("D");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::E)&&letter<36&&once==0)
        {
            yourWord[letter] = 5;
            word[letter].setString("E");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::F)&&letter<36&&once==0)
        {
            yourWord[letter] = 6;
            word[letter].setString("F");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::G)&&letter<36&&once==0)
        {
            yourWord[letter] = 7;
            word[letter].setString("G");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::H)&&letter<36&&once==0)
        {
            yourWord[letter] = 8;
            word[letter].setString("H");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::I)&&letter<36&&once==0)
        {
            yourWord[letter] = 9;
            word[letter].setString(" I");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::J)&&letter<36&&once==0)
        {
            yourWord[letter] = 10;
            word[letter].setString("J");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::K)&&letter<36&&once==0)
        {
            yourWord[letter] = 11;
            word[letter].setString("K");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::L)&&letter<36&&once==0)
        {
            yourWord[letter] = 12;
            word[letter].setString("L");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::M)&&letter<36&&once==0)
        {
            yourWord[letter] = 13;
            word[letter].setString("M");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::N)&&letter<36&&once==0)
        {
            yourWord[letter] = 14;
            word[letter].setString("N");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::O)&&letter<36&&once==0)
        {
            yourWord[letter] = 15;
            word[letter].setString("O");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::P)&&letter<36&&once==0)
        {
            yourWord[letter] = 16;
            word[letter].setString("P");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q)&&letter<36&&once==0)
        {
            yourWord[letter] = 17;
            word[letter].setString("Q");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)&&letter<36&&once==0)
        {
            yourWord[letter] = 18;
            word[letter].setString("R");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)&&letter<36&&once==0)
        {
            yourWord[letter] = 19;
            word[letter].setString("S");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::T)&&letter<36&&once==0)
        {
            yourWord[letter] = 20;
            word[letter].setString("T");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::U)&&letter<36&&once==0)
        {
            yourWord[letter] = 21;
            word[letter].setString("U");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::V)&&letter<36&&once==0)
        {
            yourWord[letter] = 22;
            word[letter].setString("V");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)&&letter<36&&once==0)
        {
            yourWord[letter] = 23;
            word[letter].setString("W");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::X)&&letter<36&&once==0)
        {
            yourWord[letter] = 24;
            word[letter].setString("X");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y)&&letter<36&&once==0)
        {
            yourWord[letter] = 25;
            word[letter].setString("Y");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)&&letter<36&&once==0)
        {
            yourWord[letter] = 26;
            word[letter].setString("Z");
            letter++;
            once=1;
            clock.restart();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace)&&once==0&&6*wordNumber-6<=letter)
        {
            if(letter!=0)
            {
                letter--;
            }
            word[letter].setString(" ");
            once=1;
            clock.restart();
        }
        if(clock.getElapsedTime().asSeconds()>.2f&&once==1)
        {
            once=0;
        }

        // Submitting the word
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)&&(6*wordNumber-1==letter)&&game==true)
        {
            // Variables for the keyboard
            int a1=-10;
            int b1=-10;
            int c1=-10;
            int d1=-10;
            int e1=-10;

            int a2=-10;
            int b2=-10;
            int c2=-10;
            int d2=-10;
            int e2=-10;

            // Setting letters grey
            for(int i=2; i<7; i++)
            {
                word[(wordNumber*6)-i].setFillColor(sf::Color(110, 110, 110));
            }

            // Setting letters yellow
            int a=-10;
            int b=-10;
            int c=-10;
            int d=-10;
            int e=-10;

            for(int i=2; i<7; i++)
            {
                if(chosenWord[0]==yourWord[(wordNumber*6)-i])
                {
                    a=i;
                    a2=chosenWord[0];
                }
            }
            for(int i=2; i<7; i++)
            {
                if(chosenWord[1]==yourWord[(wordNumber*6)-i]&&a!=i)
                {
                    b=i;
                    b2=chosenWord[1];
                }
            }
            for(int i=2; i<7; i++)
            {
                if(chosenWord[2]==yourWord[(wordNumber*6)-i]&&a!=i&&b!=i)
                {
                    c=i;
                    c2=chosenWord[2];
                }
            }
            for(int i=2; i<7; i++)
            {
                if(chosenWord[3]==yourWord[(wordNumber*6)-i]&&a!=i&&b!=i&&c!=i)
                {
                    d=i;
                    d2=chosenWord[3];
                }
            }
            for(int i=2; i<7; i++)
            {
                if(chosenWord[4]==yourWord[(wordNumber*6)-i]&&a!=i&&b!=i&&c!=i&&d!=i)
                {
                    e=i;
                    e2=chosenWord[4];
                }
            }
            if(a!=-10)
            {
                word[(wordNumber*6)-a].setFillColor(sf::Color::Yellow);
            }
            if(b!=-10)
            {
                word[(wordNumber*6)-b].setFillColor(sf::Color::Yellow);
            }
            if(c!=-10)
            {
                word[(wordNumber*6)-c].setFillColor(sf::Color::Yellow);
            }
            if(d!=-10)
            {
                word[(wordNumber*6)-d].setFillColor(sf::Color::Yellow);
            }
            if(e!=-10)
            {
                word[(wordNumber*6)-e].setFillColor(sf::Color::Yellow);
            }

            // Setting letters green
            if(yourWord[(wordNumber*6)-6]==chosenWord[0])
            {
                word[(wordNumber*6)-6].setFillColor(sf::Color::Green);
                if(a!=-10&&a!=6)
                {
                    word[(wordNumber*6)-a].setFillColor(sf::Color(110, 110, 110));
                }
                a1=chosenWord[0];
                gameOver++;
            }
            if(yourWord[(wordNumber*6)-5]==chosenWord[1])
            {
                word[(wordNumber*6)-5].setFillColor(sf::Color::Green);
                if(b!=-10&&b!=5)
                {
                    word[(wordNumber*6)-b].setFillColor(sf::Color(110, 110, 110));
                }
                b1=chosenWord[1];
                gameOver++;
            }
            if(yourWord[(wordNumber*6)-4]==chosenWord[2])
            {
                word[(wordNumber*6)-4].setFillColor(sf::Color::Green);
                if(c!=-10&&c!=4)
                {
                    word[(wordNumber*6)-c].setFillColor(sf::Color(110, 110, 110));
                }
                c1=chosenWord[2];
                gameOver++;
            }
            if(yourWord[(wordNumber*6)-3]==chosenWord[3])
            {
                word[(wordNumber*6)-3].setFillColor(sf::Color::Green);
                if(d!=-10&&d!=3)
                {
                    word[(wordNumber*6)-d].setFillColor(sf::Color(110, 110, 110));
                }
                d1=chosenWord[3];
                gameOver++;
            }
            if(yourWord[(wordNumber*6)-2]==chosenWord[4])
            {
                word[(wordNumber*6)-2].setFillColor(sf::Color::Green);
                if(e!=-10&&e!=2)
                {
                    word[(wordNumber*6)-e].setFillColor(sf::Color(110, 110, 110));
                }
                e1=chosenWord[4];
                gameOver++;
            }

            // The keyboard

            // Grey
            for(int i=2; i<7; i++)
            {
                usedNum=yourWord[(wordNumber*6)-i];
                if(keyboardBool[usedNum]==true)
                {
                    keyboardText[usedNum].setFillColor(sf::Color(110, 110, 110));
                }
            }

            // Yellow
            if(a2!=-10)
            {
                if(keyboardBool[a2]==true)
                {
                    keyboardText[a2].setFillColor(sf::Color::Yellow);
                }
            }
            if(b2!=-10)
            {
                if(keyboardBool[b2]==true)
                {
                    keyboardText[b2].setFillColor(sf::Color::Yellow);
                }
            }
            if(c2!=-10)
            {
                if(keyboardBool[c2]==true)
                {
                    keyboardText[c2].setFillColor(sf::Color::Yellow);
                }
            }
            if(d2!=-10)
            {
                if(keyboardBool[d2]==true)
                {
                    keyboardText[d2].setFillColor(sf::Color::Yellow);
                }
            }
            if(e2!=-10)
            {
                if(keyboardBool[e2]==true)
                {
                    keyboardText[e2].setFillColor(sf::Color::Yellow);
                }
            }

            // Green
            if(a1!=-10)
            {
                keyboardText[a1].setFillColor(sf::Color::Green);
                keyboardBool[a1]=false;
            }
            if(b1!=-10)
            {
                keyboardText[b1].setFillColor(sf::Color::Green);
                keyboardBool[b1]=false;
            }
            if(c1!=-10)
            {
                keyboardText[c1].setFillColor(sf::Color::Green);
                keyboardBool[c1]=false;
            }
            if(d1!=-10)
            {
                keyboardText[d1].setFillColor(sf::Color::Green);
                keyboardBool[d1]=false;
            }
            if(e1!=-10)
            {
                keyboardText[e1].setFillColor(sf::Color::Green);
                keyboardBool[e1]=false;
            }

            if(wordNumber<6)
            {
                letter++;
            }
            wordNumber++;
        }

        // Keeping the user on the same word before entering
        if(wordNumber==1)
        {
            if(letter==6)
            {
                letter=5;
            }
        }
        if(wordNumber==2)
        {
            if(letter==12)
            {
                letter=11;
            }
        }
        if(wordNumber==3)
        {
            if(letter==18)
            {
                letter=17;
            }
        }
        if(wordNumber==4)
        {
            if(letter==24)
            {
                letter=23;
            }
        }
        if(wordNumber==5)
        {
            if(letter==30)
            {
                letter=29;
            }
        }
        if(wordNumber==6)
        {
            if(letter==36)
            {
                letter=35;
            }
        }

        // Ending the game
        if(gameOver==5||wordNumber>6)
        {
            game=false;
            randomWord(theWord, gameOver, wordNumber, randomNumber, chosenWord);
            endGame(win, loss, winpct, gd, wordNumber, gameOver);
            winInt=win;
            lossInt=loss;
            winpctInt=winpct;

            winNum.setString(std::to_string(winInt));
            lossNum.setString(std::to_string(lossInt));
            winpctNum.setString(std::to_string(winpctInt));

            for(int i=0; i<6; i++)
            {
                guessDistributionNum[i].setString(std::to_string(gd[i]));
            }
            gameOver=0;
            wordNumber=1;
        }

        if(game==false&&(sf::Mouse::isButtonPressed(sf::Mouse::Left)))
        {
            again(game, randomNumber, letter, keyboardText, yourWord, word, keyboardBool);
        }

        // Clear screen
        app.clear();

        // Draw the sprite
        app.draw(background);
        app.draw(titleText);
        for(int i=0; i<30; i++)
        {
            app.draw(letterBoxes[i]);
        }
        for(int i=0; i<35; i++)
        {
            app.draw(word[i]);
        }
        for(int i=1; i<27; i++)
        {
            app.draw(keyboardText[i]);
        }
        if(game==false)
        {
            app.draw(endingBox);
            app.draw(stats);
            app.draw(wins);
            app.draw(winNum);
            app.draw(losses);
            app.draw(lossNum);
            app.draw(winPercentage);
            app.draw(winpctNum);
            app.draw(guessDistribution);
            for(int i=0; i<6; i++)
            {
                app.draw(guessDistributionNum[i]);
                app.draw(numGuessDistribution[i]);
            }
            app.draw(theWord);
            app.draw(answer);
            app.draw(playAgain);
        }

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}

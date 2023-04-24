#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 

 1    int - integer, a whole number;
 
         int marathonDifficulty = 7;
         int numOfRunners = 250;
         int numOfMiles = 30;
 
 2    float - floating point, decimal number, has suffix;

         float startTime = 0.01f;
         float endTime = 1290.6f;
         float totalHours = 21.5f;
 
 3    bool - boolean, true or false

         bool isAdult = true;
         bool isEarly = false;
         bool isRegistered = true;
 
 4    double - double floating point, larger decimal numbers, no suffix;

         double averageSpeed = 5.59;
         double heartRate = 78.6;
         double topSpeed = 7.43;
 
 5    char - character, a single letter;

         char advancedRunner = 'a';
         char intermediateRunner = 'm';
         char beginnerRunner = 'b';
 
 6    void - return nothing;
 

 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    // int - integer, a whole number;
 
         int marathonDifficulty = 7;
         int numOfRunners = 250;
         int numOfMiles = 30;
 
    //float - floating point, decimal number, has suffix;

         float startTime = 0.01f;
         float endTime = 1290.6f;
         float totalHours = 21.5f;
 
    //bool - boolean, true or false

         bool isAdult = true;
         bool isEarly = false;
         bool isRegistered = true;
 
    //double - double floating point, larger decimal numbers, no suffix;

         double averageSpeed = 5.59;
         double heartRate = 78.6;
         double topSpeed = 7.43;
 
    //char - character, a single letter;

         char advancedRunner = 'a';
         char intermediateRunner = 'm';
         char beginnerRunner = 'b';
 
    //void - return nothing;

    
    ignoreUnused(number, marathonDifficulty, numOfRunners, numOfMiles, startTime,endTime,totalHours, isAdult, isEarly, isRegistered, averageSpeed, heartRate, topSpeed, advancedRunner, totalHours, intermediateRunner, beginnerRunner); 
    //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 


// 1)
 
bool takeOutTrash(bool trashBinFull = true, int weightOfBag = 5, float odorLevel = 8.3f)
{
 
    ignoreUnused(trashBinFull, weightOfBag, odorLevel);

    return {};
     
}
 

// 2) 

int eatMeal(bool isHungry = true, bool hasFood = true)
{

    ignoreUnused(isHungry, hasFood);

    return {};
 
}


// 3)

bool planToFail(bool plannedAccordingly = false, bool isCompetent = false, bool hasResources = false)
{

    ignoreUnused(plannedAccordingly, isCompetent, hasResources);
    
    return {};
}


/* // 4)

bool purchasePetDog(int dollarsSaved > 2000, bool timeAvailable = true, int spaceAvailable > 756)
{
    int dollarsSaved = 2000;
    bool timeAvailable = true;
    int spaceAvailable = 756;
    
    ignoreUnused(dollarsSaved, timeAvailable, spaceAvailable);

    return {};
};


// 5)

int pokemonCollected(int capturedPokemon = 14)
{

    ignoreUnused(capturedPokemon);
    
    return {};

};
 

// 6) 

double raiseIncome(int xYearsAtJob > 1, bool improvedSkillset = true)
{

    ignoreUnused(xYearsAtJob, improvedSkillset);
    
    return {};

};


// 7)

int pourStrongDrink(bool repeatCustomer = true, bool unpaidTab = false, int tipAmount = 20)
{

    ignoreUnused(repeatCustomer, unpaidTab, tipAmount);

    return {};
};


// 8)

bool timeToFight(int angerLevel > 8, int offenseLevel > 6)
{

    ignoreUnused(angerLevel, offenseLevel);

    return {};
};


// 9)

int takeTheBus(int availableCash > 150, bool longTrip = false)
{

    ignoreUnused(availableCash, longTrip);
    
    return{};
};


// 10)

char courseGrade(int testScore = 0, int assignments = 0, int inClassWork = 0)
{

    ignoreUnused(testScore, assignments, inClassWork);
    
    return {};

};

*/
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto removeTrash = takeOutTrash(true, 9, 8.7f);
    //2)
    auto orderPizza = eatMeal(true, true);
    //3)
    auto rejectPlan = planToFail(false, true, false);
 /*     //4)
    auto buyDog = purchasePetDog(1800, false, 800);
    //5)
    auto inventory = pokemonCollected(6);
    //6)
    auto payMicheal = raiseIncome(2, true);
    //7)
    auto alcoholLevel = pourStrongDrink(true, true, 10);
    //8)
    auto loseCool = timeToFight(10, 10);
    //9)
    auto cheapTravel = takeTheBus(300, true);
    //10)
    auto gradeInClass = courseGrade(80, 10, 113);
   */ 
    ignoreUnused(carRented, removeTrash, orderPizza, rejectPlan);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

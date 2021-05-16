/* gameDemo.cpp - The Driver of the Final Project Game
 * Author:	Jack Utter
 * Module:	Final Project
 * Project:	The Big one
 * Problem Statement: Write a text game, that can grow without increased coding.
 * Algorithm:
 * 1. include ( <iostream>, <iomanip>, <fstream>, <windows.h> ) new classes (Character.h, Environment.h)
 * 2. Declare prototype functions ~~~~(Defined below)~~~~~~~
 * 3. Declare 2 global constant ints, (NUMBEROFCHARACTERS = 20, NUMBEROFENVIRONMENTS = 20
 * 4. main - set program colors,
 * 5. main - The Splash Screen - declare 4 variables, string (MESSAGE = set to "JACK UTTER PRESENTS", blank = (MESSAGE.length(), ' ') int (count = 0, delay = 250)
 * 6. main - The Splash Screen - establish the windows screen addressing- new HANDLE, 'screen', declare a new COORD call position
 * 7. main - The Splash Screen - set position.y to 14 and position.X to 35 and start a while loop to run while 'count' is <= to 1
 * 8. main - The Splash Screen - while - use the SetConsoleCursorPosition() function with (screen, position) as the arguments
 * 9. main - The Splash Screen - while - print to console 'MESSAGE' and flush the cout
 * 10. main - The Splash Screen - while - use the Sleep() function with 'delay' as the arguments (pauses the program to reflect on the splash screen)
 * 11. main - The Splash Screen - while - use the SetConsoleCursorPosition() with (screen, position) as the arguments
 * 12. main - The Splash Screen - while - print 'blank' (Will cover up the first MESSAGE print)
 * 13. main - The Splash Screen - while - call an if statement to run while a pre-incrimented 'position.X'  == 40
 * 14. main - The Splash Screen - while - if - assign position.X to 40, and incriment count.
 * 15. main - The Splash Screen - set position.X and position.Y to 0 and SetConsolePosition()
 * 16. main - print a fancy title
 * 17. main - create an array of Character called characters [NUMBEROFCHARACTERS}, and an array of Environment called environments [NUMBEROFENVIRONMENTS]
 * 18. main - declare 3 ints, (charactersCreated and environmentsCreated and playerIndex) set them to 0
 * 19. main - assign to environmentsFile to open 'environments.txt', and charactersFile to open 'environments.txt', validate they  opened sucessfully
 * 20. main - call a for loop to start at 16 and run while i is > than 0, decriment i
 * 21. main - for loop - declare a string called trash, getline from environmentsFile and assign to trash
 * 22. main - start a while loop to run loadEnvironments returns true - arguments (environments[environmentsCreated++])
 * 23. main - start a while loop to run while charactersCreates == 0
 * 24. main - while - prompt for a new char, load a char
 * 25. main - while - declare an int called loadOrSave and assign the next user input to it
 * 26. main - while - declare a int called trash
 * 27. main - while - start a switch for 'loadOrSave'
 * 28. main - while - switch - case 1 - assign to characters array as position 'characters created' the return of createCharacter(), incriment charactersCreated, and break
 * 29. main - while - switch - case 2 - start a while loop to run while loadCharacters(characters[CharactersCreated++]) returns true
 * 30. main - while - switch - case 2 - us a for loop to display characters[i].getName()
 * 31. main - while - switch - case 2 - assign the user input to playerIndex, and getline(cin, trash) to empty the cin buffer
 * 32. main - while - switch - case default - print a message about the options and continue
 * 33. main - declare an in called currentPlace and set to 0
 * 34. main - start a while loop
 * 35. main - while - declare a string called action and assing the it return of environments[currentPlace].situationAndAction()
 * 36. main - while - start a while loop
 * 37. main - while - while - use an if statement to run if (!actionProcessing(environments[currentPlace], characters[playerIndex], action, currentPlace))
 * 38. main - while - while - if - print to console "huh?" and break
 * 39. main - while - while - break
 * 40. below main write the prototypeFunctions
 * 41. actionProcessing() - return a bool - paramaeters (Environment place, Character player, string action, int &move)
 * 42. actionProcessing() - use an if statement to run if 'action' == "help"
 * 43. actionProcessing() - if - call the help() function, and return true
 * 44. actionProcessing() - use an if statement to run if 'action' == "look at me"
 * 45. actionProcessing() - if - call player.toString(), return true
 * 46. actionProcessing() - use an for loop starting at 0, running while i < 5, iincrimnet i
 * 47. actionProcessing() - for loop - use an if statement to run if 'action' == place.getObject(i)
 * 48. actionProcessing() - for loop - if - print to screen place.getObjectDescription(i), return true
 * 49. actionProcessing() - for loop - use an if statement to run i f'action == place.getExit(i)
 * 50. actionProcessing() - for loop - if - assign 'move' (place.getExitNum(i)), return true
 * 51. actionProcessing() - return false
 * 52. loadCharacters() - return bool - parameters (Character & characters)
 * 53. loadCharacters() - declare 3 strings (name, description, hobby), 1 int (age)
 * 54. loadCharacters() - getline from charactersFile and assign to name
 * 55. loadCharacters() - use an if statement to run if name == "end of list"
 * 56. loadCharacters() - if - return false
 * 57. loadCharacters() - getline from characterFile and assign to description
 * 58. loadCharacters() - assign from characterFile and assign to age
 * 59. loadCharacters() - getline from charadctersFile, assign to trash, and get another one and assign to hobby
 * 60. loadCharacters() - assign to characters the return of the Character constructor - arguments (name, description, age, hobby)
 * 61. loadCharacters() - return true
 * 62. loadEnvironments() - return bool - parameters (Environment &environments)
 * 63. loadEnvironments() - declare 3 strings (name, description, trash)
 * 64. loadEnvironments() - declare 3 strings arrays (string exits[NUMBEROFENVIRONMENTS], objects[NUMBEROFENVIRONMENTS], objectsDescriptions[NUMBEROFENVIRONMENTS]
 * 65. loadEnvironments() - declare an int array (	int exitsNum[NUMBEROFENVIRONMENTS]  )
 * 66. loadEnvironments() - getline from environmentsFile and assign to name
 * 67. loadEnvironments() - call an ifstatement to run if name == "end of list"
 * 68. loadEnvironments() - if - return false
 * 69. loadEnvironments() - getline from environmentsFile and assign to description
 * 70. loadEnvironments() - call a for loop to start at 0 and run while i < NUMBEROFENVIRONMENTS, incriment i
 * 71. loadEnvironments() - for loop - declare string 'exit' and int 'exitZNum'
 * 72. loadEnvironments() - for loop - assign input from environmentsFile to exit
 * 73. loadEnvironments() - for loop - call an if statement to run if exit == "end"
 * 74. loadEnvironments() - for loop - if - break
 * 75. loadEnvironments() - for loop - else - assign exits[i]  'exit'
 * 76. loadEnvironments() - for loop - else - assign from environmentsFile to exitNum
 * 77. loadEnvironments() - for loop - else - getline from environmentsFile and assign to trash
 * 78. loadEnvironments() - call a for loop to start at 0 and run while i < NUMBEROFENVIRONMENTS, incriment i
 * 79. loadEnvironments() - for loop - declare string 'object' and string 'objectDescription'
 * 80. loadEnvironments() - for loop - getline from environmentsFile to object
 * 81. loadEnvironments() - for loop - call an if statement to run if object == "end"
 * 82. loadEnvironments() - for loop - if - break
 * 83. loadEnvironments() - for loop - else - assign objects[i]  'object'
 * 84. loadEnvironments() - for loop - else - getline from environmentsFile to objectDescription
 * 85. loadEnvironments() - for loop - else - assignn objectsDescription[i]  objectDescription
 * 86. loadEnvironments() - assign to environments,, the return of constructor Environment with arguments (name, description, exits, exitsNum, objects, objectsDescriptions)
 * 87. loadEnvironments() - return true
 * 88. characterCreate() - return Character - no parameters
 * 89. characterCreate() - declare strings (name, description, hobby) int (age)
 * 90. characterCreate() - prompt user for each item and assign the input to the variable
 * 91. characterCreate() - return the return of the Character constructor with argumnets (name, description, age, hobby)
 * 92. help() - no return - no parameters
 * 93. help() - use a while loop
 * 94. help() - while - prompt the available help sections, take an input from the user to navigate the information,
 * 95. help() - if user enteres 'back' then return

*/


//~~~~inlcuded files~~~~
#include <iostream>
#include <iomanip>
#include "Character.h"
#include "Environment.h"
#include <windows.h>
#include <fstream>

using namespace std ;


/*~~~~~~~~ToDoList~~~~~~~~~~
the save character function
rethink the object interaction flow
        maybe multidimentional array, or an array of commands
upgrade the splash screen
Environment writer

~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

//~~~~declare prototype functions~~~~~
Character createCharacter() ;
bool loadEnvironments(Environment &) ;	//loads environments from txt file to an array
bool loadCharacters(Character &) ;		//loads characters from txt file to an array
bool actionProcessing(Environment, Character, string, int &) ;	//prompts situation, processes user action,
void help() ;	//prompts for what kind of help, and delivers

//Global variables, untill I figure out how to pass as part of a function
ifstream environmentsFile ;
ifstream charactersFile ;
ofstream updateCharFile ;	//not used yet, waiting for save char functionality
//~~~Global Constants~~~
const int NUMBEROFCHARACTERS = 20 ;		//just guessing for now.. maybe a vector would be more appropriate?
const int NUMBEROFENVIRONMENTS = 20 ;
const string CHARACTERS = "C:\\Users\\beave\\CLionProjects\\FinalProject\\characters.txt" ;
const string ENVIRONMENTS = "C:\\Users\\beave\\CLionProjects\\FinalProject\\environments.txt" ;

int main(int argc, char** argv)
{
    system("color f0") ;
    //on off switch for splash screen
    int splashOff = 1 ;
    //~~~~~~~~THE SPLASH SCREEN~~~~~~~~~~
    if (splashOff == 0)  //set to 1 to turn of splash, 0 to run it
    {

        const string MESSAGE = "~~~~Jack Utter Presents~~~" ;
        int count = 0 ;
        int delay = 250 ;

        string blank(MESSAGE.length(), ' ') ;
        // Establish Windows screen addressing
        HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE) ;
        COORD position ;

        position.Y = 14 ;	//initial screen position for the MESSAGE to be printed
        position.X = 35 ;

        while (count <= 1)
        {
            //~~Print the Messages to the screen at the coordinates~~~
            SetConsoleCursorPosition(screen, position) ;
            cout << MESSAGE << " " ;
            cout.flush() ;                             // Must flush cout's buffer

            //~~~The Moment to reflect on the words on the screen~~~
            Sleep(delay) ;

            //~~~Erase the words~~~
            SetConsoleCursorPosition(screen, position) ;
            cout << blank << endl ;                   // Optionally use endl to flush buffer

            //~~~update the coordinate variables~~~
            if (++position.X == 40)
            {
                position.X = 25 ;
                count++ ;	//count of how many trips the words make
            }

        }
        position.Y = 0 ;
        position.X = 0 ;
        SetConsoleCursorPosition(screen, position) ;

    }
    //~~~^~~^~~^THE SPLASH SCREEN~^~~^~~^~~~^~~


    cout << "~~~~~~~~The Final Project Program~~~~~~~~~~~\n           ~~~~~~~The Game~~~~~~" << endl << endl ;

    //~~~essential arrays ~~~~~
    Character characters[NUMBEROFCHARACTERS] ;	//will hold all character informations
    int charactersCreated = 0 ;	// incriments as players are creates, and loaded from save file

    Environment environments[NUMBEROFENVIRONMENTS] ;	//same for environments		 *****************************ARRAY Demonstrated HERE***********************
    int environmentsCreated = 0 ;

    int playerIndex = 0 ;	//current player array index
    {//~~~~Load the Neccesary Files~~~~~~ and validate	     ******************FileI/O Demonstrated HERE********************
        environmentsFile.open(ENVIRONMENTS) ;	//opening the file for saved environments
        if (!environmentsFile)	//tests file loaded
        {
            cout << "The environments file did not load properly. This game requires that." << endl ;
            exit(0) ;	//exit if this file doens't load. Game doesn't make sense otherwise right now
        }

        charactersFile.open(CHARACTERS) ;
        if (!charactersFile)
        {
            cout << "Error - The characters file didn't load correctly." << endl ;
            exit(0) ;
        }
    }
    {//~~~Populate games environments from text file~~~
        cout << "~~~~~~~~~~LoadingGame Data~~~~~~~~~" << endl ;

        //~~Skips the header Explanation lines of Environments File~~~
        for (int i = 16 ; i > 0 ; i--)
        {
            string trash ;
            getline(environmentsFile, trash) ;
        }

        while (loadEnvironments(environments[environmentsCreated++])) //assigns the referenced passed array element an environment object loaded from file
        {}
        if (splashOff == 0)
        {
            Sleep(5000) ;
        }
        cout << "~~~~~~~~~~Game Data loaded~~~~~~~~~" << endl << endl << endl ;

        {/*			tests if environments are loading correctly
			cout << "The Environments to Stringed" << endl ;
			for (int i = 0 ; i < environmentsCreated ; i++)
			{
				environments[i].toString() ;
				cout << endl ;
			}
		*/}

    }
    {//~~~Character Selection~~~~~~~
        while (charactersCreated == 0) //~~prompts for old or new char, creates char or loads char, assign to array and incriments num of chars varaible
        {
            cout << "1) New Character \n2) Load Saved Character \n3) GuestChar Because I'm the program writer! And I need to testing something real quick" << endl ;
            int loadOrSave ;
            cin >> loadOrSave ;
            string trash ;
            switch(loadOrSave)
            {
                //~~~New Character~~~
                case 1:
                    characters[charactersCreated] = createCharacter() ;
                    charactersCreated++ ;
                    break ;
                    //~~~Load Saved Character~~~~~
                case 2:
                    while(loadCharacters(characters[charactersCreated++]))	//populate character array with character objects from text file,
                    {}
                    cout << "What was your character name: " << endl ;
                    for (int i = 0 ; i < charactersCreated - 1 ; i++)				//prints all saved player names
                    {
                        cout << "--- " << i + 1 << ") " << characters[i].getName() << "---" << endl ;
                    }
                    cin >> playerIndex ;	//This is the current player
                    cout << "~~Welcome " << characters[--playerIndex].getName() << "~~" << endl ;
                    getline(cin, trash) ;
                    continue ;
                    //~~~~Default Admin Player~~~~
                case 3:
                    characters[charactersCreated] = Character() ;
                    playerIndex = charactersCreated ;
                    charactersCreated++ ;
                    getline(cin, trash) ;
                    break ;
                default:
                    cout << "You think this is a game? Get serious! Enter 1 or 2!" << endl << endl ;
            }
        }
        //		cout << "Character Loaded -" << characters[playerIndex].getName() ;
        //		cout << "Description - " << characters[playerIndex].getDescription() ;
    }

    {//~~~~The Game~~~~~
        //~~~~Prompt, take in action, process action, rinse repeat~~~~
        int currentPlace = 0 ;	//default entrance environment
        while(true)		//~~~working ~~~~~prints environment description, processes action input
        {
//				bool repeat = false ;
            string action = environments[currentPlace].situationAndAction() ;	//class function prompts environment descript and return user action string
            while(true)
            {
                if (!actionProcessing(environments[currentPlace], characters[playerIndex], action, currentPlace))		//don't move on, without a valid argument from user for environment action list
                {
                    cout << "huh?" << endl ;
                    break ;
                }
                break ;

            }

        }
    }
    return 0;
}


//~~~~~~~~The Prototype Functions~~~~~~~~~

bool actionProcessing(Environment place, Character player, string action, int &move)		//more work to do add functionality and actions
{								//Game Wide Commands
    if (action == "help")
    {
        help() ;
        return true ;
    }
    if (action == "look at me")
    {
        player.toString() ;
        return true ;
    }
    for (int i = 0 ; i < 5 ; i++)			//tests the user action against all environment objects and exits
    {
        if (action == place.getObject(i))
        {
            cout << place.getObjectDescription(i) << endl ;
            return true ;
        }
        if (action == place.getExit(i))
        {
            move = place.getExitNum(i) ;
            //			cout << "move is set to " << place.getExitNum(i) << endl ;
            return true ;

        }
    }
    return false ;
}

bool loadCharacters(Character &characters)	//~~working
{
    typedef int unnecessarilyLongAlias ;
    string name, description, hobby ;
    unnecessarilyLongAlias age ;
    getline(charactersFile, name) ;
    if (name == "end of list")
    {
        return false ;
    }
    //	cout << name << endl ;
    getline(charactersFile, description) ;
    //	cout << description << endl ;
    charactersFile >> age ;
    //	cout << age << endl ;
    string trash ;
    getline(charactersFile, trash) ;
    getline(charactersFile, hobby) ;
    //	cout << hobby << endl ;

    characters = Character(name, description, age, hobby) ;
    cout << "Character " << name << " Loaded" << endl ;
    //getline(cin, trash) ;

    return true ;
}


bool loadEnvironments(Environment &environments)	//~~Working
{
    string name, description, trash;
    string exits[NUMBEROFENVIRONMENTS], objects[NUMBEROFENVIRONMENTS], objectsDescriptions[NUMBEROFENVIRONMENTS] ;
    int exitsNum[NUMBEROFENVIRONMENTS] ;
    getline(environmentsFile, name) ;
    if (name == "end of list")
    {
        return false ;
    }
    //	cout << name << endl ;
    getline(environmentsFile, description) ;
    //	cout << "Description ---> " << description << endl ;
    for (int i = 0; i < NUMBEROFENVIRONMENTS ; i++)
    {
        string exit ;
        int exitNum ;

        environmentsFile >> exit ;
        if (exit == "end")
        {
            //			cout << "Exit Invoked" << endl ;
            break ;
        }
        else
        {
            exits[i] = exit ;
            //			cout << "exits ---> " << exit << endl ;
            environmentsFile >> exitNum ;
            exitsNum[i] = exitNum ;
            getline(environmentsFile, trash) ;
            //			cout << "ExitNumber ---> " << exitNum << endl ;
        }
    }
    getline(environmentsFile, trash) ;
    for (int i = 0; i < NUMBEROFENVIRONMENTS ; i++)
    {
        string object, objectDescription ;
        getline(environmentsFile, object) ;
        if (object == "end")
        {
            getline(environmentsFile, trash) ;
            break ;
        }
        getline(environmentsFile, objectDescription) ;
        objects[i] = object ;
        //		cout << "object -->" << object << endl ;
        objectsDescriptions[i] = objectDescription;
        //		cout << "object Descriptions ---> " << objectDescription << endl ;
    }

    environments = Environment(name, description, exits, exitsNum, objects, objectsDescriptions) ;
    cout << "Environement " << name << " Loaded" << endl ;

    return true ;
}

Character createCharacter() //~~~Working
{

    string name, description, hobby ;
    int age ;
    cout << "What is your character name: " ;
    cin >> name ;
    getline(cin, description) ;
    cout << "Give a quick description of your character: " << endl ;
    getline(cin, description) ;
    cout << "What is your characters age: " ;
    cin >> age ;
    getline(cin, hobby) ;
    cout << "Your number one hobby: " << endl ;
    getline(cin, hobby) ;

    return Character(name, description, age, hobby) ;
}

void help() 	//Help Menu //~~~ working ~~~ update as functionality increases
{
    string action ;
    cout << "What do you need help with?" << endl
         << "--('commands', ... that's it) ('back' to return to game): " << endl ;
    while (true)
    {
        cin >> action ;
        if (action == "commands")
        {
            cout << "- Just type in any 'obvious exits' to move" << endl ;
            cout << "- Some exits may not be so obvious..." << endl ;
            cout << "- You can 'look at' many objects for more information" << endl ;
            cout << "- More Functions and Commands coming soon." << endl ;
        }
        else if (action == "back")
        {
            string ignore ;
            getline(cin, ignore) ;
            return ;
        }
        else
        {
            cout << "huh?" << endl ;
        }
    }

    return ;
}

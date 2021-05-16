#include <iostream>
#include "Environment.h"
//constructors
Environment :: Environment(string nameUpdate, string descriptionUpdate, string exitsUpdate[], int exitsNumUpdate[], string objectsUpdate[], string objectsDescriptionsUpdate[])
{
    name = nameUpdate ;
    description = descriptionUpdate ;
    for (int i = 0 ; i < 5 ; i++)
    {
        exits[i] = exitsUpdate[i];
        exitsNum[i] = exitsNumUpdate[i] ;
        objects[i] = objectsUpdate[i] ;
        objectsDescriptions[i] = objectsDescriptionsUpdate[i] ;
    }
}

Environment :: Environment()
{
    string emptyArray[5] ;
    int numEmptyArray[5] ;
    name = "" ;
    description = "" ;
    for (int i = 0 ; i < 5 ; i++)
    {
        exits[i] = emptyArray[i] ;
        exitsNum[i] = numEmptyArray[i] ;
        objects[i] = emptyArray[i] ;
        objectsDescriptions[i] = emptyArray[i] ;
    }
}
//deconstructor
Environment :: ~Environment()
{
    //do nothing
}

//getters
string Environment :: getDescription()
{
    return description ;
}

string Environment :: getExit(int index)
{
    return exits[index] ;
}

int Environment :: getExitNum(int index)
{
    return exitsNum[index] ;
}

string Environment :: getObject(int index)
{
    return objects[index] ;
}

string Environment :: getObjectDescription(int index)
{
    return objectsDescriptions[index] ;
}

//prompts description, takes a string from user and returns it
string Environment :: situationAndAction()
{
    string action ;
    cout << endl << "~~~~~~~~Your Surroundings~~~~~~~~~~" << endl
         << description << endl
         << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Your action: " ;
    //either a help menu, or the action proccessor
    getline(cin, action) ;
    return action ;
}

//Sums up an environment/// mainly for the developer
void Environment :: toString()
{
    cout << "___________________________________" << endl ;
    cout << "Environment name: " << name << endl ;
    cout << "Description:      " << description << endl ;
    for (int i  = 0 ; i < 5 ; i++)
    {
        cout << "Exit :        " << exits[i] << endl ;
        cout << "ExitNum :       " << exitsNum[i] << endl ;
    }
    for (int i  = 0 ; i < 5 ; i++)
    {
        cout << "Object :        " << objects[i] << endl ;
        cout << "Object Description :       " << objectsDescriptions[i] << endl ;
    }
    cout << "------------------------------------" << endl << endl ;
}
#include "Character.h"

//constructors
Character :: Character(string nameUpdate, string descriptionUpdate, int ageUpdate, string hobbyUpdate)
{
    setName(nameUpdate) ;
    setDescription(descriptionUpdate) ;
    age = ageUpdate ;
    hobby = hobbyUpdate ;
}
Character :: Character()
{
    name = "" ;
    description = "" ;
    age = 0 ;
    hobby = "" ;
}
//deconstructor
Character :: ~Character()
{
//	cout << "Player " << name << "just bit the dust." << endl ;
}
//setters
void Character :: setName(string nameUpdate)
{
    name = nameUpdate ;
}
void Character :: setDescription(string descriptionUpdate)
{
    description = descriptionUpdate ;
}
//getters
string Character :: getName()
{
    return name ;
}
string Character :: getDescription()
{
    return description ;
}
//player described when action 'look at me' is envoked
void Character :: toString()
{
    cout << endl << "Looking at yourself you notice:" << endl
         << "Your name is " << name << endl
         << "If you were to describe what you see you would have to say" << endl
         << description << endl
         << "Your age is approximately... ... " << age << endl
         << "There are also subtle hints that you enjoy " << hobby << endl ;
}
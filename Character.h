#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
using namespace std ;

class Character
{
private:	//character attributes
    string name ;
    string description ;
    int age ;
    string hobby ;
public:
    //constructors
    Character(string nameUpdate, string descriptionUpdate, int ageUpdate, string hobbyUpdate) ;
    Character() ;
    //deconstructor
    ~Character() ;
    //setters
    void setName(string nameUpdate) ;
    void setDescription(string descriptionUpdate) ;
    //getters
    string getName() ;
    string getDescription() ;
    //describes a character
    void toString() ;


} ;

#endif 
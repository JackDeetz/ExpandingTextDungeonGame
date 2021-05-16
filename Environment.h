#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H
#include <iostream>
using namespace std ;

class Environment
{
private:
    //The Use, of the typedef  //
/*~~~~~~~~~~~~~~~~~*/		typedef string characteristics ; /*~~~~~~~~~~~~~~~~~*/
    characteristics name ;
    characteristics description ;
    characteristics exits[5] ;
    int exitsNum[5] ;
    characteristics objects[5] ;
    characteristics objectsDescriptions[5] ;
public:
    //constructors
    Environment(string nameUpdate, string descriptionUpdate, string exitsUpdate[], int exitsNumUpdate[], string objectsUpdate[], string objectsDescriptionsUpdate[]) ;
    Environment() ;
    ~Environment() ;
    //getters
    characteristics getDescription() ;
    characteristics getExit(int index) ;
    int getExitNum(int index) ;
    characteristics getObject(int index) ;
    characteristics getObjectDescription(int index) ;
    //summary of an environment
    void toString() ;
    //prompts the situation, takes a string from the user(action) returns it to the main
    string situationAndAction() ;

} ;

#endif
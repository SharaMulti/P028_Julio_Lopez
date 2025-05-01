/* Amerike university
      Author: Julio López
      Date: 30/04/25
      Practice #: 28
      Description: This program shall use constructors to show data, but this time using a pointer of a pointer*/
 
      #include <iostream>
      using namespace std;
 
      int main(){
 
         int Number = 4;
         string Thing = "Hello";
 
         int  *pNumber = &Number;
         string *pThing = &Thing;

         int **ppNumber = &pNumber;
         string **ppThing = &pThing;

         cout << *pNumber << "\n";
         cout << *pThing << "\n"; 

         cout << &Number << "\n";
         cout << &Thing << "\n";
 
         *pNumber = 5;
         *pThing = "Bye";
 
         cout << "\n";
 
         cout << *pNumber << "\n";
         cout << *pThing << "\n"; 

         cout << &pNumber << "\n"; 
         cout << &pThing << "\n";

         cout << "\n";

         **ppNumber = 7;
         **ppThing = "Hello again";

         cout << **ppNumber << "\n";
         cout << **ppThing << "\n";

         cout << &ppNumber << "\n";
         cout << &ppThing << "\n";
 
 
 
 
 
 
      }
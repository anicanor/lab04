//main.cpp
//Aaron Nicanor
//anicanor
#include <iostream>
#include "list.h"

using namespace std;

int main(){

        int input; 

        // instantiate a List class (the constructor takes NO arguments)
        List list;

        // NOTE:
        // List list();  is incorrect, when there are no arguments don't use ()

        // insert numbers into the list
        while(cin >> input)
        {
                
                list.insert_at_end(input);
                
        }

        list.print();
        cout << "sum = " << list.sum() << endl;

        return 0;
        
}

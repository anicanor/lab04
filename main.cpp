//main.cpp
//Aaron Nicanor
//anicanor
#include <iostream>
#include "list.h"

using namespace std;

int main(){

        //Delcares some variables
        int input; 
        List list;

        // Insert numbers into the list
        while(cin >> input)
        {
                
                list.insert_at_end(input);
                
        }

        list.print();
        cout << "sum = " << list.sum() << endl;

        return 0;
        
}

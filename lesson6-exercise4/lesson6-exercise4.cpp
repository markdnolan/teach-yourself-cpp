//
//  lesson6-exercise4.cpp
//  lesson6-exercise4
//
//  Created by domain_management on 8/24/23.
//
// is a colour in the rainbow?

#include <iostream>
#include<string>

using namespace std;

int main(){
    enum ColoursInRainbow{
        Red = 0,
        Orange,
        Yellow,
        Green,
        Blue,
        Indigo,
        Violet
    };
    
    cout << "Is a clour in the rainbow?" << endl;
    cout << "Enter a colour: ";
    
    string myColour;
    getline (cin, myColour);
    
    
    int colourNumber = 0;
    if (myColour == "Red")
        colourNumber = 0;
    else if (myColour == "Orange")
        colourNumber = 1;
    else if (myColour == "Yellow")
        colourNumber = 2;
    else if (myColour == "Green")
        colourNumber = 3;
    else if (myColour == "Blue")
        colourNumber = 4;
    else if (myColour == "Indigo")
        colourNumber = 5;
    else if (myColour == "Violet")
        colourNumber = 6;
    else
        colourNumber = 7;
    
    switch(colourNumber){
        case Red:
            cout << "Red is the first colour in the rainbow.";
            break;
        case Orange:
            cout << "Orange is the second colour in the rainbow.";
            break;
        case Yellow:
            cout << "Yellow is the third colour in the rainbow.";
            break;
        case Green:
            cout << "Green is the fourth colour in the rainbow.";
            break;
        case Blue:
            cout << "Blue is the fifth colour in the rainbow.";
            break;
        case Indigo:
            cout << "Indigo is the sixth colour in the rainbow.";
            break;
        case Violet:
            cout << "Violet is the seventh colour in the rainbow.";
            break;
        default:
            cout << "That's not a colour in the rainbow";
            break;
    }
    
    cout << endl;
    
    return 0;
}

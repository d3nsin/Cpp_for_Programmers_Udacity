/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string roomLength, roomWidth;
    
    float roomLengthValue = 0;
    float roomWidthValue = 0;
    float roomArea = 0;
    
    cout<<"Enter room length"<<"\n";
    getline(cin, roomLength);
    stringstream(roomLength) >> roomLengthValue;

    cout<<"Enter room width"<<"\n";
    getline(cin, roomWidth);
    stringstream(roomWidth) >> roomWidthValue;
    
    roomArea = roomLengthValue * roomWidthValue;
    cout<<"Room area is "<<roomArea<<"\n";
    return 0;
}
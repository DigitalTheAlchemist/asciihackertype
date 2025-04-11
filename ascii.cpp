#include <iostream>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono_literals;
using namespace std::this_thread;
using std::chrono::system_clock;


string toConsole = "";

int main(){
    while (true){
        //loop to center the text (change x < 3 to stretch or thin)
        for (int x = 0; x < 3; x++){

            //stores a random amount of whitespace (change 21 to change the max amount of whitespace)
            int randomNum = rand() % 21;
            for (int i = 0; i < randomNum; i++){
                toConsole += " ";
            }
            //stores either a 0 or a 1
            toConsole += to_string(rand() % 2);
        }
        //stores \n to create a new line
        toConsole += "\n";

        //print the string to the console
        cout << toConsole << endl;
        //this is to slow down the printing of the string
        sleep_for(100ms);
    }
    return 0;
}
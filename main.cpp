/*****************/
/* DecToBin v1.0 */
/*****************/

//Creator: XP710
//License: GPL3

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(int argn, char* argv[])
{
    //Define an exception for if there is the wrong number of arguments.
    struct wrongNumberOfArguments : exception {
        const char* what() const throw() {
            return "There has to be EXACTLY one argument. You know that. Now you look like an idiot.";
        }
    };

    //Initialize the number we're converting to binary
    int number;
    try {
        //Throw the wrongNumberOfArguments exception if the number of arguments is wrong
        if (argn != 2) throw wrongNumberOfArguments();

        //If not, define the number we're converting
        number = stoi((string)argv[1]);

    }catch (wrongNumberOfArguments &e){
        cout << e.what() << endl;
        exit(0);
    }catch (std::invalid_argument &e){
        cout << "The argument must be a number, idiot. Let's see you convert a string to binary!" << endl;
        exit(0);
    }catch (std::out_of_range &e){
        cout << "Input too large ;)" << endl;
        exit(0);
    }

    //Find the highest number we need to test the argument against.
    int exponent = (log10(number)/log10(2)); //Automatically rounds down.

    string ans;

    while (exponent >= 0){
        if (number >= pow(2, exponent)){
            ans+= '1';
            number-= pow(2, exponent);
        }else{
            ans+= '0';
        }
        exponent--;
    }
    cout << ans << endl;
}

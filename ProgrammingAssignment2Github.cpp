// ProgrammingAssignment2Github.cpp by Tom Bonino, ITCS 2530, SU 2021
//

#include <iostream>
#include <iomanip>

using namespace std;

//declare some constant variables
const double weight = 2.76;
const double cost = 4.12;
const double profit = 1.45;

int main()
{
    //declare variable to store user input
    int user_entry = 0;

    //variable to store the amount of containers needed.
    double cheese_container = 0.0;

    //initialize header of program - found out the hard way I need to add the quotation marks after the setfills
    cout << left << setw(75) << setfill('*') << "" << endl;
    cout << left << setw(21) << setfill('*') << "" << " Now Entering the Cheese Stream " << setw(22) << setfill('*') << "" << endl;
    cout << left << setw(75) << setfill('*') << "" << endl;

    cout << fixed; //decimals are now fixed for the duration of the program

    cout << "Please enter the total number of kilograms of cheese produced: ";
    //cin >> user_entry; // leftover from troubleshooting program before getting if structure working

    //if structure does some exception handling for user entry. Hopefully I can use something more than just your example once we learn more.
    if (cin >> user_entry) {

        //nested if structure validates that the number entered by the user isn't negative.
        if (user_entry >= 0) {

            //hold the result of the amount of containers needed in a variable, in order to only have to do this calculation once. use the ceiling operator to round up the value needed (we cannot use only portions of containers)
            cheese_container = ceil(user_entry / weight);

            //if entry is correct, begin outputting results. setprecision operators force a decimal length for each line.
            cout << "The number of containers to hold the cheese is: " << right << setw(27) << setfill(' ') << setprecision(0) << cheese_container << endl;
            cout << "The cost of producing " << cheese_container << " container(s) of cheese is: $" << right << setw(21) << setfill(' ') << setprecision(2) << cheese_container * cost << endl;
            cout << "The profit from producing " << cheese_container << " container(s) of cheese is: $" << right << setw(14) << setfill(' ') << setprecision(2) << cheese_container * profit << endl;

            //pause to let you observe the results then end program
            system("pause");
        }

        // if entry is less than zero, ask the user to try again.
        else {
            cout << "Negative values are invalid. Please try again.";
        }
    }
    
    else {
        //if entry is incorrect, prompt user to try again
        cout << "Invalid entry. Please try again.";
    }

    //end program
    return 0;
}

//


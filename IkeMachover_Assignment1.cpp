/*
Authorship: Ike Machover
Date: 5/25/2023
Assignment 1: Writing 2 functions/programs and a menu. Coin machine that dispenses the least amount of coins of a dollar amount or it also takes coins and outputs a dollar amount.
*/
#include <iostream>
#include <cstdlib> //exit(1) error
#include <cctype>
#include <cmath>

const int QUARTER = 25, DIME = 10, NICKEL = 5, PENNY = 1; //constants for program

using namespace std;

//function declarations
void dollar_to_coins();
void coins_to_dollar();
void menu_selection();

int main() //main function
{
  
    menu_selection(); //menuselection 
    return 0;
}

void dollar_to_coins() //function definition
{ 
    //initialize variables
    double money;
    int cents;
    int remainder;
    int amount_of_quarters, amount_of_dimes, amount_of_nickels, amount_of_pennies;

    cout << "****************" << endl;
    cout << "*Coin Dispenser*" << endl; //art
    cout << "****************" << endl;
    cout << endl;
    cout << "Enter a dollar amount less than $100 " << endl; //asking user for input
    cin >> money; //assign money variable
    if (money < 0 ) //amount needs to not be negative
    {
        cout << "Negative value.";
            exit(1); //exit program if negative number
    }
    else if (money >= 100) //amount needs to be less than 100
    {
        cout << "Value is not less than $100";
            exit(1); //exit program if negative number
    }

    cents = round(money * 100); //turn dollar amt into cents $x.xx * 100 (cents)

    cout << cents << " cents" << endl;

    amount_of_quarters = cents / QUARTER; //quarter amonut = cents / 25 -> # of quarters

    cents = cents % QUARTER; //updates cents = cents % 25 -> remainder cents of change


    amount_of_dimes = cents / DIME; //gets dimes amount = cents left  / 10 -> # of dimes
    cents = cents % DIME; //updates cents = remainder after dimes = cents % 10 -> cents left

    amount_of_nickels = cents / NICKEL; //gets nickels amount = cents left/ 5 -> # of nickel
    cents = cents % NICKEL; //updates cents = remainder after nickels = cennts % 5 -> cents left

    amount_of_pennies = cents / PENNY; //gets pennies amount = cents left / 1 -> # of pennies
 
    cout.setf(ios::fixed); //formatting
    cout.setf(ios::showpoint); //formatting
    cout.precision(2); //formatting

    cout << endl;
    cout << "Value: $" << money << endl; //printing results / outputs / answers
    cout << "Quarter: " << amount_of_quarters << endl;
    cout << "Dime: " << amount_of_dimes << endl;
    cout << "Nickel: " << amount_of_nickels << endl;
    cout << "Penny: " << amount_of_pennies << endl;
    cout << "********************" << endl;
    cout << "**Dispensing Coins**" << endl; //art
    cout << "********************" << endl;
    cout << endl;
    cout << endl;

    menu_selection(); //main menu
}
void coins_to_dollar() //function2
{ 
    // declare variables
    int amount_of_quarters, amount_of_dimes, amount_of_nickels, amount_of_pennies;
    double cents;

    cout << "*************" << endl;
    cout << "*Coin Refund*" << endl;
    cout << "*************" << endl;
    cout << "\n";
    cout << "Enter number of coins (Quarters, Dimes, Nickels or Pennies) seperated by space or enter. Press 'enter' to submit." << endl; //ask for user input
    cin >> amount_of_quarters >> amount_of_dimes >> amount_of_nickels >> amount_of_pennies; //get coin amounts and assign them to variables
    if (amount_of_quarters < 0 || amount_of_dimes < 0 || amount_of_nickels < 0 || amount_of_pennies < 0)
    {
        cout << "INVALID AMOUNT (negative).";
            exit(1);
    }
    cents = (amount_of_quarters * QUARTER) + (amount_of_dimes * DIME) + (amount_of_nickels * NICKEL) + (amount_of_pennies * PENNY); //multiplied amounts by constants
    cout.setf(ios::fixed);//formatting 
    cout.setf(ios::showpoint); //formatting
    cout.precision(2); //formatting
    cout << endl;
    cout << ".Processing." << endl;
    cout << "............             /)_/)" << endl; //some fun art and entertainment for your viewing pleasure
    cout << "...........             ( . .)" << endl;
    cout << "..........            (*)(')(')  " << endl;
    cout << ".........            (\\_/)" << endl;
    cout << "........            ( . .)" << endl;
    cout << ".......            (*)(')(') " << endl;
    cout << "......            (\\_/) " << endl;
    cout << ".....            ( . .) " << endl;
    cout << "....            (*)(')(')" << endl;
    cout << "...           /)_/) " << endl;
    cout << "..           ( . .)" << endl;
    cout << ".          (*)(')(')" << endl;
    cout << "amount of quarters .. " << amount_of_quarters << endl; //saying how many coins are there
    cout << "amount of dimes ..... " << amount_of_dimes << endl;
    cout << "amound of nickels ... " << amount_of_nickels << endl;
    cout << "amount of pennies ... " << amount_of_pennies << endl;
    cout << "\nThese coins are worth $" << cents / 100 << "." << endl; //result
    cout << endl;
    cout << endl;
    cout << "******************" << endl;
    cout << "**Refunded to CC**" << endl;
    cout << "******************" << endl;
    cout << endl;

    menu_selection(); //main menu
}

void menu_selection()
{
    char menu, dollar_to_coin, coin_to_dollar;

    cout << "************************************************************************************************" << endl;
    cout << "Enter 1 for coin dispenser\nEnter 2 to deposit coins to credit card\nEnter any other key to quit" << endl;
    cin >> menu;
    cout << "************************************************************************************************" << endl;
    switch (menu)
    {
    case '1':
        cout << endl;
        dollar_to_coins();
            break;
    case '2':
        cout << endl;
        coins_to_dollar();
        break;
    default:
        exit(1);

    }
}

/* Name: Kent R. Grefiel
   Date of Submission: December 16, 2024
   Project Name: "Pizza Hut Ordering System"	 
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

    int input;                                                 // Variable for menu selection
    char character, choice, receipt, diningOption;             // Variables for user input
    int order, quantity;                                       // Variables for order number and quantity of items
    float payment, balance;                                    // Variables for payment and change calculation
    time_t now = time(0);                                      // Get current time (displays in print receipt)
    char * dt = ctime( & now);                                 // Convert current time to string (displays in print receipt)

    // Prices for different pizza sets
    const float set1 = 399.00; // Set A price
    const float set2 = 378.00; // Set B price
    const float set3 = 362.00; // Set C price
    const float set4 = 340.00; // Set D price
    const float set5 = 391.00; // Set E price
    const float set6 = 369.00; // Set F price

    int loyaltyPoints = 0; // Variable to store loyalty points

    system("cls"); // Clear the console screen
    // Display welcome message and options
    cout << "\n\n\n\t\t\t ---------\033[1;31m PIZZA HUT ORDERING SYSTEM \033[0m---------" << endl;
    cout << "\t\t\t|                                             |" << endl;
    cout << "\t\t\t|  Press \033[1;34mY\033[0m to continue and press \033[1;31mN\033[0m to exit    |" << endl;
    cout << "\t\t\t|    Visit our website on \033[1;35mPizzahut.com.ph\033[0m     |" << endl;
    cout << "\t\t\t|                                             |" << endl;
    cout << "\t\t\t ---------------------------------------------" << endl;

    input: // Label for user input prompt
    cout << "\n\t\t\tEnter Input [y/n] : ";
    cin >> character; // Read user input
    cout << "\a"; // Alert sound

    // Switch case to handle user input
    switch (character) {
    case 'Y':
    case 'y':
        goto menu; // Go to menu if user wants to continue
        break;
    case 'N':
    case 'n':
        system("PAUSE"); // Pause before exit
        cout << "\n\t\t\tBrought To You By \033[1;35mPizzahut.com.ph\033[0m\n"; // Exit message
        exit(EXIT_SUCCESS); // Exit the program
        break;
    default:
        cout << "\a"; // Alert for wrong input
        cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
        goto input; // Repeat input prompt
        break;
    }

    menu: // Label for menu display
    system("cls"); // Clear console screen
    // Display menu options
    cout << "\n\t\t\t -----------------------------------------------------------" << endl;
    cout << "\t\t\t|                      \033[31mPizza Hut - Menu\033[0m                     |" << endl;
    cout << "\t\t\t -----------------------------------------------------------" << endl;
    cout << "\n\t\t\t -----------Set A-----------\t -----------Set B-----------" << endl;
    cout << "\t\t\t| Pizza : Spice Pepperoni   |\t| Pizza : Triple cheesy     |" << endl;
    cout << "\t\t\t|         Lovers            |\t|         Burger            |" << endl;
    cout << "\t\t\t| Drink : Pepsi 1.5L        |\t| Drink : Sprite 1.5L       |" << endl;
    cout << "\t\t\t| Price : P399.00           |\t| Price : P378.00           |" << endl;
    cout << "\t\t\t ---------------------------\t ---------------------------" << endl;

    cout << "\n\t\t\t -----------Set C-----------\t -----------Set D-----------" << endl;
    cout << "\t\t\t| Pizza : Holiday Hamonado  |\t| Pizza : Hawaiian Supreme  |" << endl;
    cout << "\t\t\t| Drink : 7-UP 1.5L         |\t| Drink : Pepsi Zero Sugar  |" << endl;
    cout << "\t\t\t| Price : P362.00           |\t|         Lime 1.5L         |" << endl;
    cout << "\t\t\t|                           |\t| Price : P340.00           |" << endl;
    cout << "\t\t\t ---------------------------\t ---------------------------" << endl;

    cout << "\n\t\t\t -----------Set E-----------\t -----------Set F-----------" << endl;
    cout << "\t\t\t| Pizza : Seafood Supreme   |\t| Pizza : Meat Lovers       |" << endl;
    cout << "\t\t\t| Drink : MT DEW 1.5L       |\t| Drink : Lipton Iced Tea   |" << endl;
    cout << "\t\t\t| Price : P391.00           |\t|         Lemon 1.5L        |" << endl;
    cout << "\t\t\t|                           |\t| Price : P369.00           |" << endl;
    cout << "\t\t\t ---------------------------\t ---------------------------" << endl;

    choose: // Label for choosing a set
    cout << "\n\t\t\tChoose Set : ";
    cin >> choice; // Read user choice

    // Prompt for dining option: Dine In or Take Out
    diningOptionInput:
    cout << "\n\t\t\tDo you want to Dine In or Take Out? (D/T): ";
    cin >> diningOption; // Read dining option

    // Validate the dining option input
    if (diningOption == 'D' || diningOption == 'd') {
        cout << "\n\t\t\tYou chose to Dine In." << endl; // Confirmation message
    } else if (diningOption == 'T' || diningOption == 't') {
        cout << "\n\t\t\tYou chose Take Out." << endl; // Confirmation message
    } else {
        cout << "\a"; // Alert for wrong input
        cout << "\033[31m\n\t\t\tYou entered wrong input! Please enter D for Dine In or T for Take Out.\033[0m" << endl; // Error message
        goto diningOptionInput; // Go back to ask for dining option again
    }

    // Switch case to handle the selection of different sets
    switch (choice) {
    case 'A':
    case 'a':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : A" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Spice Pepperoni   |" << endl;
        cout << "\t\t\t|         Lovers            |" << endl;
        cout << "\t\t\t| Drink : Pepsi             |" << endl;
        cout << "\t\t\t| Price : P399.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\t\t\tQuantity  : " << quantity << endl; // Display quantity
        cout << "\n\t\t\tYour total cost is : P" << (set1 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set1 * quantity)) { // Check if payment is sufficient
                balance = payment - (set1 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change
                
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set1 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points!" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set1 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        x:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        cout << "\a"; // Alert sound
        if (receipt == 'Y' || receipt == 'y') {
            system("cls"); // Clear screen for receipt
            // Print receipt details
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax:(972) 338-6869 " << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  ANGELO" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set A " << "   	   " << quantity << " 	   " << set1 << "     " << set1 * quantity << "	  " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set1 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto x; // Repeat receipt prompt
        }
        break;

    case 'B':
    case 'b':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : B" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Triple cheesy     |" << endl;
        cout << "\t\t\t|         Burger            |" << endl;
        cout << "\t\t\t| Drink : Sprite 1.5L       |" << endl;
        cout << "\t\t\t| Price : P378.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\t\t\tQuantity  : " << quantity << endl; // Display quantity
        cout << "\n\t\t\tYour total cost is : P" << (set2 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set2 * quantity)) { // Check if payment is sufficient
                balance = payment - (set2 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change
                
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set2 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points!" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set2 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        y:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        cout << "\a"; // Alert sound
        if (receipt == 'Y' || receipt == 'y') {
            system("cls"); // Clear screen for receipt
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax:(972) 338-6869" << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  ROBIMAR" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty      Price      Amount    |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set B " << "   	    " << quantity << " 	   " << set2 << "      " << set2 * quantity << "	   " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set2 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto y; // Repeat receipt prompt
        }
        break;

    case 'C':
    case 'c':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : C" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Holiday Hamonado   |" << endl;
        cout << "\t\t\t| Drink : Sprite            |" << endl;
        cout << "\t\t\t| Price : P362.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\t\t\tQuantity  : " << quantity << endl; // Display quantity
        cout << "\n\t\t\tYour total cost is : P" << (set3 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set3 * quantity)) { // Check if payment is sufficient
                balance = payment - (set3 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change
                
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set3 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points !" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set3 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        z:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        if (receipt == 'Y' || receipt == 'y') {
            cout << "\a"; // Alert sound
            system("cls"); // Clear screen for receipt
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax: (972) 338-6869  " << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  RAYMART" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set C " << "   	    " << quantity << " 	   " << set3 << "      " << set3 * quantity << "	   " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set3 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto z; // Repeat receipt prompt
        }
        break;

    case 'D':
    case 'd':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : D" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Hawaiian Supreme  |" << endl;
        cout << "\t\t\t| Drink : Pepsi Zero Sugar  |" << endl;
        cout << "\t\t\t|         Lime 1.5          |" << endl;
        cout << "\t\t\t| Price : P340.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\n\t\t\tYour total cost is : P" << (set4 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set4 * quantity)) { // Check if payment is sufficient
                balance = payment - (set4 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change
                
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set4 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points!" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set4 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        s:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        cout << "\a"; // Alert sound
        if (receipt == 'Y' || receipt == 'y') {
            system("cls"); // Clear screen for receipt
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax:(972) 338-6869 " << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  ELMER" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set D " << "   	    " << quantity << " 	   " << set4 << "      " << set4 * quantity << "	   " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set4 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto s; // Repeat receipt prompt
        }
        break;

    case 'E':
    case 'e':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : E" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Seafood Supreme   |" << endl;
        cout << "\t\t\t| Drink : MT DEW 1.5L       |" << endl;
        cout << "\t\t\t| Price : P391.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\t\t\tQuantity  : " << quantity << endl; // Display quantity
        cout << "\n\t\t\tYour total cost is : P" << (set5 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set5 * quantity)) { // Check if payment is sufficient
                balance = payment - (set5 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change ```cpp
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set5 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points!" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set5 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        u:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        cout << "\a"; // Alert sound
        if (receipt == 'Y' || receipt == 'y') {
            system("cls"); // Clear screen for receipt
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax:(972) 338-6869 " << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  MARQUEZ" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set E " << "   	   " << quantity << " 	   " << set5 << "     " << set5 * quantity << "	  " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set5 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto u; // Repeat receipt prompt
        }
        break;

    case 'F':
    case 'f':
        cout << "\n\t\t\tQuantity   : ";
        cin >> quantity; // Read quantity
        cout << "\a"; // Alert sound
        system("cls"); // Clear screen
        cout << "\n\t\t\tYou pick Set : F" << endl; // Confirmation message
        cout << "\n\t\t\t ---------------------------" << endl;
        cout << "\t\t\t| Pizza : Meat Lovers       |" << endl;
        cout << "\t\t\t| Drink : Lipton Iced Tea   |" << endl;
        cout << "\t\t\t|         Lemon 1.5         |" << endl;
        cout << "\t\t\t| Price : P369.00           |" << endl;
        cout << "\t\t\t ---------------------------" << endl;
        cout << fixed << showpoint << setprecision(2); // Set decimal precision
        cout << "\t\t\tQuantity  : " << quantity << endl; // Display quantity
        cout << "\n\t\t\tYour total cost is : P" << (set6 * quantity) << endl; // Calculate and display total cost

        // Payment process
        do {
            cout << "\n\t\t\tPlease make your payment : P"; // Prompt for payment
            cin >> payment; // Read payment amount

            if (payment >= (set6 * quantity)) { // Check if payment is sufficient
                balance = payment - (set6 * quantity); // Calculate change
                cout << fixed << showpoint << setprecision(2);
                cout << "\n\t\t\tYour change is : P" << balance; // Display change
                
                // Loyalty points calculation
                int pointsEarned = static_cast<int>((set6 * quantity) / 10); // 1 point for every 10 pesos
                loyaltyPoints += pointsEarned; // Update total points
                cout << "\n\t\t\tYou earned " << pointsEarned << " loyalty points!" << endl;
                cout << "\t\t\tTotal Loyalty Points: " << loyaltyPoints << endl; // Display total points
            } else {
                cout << "\a"; // Alert for insufficient payment
                cout << "\n\t\t\t\033[31mPayment not enough\033[0m"; // Error message
            }
        } while (payment < (set6 * quantity)); // Repeat until sufficient payment is made

        // Receipt printing option
        t:
        cout << "\n\n\t\t\tDo you want to print receipt? Y/N? ";
        cin >> receipt; // Read receipt option
        cout << "\a"; // Alert sound
        if (receipt == 'Y' || receipt == 'y') {
            system("cls"); // Clear screen for receipt
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t|                \033[31mPizza Hut - Menu\033[0m                |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << endl;
            cout << "                          " << dt << endl; // Print date and time
            cout << "\t\t\t  Tel  : (02) 8911-1111   Fax:(972) 338-6869 " << endl;
            cout << "\t\t\t  Till : R3451            Order : M35042627" << endl;
            cout << endl;
            cout << "\t\t\t  Cashier :  ANGELO" << endl; // Cashier's name
            cout << "\t\t\t  Shift   :  SHIFT-1" << endl; // Shift information
            cout << endl;
            cout << "\n\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t| Description      Qty     Price      Amount     |" << endl;
            cout << "\t\t\t ------------------------------------------------" << endl;
            cout << "\t\t\t  Set F " << "   	   " << quantity << " 	   " << set6 << "     " << set6 * quantity << "	  " << endl; // Receipt details
            cout << "                                                " << endl;
            cout << "\t\t\t  Total " << "                              " << set6 * quantity << endl; // Total amount
            cout << "\t\t\t  Cash " << "                               " << payment << endl; // Payment information
            cout << "\t\t\t  Balance " << "                            " << balance << endl; // Balance
            cout << "\t\t\t ------------------------------------------------" << endl;
        } else if (receipt == 'N' || receipt == 'n') {
            goto inmenu; // Go back to menu
        } else {
            cout << "\a"; // Alert for wrong input
            cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
            goto t; // Repeat receipt prompt
        }
        break;

    default:
        cout << "\a"; // Alert for invalid set
        cout << "\n\t\t\t\033[31mSet not Available, please try again\033[0m" << endl; // Error message
        goto choose; // Repeat set selection
        break;
    }

    // Menu for ordering again or exiting
    inmenu:
    system("PAUSE"); // Pause before displaying menu
    cout << "\n\n\t\t\tMenu : " << endl; // Menu header
    cout << endl;
    cout << "\t\t\t1. Order again" << endl; // Option to order again
    cout << "\t\t\t2. Exit" << endl; // Option to exit

    cout << "\n\t\t\tEnter choice :"; // Prompt for next action
    cin >> input; // Read user choice

    // Switch case to handle next action
    switch (input) {
    case 1:
        goto menu; // Go back to menu
        break;
    case 2:
        cout << "\n\t\t\t ----------------------------------" << endl;
        cout << "\t\t\t|   \033[1;35mThank you please come again\033[0m    |" << endl; // Thank you message
        cout << "\t\t\t ----------------------------------" << endl;
        system("PAUSE"); // Pause before exit
        exit(EXIT_SUCCESS); // Exit the program
        break;
    default:
        cout << "\a"; // Alert for wrong input
        cout << "\033[31m\n\t\t\tYou enter wrong input!!!\033[0m" << endl; // Error message
        goto inmenu; // Repeat menu selection
        break;
    }

}

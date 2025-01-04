# Overview of my Project
This project implements a simple console-based ordering system for a pizza restaurant. It allows users to select from a menu of pizza sets, specify whether they want to dine in or take out, enter the quantity, make a payment, and optionally print a receipt.

## Table of Contents
- [Overview of my Project](#overview-of-my-project)
- [Key Components](#key-components)
- [Potential Issues](#potential-issues)
- [Conclusion](#conclusion)
- [For an update on my project](#for-an-update-on-my-project)
- [For Final Term for Defense](#for-final-term-for-defense)
- [License](#license)

## Key Components

1. **Menu Display**: The program displays a menu with different pizza sets and their prices. Each set has a specific price associated with it.

2. **User Input Handling**: The program uses a series of switch statements and goto statements to navigate through different parts of the program based on user input. 

**This includes**:
- Choosing to continue or exit the program.
- Selecting a pizza set.
- Choosing between dine-in or take-out options.
- Entering the quantity of pizzas.
- Making a payment and checking if it is sufficient.

3. **Payment Processing**: The program checks if the payment made by the user is sufficient to cover the total cost of the order. If not, it prompts the user to enter the payment again.

4. **Receipt Printing**: After the payment is processed, the user is given the option to print a receipt. If the user chooses to print the receipt, the program displays the order details, including the quantity, price, total amount, cash paid, and balance.

5. **Looping for New Orders**: After completing an order, the program prompts the user to either order again or exit.

## Potential Issues

1. **Use of goto Statements**: The code heavily relies on goto statements for flow control, which can make the code harder to read and maintain. It is generally recommended to use structured programming constructs like loops and functions instead.

2. **Input Validation**: While there is some input validation (e.g., checking for valid menu choices), it could be improved. For example, the program does not handle non-numeric input for quantities and payments, which could lead to runtime errors.

3. **Hardcoded Values**: The cashier names, order numbers, and other details are hardcoded. This could be improved by using variables or functions to generate these values dynamically.

4. **Repeated Code**: There is a lot of repeated code for handling each pizza set. This could be refactored into functions to reduce redundancy and improve maintainability.

5. **Magic Numbers**: The prices for the pizza sets are hardcoded as constants, which is fine, but it would be better to use an array or a data structure to manage them, especially if the menu changes frequently.

6. **User Experience**: The user experience could be enhanced by providing clearer instructions and feedback. For example, after a successful order, the program could summarize the order before asking if the user wants to print a receipt.

## What's New Features:
Adding a loyalty points system. This feature can reward customers with points for every order they make, which they can later redeem for discounts or free items. 

**Here is a feature below**: 

1. **Define a Points System**: Decide how many points a customer earns per order. For example, you could give 1 point for every 10 pesos spent.

2. **Store Points**: Create a variable to store the total points for the customer. You can initialize it at the start of the program.

3. **Update Points After Each Order**: After the payment is processed, calculate the points earned based on the total cost of the order and add them to the customer's total points.

4. **Display Points**: After each order, display the total loyalty points the customer has accumulated.

5. **Redemption Option**: Optionally, you can add a feature that allows customers to redeem their points for discounts on future orders.

## Conclusion

This project is functional and implements the desired features for a pizza ordering system. However, it could benefit from improvements in structure, readability, and user input handling. These notes should be understand the logic behind the code and identify areas for potential enhancement.

## For an update on my project

For this purpose, I recommend updating my project and the README.md file, as well as adding features based on my ideas. If you have any further questions, please feel free to contact me on my Telegram account at [Kent Grefiel](https://t.me/kenjutzue) so that you can ask to recommended of adding features of my project.

## For Final Term for Defense

This project was used for the final term in defense presentation, demonstrating how users can interact with a simple console-based ordering system for a pizza restaurant. It allows users to select from a menu of pizza sets, specify whether they want to dine in or take out, enter the quantity, make a payment, and optionally print a receipt. My project was approved by Ma'am [Loren Rose Abad](https://www.facebook.com/lorenroseabad) who provided us with the requirements. Although this code was not 100% AI-generated, it may not sufficiently assist someone in creating a project code without putting in enough effort, which could lead to a lack of critical thinking and problem-solving skills, as students may not learn to tackle challenges independently (also known as being spoon-fed). If you want to learn C++ and master it, you can try watching the [freeCodeCamp.Org](https://www.youtube.com/@freecodecamp) Youtube channel for their C++ course to enhance your skills.

## License 
This project is licensed under the [MIT License](LICENSE.md). Feel free to use, modify, and distribute this project for educational or commercial purposes.

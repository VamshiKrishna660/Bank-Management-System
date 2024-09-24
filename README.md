# BankManagement System

A C++ console application to manage user balances and perform transactions between users. The program reads user data, processes transactions, and sorts users based on their final balances.

## Features

- **User Data Input:** Accepts initial user ID and balance data for multiple users.
- **Transaction Processing:** Facilitates user transactions, updating their balances accordingly.
- **Sorting:** Sorts users based on their balance in ascending order and displays the results.

## How It Works

1. **Input User Data:**
   - The program first takes the number of users as input.
   - For each user, it takes the user ID and initial balance.

2. **Process Transactions:**
   - The program then accepts the number of transactions to process.
   - For each transaction, it reads the source user ID, destination user ID, and the amount to be transferred.
   - If the transaction is successful (i.e., the source user has enough balance), it adjusts the balances accordingly and prints "Success". If the transaction fails, it prints "Failure".

3. **Sorting and Output:**
   - After processing all transactions, the program sorts the users by their final balances in ascending order.
   - It then prints the sorted list of users with their IDs and final balances.

## Example Workflow


### Explanation:

- **Initial Balances:**
  - User 1: 500
  - User 2: 1000
  - User 3: 750
- **Transactions:**
  - User 1 transfers 200 to User 2: Success
  - User 3 transfers 300 to User 1: Success
- **Final Sorted Balances:**
  - User 3: 450
  - User 1: 600
  - User 2: 1200

## Project Structure

- **`main.cpp`:** Contains the main logic for reading input, processing transactions, and outputting the results.

## Compilation and Execution

1. **Clone the Repository:**

   ```bash
   git clone https://github.com/your-username/user-balance-management.git
   cd user-balance-management

   
**Dependencies**

C++11 or later: Make sure your compiler supports C++11 or a later version.


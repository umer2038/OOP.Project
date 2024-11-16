/*        MUHAMMAD UMER SIDDIUI
 *         22I-2038
 *         MAAZ ALI KHAN
 *         22I-1937
 *         DS-C
 *
 */

#pragma once

// Necessary Libraries
#include <iostream>

#include <Windows.h>

#include <limits>

#include <fstream>

#include <vector>

using namespace std;

// Forward Declaration of class
class FileManager;

// Base Class
class User {
protected: string userId;
         string User_Name;
         string Passwordd;
         FileManager* File_Manager;

public: 
    // Constructor
      User(string userID, string userName, string password, FileManager* fm);

      // Getter Functions for user attributes
      string Get_UserName() const;
      string Get_UserId() const;
      string Get_UserPassword() const;
        
      // Virtual functions for derived classes
      virtual void RegisterUser() = 0;
      virtual void login() = 0;
      virtual void logout() = 0;
};

class FileManager {
private: string File_Name;

public: 

      // Constructor
      FileManager(string fileName);

      // Getter function
      string getFileName() const;
      void saveUserToFile(User* user);

      // Nested Classes
      class MenuItem;
      class Order;
      class Rating;
      class Payment;
};


// Class of MenuItem
class MenuItem {
private: string ItemID;
       string ItemName;
       string ItemDescription;
       double Price;
       int QuantityRemaining;

public: MenuItem(string itemID, string itemName, string itemDescription,
    double price, int quantityInStock);
      void updateStock(int newQuantity);
};


// Class of Order
class Order {
private: string OrderID;
       string CustomerID;
       double Total_Price;
       string Order_Status;

public: 
    // Function to calculate total price
      double calculateTotal();

      // Function to confirm and cancel Orders
      void confirmOrder();
      void cancelOrder();
};


// Class of Rating
class Rating {
private: string RatingID;
       string MenuItemID;
       string CustomerID;
       int Score;
       string Comments;

public: void rate();
};

// Class of Payment
class Payment {
private: string PaymentID;
       string orderID;
       double amount;
       string paymentStatus;

public: void processPayment();
};

// Derived of Customer from User
class Customer : public User {
public: Customer(string userID, string userName, string password, FileManager* fm);
      void ViewMenu();
      void Place_Order();
      void OrderHistory();
      void RateItem();

      // Use of the 'override' keyword in C++:
      // The 'override' keyword is used to explicitly indicate that a virtual function in a derived class
      // is intended to override a virtual function declared in a base class. This helps improve code clarity
      // and ensures that the function in the derived class actually overrides a function in the base class.

      void logout() override;
      void registerUser();
      void login() override;
};

// Derived Class of CafeStaff from User
class CafeStaff : public User {
public: CafeStaff(string userID, string userName, string password, FileManager* fm);
      void viewMenu();
      void processOrder();
      void addMenuItem();
      void removeMenuItem();
      void logout() override;
      void registerUser();
      void login() override;
};

// Derived Class of admin from User
class Administrator : public User {

    // Constructor
public: Administrator(string userID, string userName, string password, FileManager* fm);

      // Functions

      void ViewTheMenu();
      void AddItemMenu();
      void RemoveItemMenu();
      void AddNotification();
      void RemoveNotification();
      void DisplayFromFile();
      void ViewUsers_FromFile();
      void ViewMenuItems_FromFile();
      void ViewOrders_FromFile();
      void ViewRatings_FromFile();
      void ViewPayments_FromFile();
      void CalculateTheMonthlyEarning();
      void logout() override; // Over-Ride Functions
      void RegisterUser() override; // Over-Ride Functions
      void login() override; // Over-Ride Functions
};
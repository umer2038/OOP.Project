/*        MUHAMMAD UMER SIDDIUI
 *         22I-2038
 *         MAAZ ALI KHAN
 *         22I-1937
 *         DS-C
 *
 */

#include "CafeSystem.h"

 // Implementation of the User class methods :-

// Constructor
User::User(string userID, string userName, string password, FileManager* fm) : userId(userID), User_Name(userName), Passwordd(password), File_Manager(fm) {}

//Getter for Password
string User::Get_UserPassword() const {
    return Passwordd;
}

//Getter for User-Name
string User::Get_UserName() const {
    return User_Name;
}

//Getter for UserId
string User::Get_UserId() const {
    return userId;
}


// File Manager Constructor
FileManager::FileManager(string fileName) : File_Name(fileName) {}

//Getter for FileName
string FileManager::getFileName() const {
    return File_Name;
}

void FileManager::saveUserToFile(User* user) {
    ofstream file(getFileName(), ios::app);
    if (file.is_open()) {
        file << user->Get_UserId() << " " << user->Get_UserName() << " " << user->Get_UserPassword() << "\n";
        file.close();
    }
    else {
        cerr << "Unable to open file: " << getFileName() << endl;
    }
}


// Menu Item Constructor
MenuItem::MenuItem(string itemID, string itemName, string itemDescription,
    double price, int quantityInStock) : ItemID(itemID), ItemName(itemName), ItemDescription(itemDescription),
    Price(price), QuantityRemaining(quantityInStock) {}

// Updating Stock Fuction
void MenuItem::updateStock(int newQuantity) {
    cout << "Stock is Updated!!" << endl;
}

double Order::calculateTotal() {
    cout << "Your Total is : Rupees" << endl;
    return 0.0;
}

void Order::confirmOrder() {
    cout << "Your order is Confirmed!!" << endl;
}

void Order::cancelOrder() {
    cout << "Your order is cancelled!!" << endl;
}


// Service rating Function
void Rating::rate() {
    cout << "Enter rating (1-5): ";
    cin >> Score;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
    cout << "Enter comments: ";

    cout << "Rating submitted." << std::endl;
}

void Payment::processPayment() {
    cout << "Processing Payment..." << endl;
}


// Customer constructor
Customer::Customer(string userID, string userName, string password, FileManager* fm) : User(userID, userName, password, fm) {}

void Customer::logout() {
    cout << "Customer logging out." << endl;
}


void Customer::login() {
    string enteredPassword;
    cout << "Enter password: ";
    cin >> enteredPassword;

    cout << "Login successful.\n";
}
void Customer::RateItem() {
    cout << "Rating item." << endl;

}

void Customer::registerUser() {
    string newUserType;
    cout << "Enter user type (Customer, CafeStaff, Administrator): ";
    cin >> newUserType;

    cout << "Registration successful for " << newUserType << ".\n";
}
void Customer::ViewMenu() {
    cout << "Viewing menu." << endl;
}

void Customer::Place_Order() {
    cout << "Placing order..." << endl;

}

void Customer::OrderHistory() {
    cout << "Viewing order history." << endl;

}

CafeStaff::CafeStaff(string userID, string userName, string password, FileManager* fm) : User(userID, userName, password, fm) {}

void CafeStaff::removeMenuItem() {
    cout << "Removing a menu item." << endl;

}

void CafeStaff::logout() {
    cout << "CafeStaff logging out." << endl;
}

void CafeStaff::registerUser() {
    cout << "CafeStaff registration." << endl;
}
void CafeStaff::viewMenu() {
    cout << "Viewing menu." << endl;

}

void CafeStaff::processOrder() {
    cout << "Processing order." << endl;

}

void CafeStaff::login() {
    cout << "CafeStaff logging in." << endl;
}

void CafeStaff::addMenuItem() {
    cout << "Adding a menu item." << endl;

}

Administrator::Administrator(string userID, string userName, string password, FileManager* fm) : User(userID, userName, password, fm) {}

void Administrator::AddNotification() {
    cout << "Adding a notification." << endl;

}

void Administrator::DisplayFromFile() {
    cout << "Displaying data from file." << endl;

}

void Administrator::ViewTheMenu() {
    cout << "Viewing menu." << endl;

}

void Administrator::AddItemMenu() {
    cout << "Adding a menu item." << endl;

}

void Administrator::RemoveItemMenu() {
    cout << "Removing a menu item." << endl;

}

void Administrator::ViewUsers_FromFile() {
    cout << "Viewing users from file." << endl;

}

void Administrator::ViewMenuItems_FromFile() {
    cout << "Viewing menu items from file." << endl;

}

void Administrator::RemoveNotification() {
    cout << "Removing a notification." << endl;

}
void Administrator::logout() {
    cout << "Administrator logging out." << endl;
}

void Administrator::RegisterUser() {
    cout << "Administrator registration." << endl;
}

void Administrator::login() {
    cout << "Administrator logging in." << endl;
}

void Administrator::ViewOrders_FromFile() {
    cout << "Viewing orders from file." << endl;

}

void Administrator::ViewRatings_FromFile() {
    cout << "Viewing ratings from file." << endl;

}

void Administrator::ViewPayments_FromFile() {
    cout << "Viewing payments from file." << endl;

}

void Administrator::CalculateTheMonthlyEarning() {
    double earnings = 80.0;
    cout << "Calculating monthly earnings: $" << earnings << endl;

}
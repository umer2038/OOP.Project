/*        MUHAMMAD UMER SIDDIUI
 *         22I-2038
 *         MAAZ ALI KHAN
 *         22I-1937
 *         DS-C
 *
 */

#include "CafeSystem.h"

#include <iostream>

using namespace std;

int main() {

    // File Handling
    FileManager fileManager("C:\\Users\\umeru\\OneDrive\\Desktop\\Project3\\fast.txt");

    // Colour Change For Back-Ground and Text
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1 << 4 | 0);

    // Objects
    Customer customer("C1", "Umer Siddiqui", "1234567", &fileManager);
    CafeStaff cafeStaff("S1", "Maaz Ali Khan", "1234567", &fileManager);
    Administrator admin("A1", "Babar Azam", "100", &fileManager);



    customer.registerUser();
    fileManager.saveUserToFile(&customer);

    // User Interface
    while (true) {
        cout << "****************************************************\n";
        cout << "*                                                  *\n";
        cout << "*          Welcome to the Restaurant System!       *\n";
        cout << "*                                                  *\n";
        cout << "****************************************************\n";
        cout << "This system empowers customers, cafe staff, and administrators.\n";
        cout << "Explore the menu, place orders, and enjoy a seamless experience.\n";
        cout << "Let's create delightful moments together!\n\n";
        cout << "\nSelect User Type:\n";
        cout << "1. Customer\n";
        cout << "2. Cafe Staff\n";
        cout << "3. Administrator\n";
        cout << "4. Exit\n";
        cout << "Choice: ";

        int UserChoice;
        cin >> UserChoice;

        switch (UserChoice) {
            // 1st case for customer
        case 1:
            customer.login();
            cout << "\nCustomer Menu:\n";
            cout << "1. View Menu\n";
            cout << "2. Place Order\n";
            cout << "3. View Order History\n";
            cout << "4. Rate Item\n";
            cout << "5. Logout\n";
            cout << "Choice: ";

            int CustomerChoice;
            cin >> CustomerChoice;

            switch (CustomerChoice) {
            case 1:
                do {
                    cout << "\nCustomer Menu:\n";
                    cout << "1. View Menu\n";
                    cout << "2. Place Order\n";
                    cout << "3. View Order History\n";
                    cout << "4. Rate Item\n";
                    cout << "5. Logout\n";
                    cout << "Choice: ";

                    int customerChoice;
                    cin >> customerChoice;

                    switch (customerChoice) {
                    case 1:
                        customer.ViewMenu();
                        break;
                    case 2:
                        customer.Place_Order();
                        break;
                    case 3:
                        customer.OrderHistory();
                        break;
                    case 4:
                        customer.RateItem();
                        break;
                    case 5:
                        customer.logout();
                        break;
                    default:
                        cout << "Invalid choice.\n";
                    }

                    cout << "Do you want to perform another action? (1: Yes, 0: No): ";
                    cin >> customerChoice;
                } while (CustomerChoice == 1);
                break;
                
            case 2:
                customer.Place_Order();
                break;
            case 3:
                customer.OrderHistory();
                break;
            case 4:
                customer.RateItem();
                break;
            case 5:
                customer.logout();
                break;
            default:
                cout << "Invalid choice.\n";
            }
            break;

            // Case 2 for Cafe Staff
        case 2:
            cafeStaff.login();
            cout << "\nCafe Staff Menu:\n";
            cout << "1. View Menu\n";
            cout << "2. Process Order\n";
            cout << "3. Add Menu Item\n";
            cout << "4. Remove Menu Item\n";
            cout << "5. Logout\n";
            cout << "Choice: ";

            int StaffChoice;
            cin >> StaffChoice;

            switch (StaffChoice) {
            case 1:
                cafeStaff.viewMenu();
                break;
            case 2:
                cafeStaff.processOrder();
                break;
            case 3:
                cafeStaff.addMenuItem();
                break;
            case 4:
                cafeStaff.removeMenuItem();
                break;
            case 5:
                cafeStaff.logout();
                break;
            default:
                cout << "Invalid choice.\n";
            }
            break;
            
            // Case 3 for Administartor
        case 3:
            admin.login();
            while (true) {
                cout << "\nAdministrator Menu:\n";
                cout << "1. View Menu\n";
                cout << "2. Add Menu Item\n";
                cout << "3. Remove Menu Item\n";
                cout << "4. Manage Inventory\n";
                cout << "5. Manage Discount/Promotion\n";
                cout << "6. View Order History\n";
                cout << "7. Add Notification\n";
                cout << "8. Remove Notification\n";
                cout << "9. Rate Menu Item\n";
                cout << "10. Display from File\n";
                cout << "11. View Users from File\n";
                cout << "12. View Menu Items from File\n";
                cout << "13. View Orders from File\n";
                cout << "14. View Ratings from File\n";
                cout << "15. View Payments from File\n";
                cout << "16. Calculate Monthly Earnings\n";
                cout << "17. Logout\n";
                cout << "Choice: ";

                int adminChoice;
                cin >> adminChoice;

                switch (adminChoice) {
                case 1:
                    admin.ViewTheMenu();
                    break;
                case 2:
                    admin.AddItemMenu();
                    break;
                case 3:
                    admin.RemoveItemMenu();
                    break;
                case 4:
                    std::cout << "Managing inventory" << endl;
                    break;
                case 5:
                    std::cout << "Managing Discounts!" << endl;
                    break;
                case 6:
                    std::cout << "Viewing Order History" << endl;
                    break;
                case 7:
                    admin.AddNotification();
                    break;
                case 8:
                    admin.RemoveNotification();
                    break;
                case 9:
                    cout << "Rated" << endl;
                    break;
                case 10:
                    admin.DisplayFromFile();
                    break;
                case 11:
                    admin.ViewUsers_FromFile();
                    break;
                case 12:
                    admin.ViewMenuItems_FromFile();
                    break;
                case 13:
                    admin.ViewOrders_FromFile();
                    break;
                case 14:
                    admin.ViewRatings_FromFile();
                    break;
                case 15:
                    admin.ViewPayments_FromFile();
                    break;
                case 16:
                    admin.CalculateTheMonthlyEarning();
                    break;
                case 17:
                    admin.logout();
                    return 0;
                default:
                    cout << "Invalid choice.\n";
                }
            }
            break;

            // Case 4 break loop
        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
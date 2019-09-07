// Name:Andrew Solis
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  int days;
  std::string location;
  double hotel_expense, meal_expense, total;
  //Asking the right questions
  std::cout << "What is the business trip location? ";
  std::cin >> location;

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel expense? ";
  std::cin >> hotel_expense;

  std::cout << "What is the total meal expense? ";
  std::cin >> meal_expense;

  //Adding Hotel and Meal expenses for the Total
  total = hotel_expense + meal_expense;

  //Header Row
  std::cout << std::setw(15) << "Location" << std::setw(15) << "Days" << std::setw(15) << "Hotel" << std::setw(15) << "Meal" << std::setw(15) << "Total" << std::endl;
  std::cout << std::setw(13) << location << std:: setw(17) << days << std::setw(15) << hotel_expense << std::setw(15) << meal_expense << std::setw(15) << total << std::endl;
  return 0;
}

#include <iostream>
#include <string>

typedef float metres;

enum daysOfTheWeek {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

void print_height(metres height);
void iterate_days_of_the_week(daysOfTheWeek days);
void sum_two_numbers(int num1, int num2 = 100);
void add_two_strings(std::string string1, std::string string2);

int main(void) {

    std::string string1 = "Hello ";
    std::string string2 = "World";
    add_two_strings(string1, string2);

    return 0;
}

void print_height(metres height) {
    std::cout << "Height is: " << height << '\n';
}

void iterate_days_of_the_week(daysOfTheWeek day) {
    std::cout << "The day of the week is number: " << day << '\n';
}

void sum_two_numbers(int num1, int num2/*Default value = 100*/) {
    std::cout << "The sum is: " << num1 + num2 << '\n';
}

void add_two_strings(std::string string1, std::string string2) {
    std::cout << "Addition of two strings is: " << string1 + string2 << '\n';
    std::cout << "Length of combined string is: " << (string1 + string2).length() << '\n';
}
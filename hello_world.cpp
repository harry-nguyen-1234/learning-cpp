#include <iostream>

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

int main(void) {

    int num1 = 10;
    int num2 = 10;
    sum_two_numbers(10);
    sum_two_numbers(10, 10);

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
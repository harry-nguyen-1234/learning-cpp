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

int main(void) {
    std::cout << "Hello world!\n";

    metres height = 100.75;
    print_height(height);

    daysOfTheWeek day = tuesday;
    iterate_days_of_the_week(day);

    return 0;
}

void print_height(metres height) {
    std::cout << "Height is: " << height << "\n";
}

void iterate_days_of_the_week(daysOfTheWeek day) {
    std::cout << "The day of the week is number: " << day << "\n";
}
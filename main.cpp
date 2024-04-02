#include "FinalExam.h"
#include "I_O.h"

int main()
{
    // instantiation of I_O class using default constructor
    I_O collection;
    // instantiation of FinalExam class using constructor with two arguments
    FinalExam test(collection.get_questions(), collection.get_missed());
    // invoking the I_O object's get_report method and passing the FinalExam object
    collection.get_report(test);
    return 0;
}
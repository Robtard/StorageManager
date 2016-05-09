#include "Cell.h"


bool Cell::isAvailable() const {
    return available;
}

void Cell::setAvailable(bool available) {
    Cell::available = available;
}

long Cell::getNumber() const {
    return numberOfCell;
}

void Cell::setNumber(long number) {
    Cell::numberOfCell = number;
}
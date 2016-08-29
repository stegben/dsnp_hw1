#include "p2Table.h"

using namespace std;

// Implement member functions of class Row and Table here
Row::Row(int *data) {
    _data = data;
}

const int
Row::operator[] (size_t i) const {
    return _data[i];
}

int&
Row::operator[] (size_t i) {
    return _data[i];
}

bool
Table::read(const string& csvFile)
{
    return true; // TODO
}

const Row&
Table::operator[] (size_t i) const {
    return &_rows[i];
}

Row&
Table::operator[] (size_t i) {
    return &_rows[i];
}

#ifndef P2_TABLE_H
#define P2_TABLE_H

#include <vector>
#include <string>

using namespace std;

class Row
{
public:
   Row(int *data);
   const int operator[] (size_t i) const;
   int& operator[] (size_t i);

private:
   int  *_data;
};

class Table
{
public:
   const Row& operator[] (size_t i) const;
   Row& operator[] (size_t i);

   bool read(const string&);

private:
   vector<Row>  _rows;
};

#endif // P2_TABLE_H

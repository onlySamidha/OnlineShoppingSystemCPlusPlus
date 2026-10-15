#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>
using namespace std;

// Category class stores a product category ID and name.
class Category {
public:
    int categoryId;
    string categoryName;

    Category() : categoryId(0) {}
};
#endif

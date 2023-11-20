#include <iostream>
using namespace std;
class Overcoat {
public:
    string type; 
    double price;    
    Overcoat(std::string t, double p) : type(t), price(p) {}
    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }
    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }
    bool operator>(const Overcoat& other) const {
        return price > other.price;
    }
};
class Flat {
public:
    double area;  
    double price; 
    Flat(double a, double p) : area(a), price(p) {}
    bool operator==(const Flat& other) const {
        return area == other.area;
    }
    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }
    bool operator>(const Flat& other) const {
        return price > other.price;
    }
};
int main() {
    Overcoat coat1("пуховик", 150.0);
    Overcoat coat2("пальто", 120.0);
    if (coat1 == coat2) {
        cout << "Типи пальт однакові." << endl;
    }
    else {
        cout << "Типи пальт різні." << endl;
    }
    coat1 = coat2; 
    if (coat1 > coat2) {
        cout << "Перше пальто дорожче за друге." << endl;
    }
    else {
        cout << "Перше пальто не дорожче за друге." << endl;
    }
    Flat flat1(80.0, 200000.0);
    Flat flat2(90.0, 180000.0);
    if (flat1 == flat2) {
        cout << "Площі квартир однакові." << endl;
    }
    else {
        cout << "Площі квартир різні." << endl;
    }
    flat1 = flat2; 
    if (flat1 > flat2) {
        cout << "Перша квартира дорожча за другу." << endl;
    }
    else {
        cout << "Перша квартира не дорожча за другу." << endl;
    }
    return 0;
}
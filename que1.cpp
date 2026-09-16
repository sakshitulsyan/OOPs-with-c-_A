//Q1. E-Commerce Product Comparison System
//Create a Product class with productId, name, and price as data members.
// Use a parameterized constructor to initialize the object. Write a function comparePrice() that takes another Product object as 
//a const reference parameter and returns the Product object with the higher price. Display the details of the returned object.
#include <iostream>
using namespace std;
class product{
    public:
    int productId;
    string name;
    double price;

product(int id,string n,double p ){
productId = id;
name = n;
price = p;
}
product comparePrice(const product &p) const
    {
        if (price > p.price)
            return *this;
        else
            return p;
    }
    void display()
    {
        cout << "Product ID : " << productId << endl;
        cout << "Product Name : " << name << endl;
        cout << "Price : " << price << endl;
    }
};
int main()
{
    product p1(101, "Laptop", 55000);
    product p2(102, "Mobile", 30000);

    product expensive = p1.comparePrice(p2);

    cout << "Product with Higher Price:" << endl;
    expensive.display();

    return 0;
}
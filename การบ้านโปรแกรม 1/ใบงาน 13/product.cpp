#include <iostream>
#include <list>
#include <string>
using namespace std;

class Product
{
private:
	string productId;
	string productName;
	double productPrice;

public:
	Product(string id, string name, double price)
	{
		productId = id;
		productName = name;
		productPrice = price;
	}

	void display() const
	{
		cout << "Product ID: " << productId << endl;
		cout << "Product Name: " << productName << endl;
		cout << "Product Price: " << productPrice << endl;
		cout << "--------------------" << endl;
	}
};

int main()
{
	list<Product> products;

	products.emplace_back("P001", "Keyboard", 850.00);
	products.emplace_back("P002", "Mouse", 450.00);
	products.emplace_back("P003", "Monitor", 4990.00);

	for (const Product &product : products)
	{
		product.display();
	}

	return 0;
}

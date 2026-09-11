
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Product {
private:
	int productId;
	string productName;
	double productPrice;

public:
	Product() : productId(0), productName(""), productPrice(0.0) {}

	Product(int id, const string& name, double price)
		: productId(id), productName(name), productPrice(price) {}

	~Product() {
		if (!productName.empty()) {
			cout << "Product destroyed: " << productName << endl;
		}
	}

	int getProductId() const {
		return productId;
	}

	void display() const {
		cout << "ID: " << productId
			 << ", Name: " << productName
			 << ", Price: " << productPrice << endl;
	}
};

int main() {
	list<Product> products;
	int choice;

	do {
		cout << "\n========== Product Management ==========" << endl;
		cout << "1. Add product" << endl;
		cout << "2. Display all products" << endl;
		cout << "3. Search product" << endl;
		cout << "4. Delete product" << endl;
		cout << "0. Exit" << endl;
		cout << "Select menu: ";
		cin >> choice;

		switch (choice) {
		case 1: {
			int id;
			string name;
			double price;

			cout << "Enter product ID: ";
			cin >> id;
			cin.ignore();
			cout << "Enter product name: ";
			getline(cin, name);
			cout << "Enter product price: ";
			cin >> price;

			products.emplace_back(id, name, price);
			cout << "Product added successfully." << endl;
			break;
		}
		case 2:
			if (products.empty()) {
				cout << "No products found." << endl;
			} else {
				for (const Product& product : products) {
					product.display();
				}
			}
			break;
		case 3: {
			int id;
			bool found = false;

			cout << "Enter product ID to search: ";
			cin >> id;
			for (const Product& product : products) {
				if (product.getProductId() == id) {
					product.display();
					found = true;
					break;
				}
			}
			if (!found) {
				cout << "Product not found." << endl;
			}
			break;
		}
		case 4: {
			int id;
			bool found = false;

			cout << "Enter product ID to delete: ";
			cin >> id;
			for (auto iterator = products.begin(); iterator != products.end(); ++iterator) {
				if (iterator->getProductId() == id) {
					products.erase(iterator);
					cout << "Product deleted successfully." << endl;
					found = true;
					break;
				}
			}
			if (!found) {
				cout << "Product not found." << endl;
			}
			break;
		}
		case 0:
			cout << "Exiting program..." << endl;
			break;
		default:
			cout << "Invalid menu choice." << endl;
		}
	} while (choice != 0);

	return 0;
}

#include <iostream>
using namespace std;

class Fruit {
protected:
    int totalFruits;
public:
    Fruit() : totalFruits(0) {}
    void addFruits(int num) {
        totalFruits += num;
    }
    int getTotalFruits() const {
        return totalFruits;
    }
    void displayTotal() const {
        cout << "Total fruits in the basket: " << totalFruits << endl;
    }
};
class Apples : public Fruit {
private:
    int numApples;
public:
    Apples() : numApples(0) {}
    void setApples(int num) {
        numApples = num;
        addFruits(numApples);
    }
    int getApples() const {
        return numApples;
    }
    void displayApples() const {
        cout << "Number of Apples: " << numApples << endl;
    }
};
class Mangoes : public Fruit {
private:
    int numMangoes;
public:
    Mangoes() : numMangoes(0) {}
    void setMangoes(int num) {
        numMangoes = num;
        addFruits(numMangoes);
    }
    int getMangoes() const {
        return numMangoes;
    }
    void displayMangoes() const {
        cout << "Number of Mangoes: " << numMangoes << endl;
    }
};
int main() {
    Apples appleBasket;
    Mangoes mangoBasket;
    appleBasket.setApples(5);
    mangoBasket.setMangoes(7);
    appleBasket.displayApples();
    mangoBasket.displayMangoes();
    appleBasket.displayTotal();
    return 0;
}

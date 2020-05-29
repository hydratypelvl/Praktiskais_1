#include <iostream>
#include <string>

using namespace std;

class Auto {
  private:
    float avgFuel = 2.4;
    string brand = "BMW";
    string model = "X5";

  public:
    int year = 2010;
    int hp = 335;
    int horsePower = 69;
    //FUEL
    // Setter
    void setFuel(float f) {
      avgFuel = f;
    }
    // Getter
    float getFuel() {
      return avgFuel;
    }
    //BRAND
    // Setter
    void setBrand(string b) {
      brand = b;
    }
    // Getter
    string getBrand() {
      return brand;
    }
    //MODEL
    // Setter
    void setModel(string m) {
      model = m;
    }
    // Getter
    string getModel() {
      return model;
    }
    // YEAR
    // Setter
    void setYear(int y) {
      year = y;
    }
    // Getter
    int getYear() {
      return year;
    }
    // HORSE POWER
    // Setter
    void setHP(int h) {
      hp = h;
    }
    // Getter
    int getHP() {
      return hp;
    }
    // PUBLISKAS KLASES METODES
    int returnYear(int year){
      return year;
    }
    int returnHP(int hp){
      return hp;
    }
    void printAutoData();
};

void Auto::printAutoData() {
  cout << "\n\nFuel: " << getFuel();
  cout << "\nBrand: " << getBrand();
  cout << "\nModel: " << getModel();
  cout << "\nYear: " << getYear();
  cout << "\nHorse Power: " << getHP();
}

int main() {
  Auto myObj;
  myObj.setFuel(6.9);
  myObj.setBrand("Toyota");
  myObj.setModel("Supra");
  cout << "Fuel: " << myObj.getFuel();
  cout << "\nBrand: " << myObj.getBrand();
  cout << "\nModel: " << myObj.getModel();
  cout << "\nYear: " << myObj.getYear();
  cout << "\nHorse Power: " << myObj.getHP();

  cout << "\n\nHP : " << myObj.returnHP(950);
  cout << "\nYear : " << myObj.returnHP(2020);

  myObj.printAutoData();

  return 0;
}
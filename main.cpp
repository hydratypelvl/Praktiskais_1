#include <iostream>
#include <string>

using namespace std;

class Auto {
  private:
    float avgFuel;
    string brand, model;
  public:
    float attalums, celaBenzins; // prieks getCelaBenzins
    int year,hp;
    //Constructor
    Auto() {
      this->year = 2020;
      this->avgFuel = 12;
      this->hp = 686;
      this->brand = "BMW";
      this->model = "M3";
    }
    Auto(float avgFuel ) {
      this->avgFuel = avgFuel;
    }
    
    //Setters
    void setYear(int y) {
      year = y;
    }
    void setHP(int h) {
      hp = h;
    }
    void setFuel(float f) {
      avgFuel = f;
    }
    void setBrand(string b) {
      brand = b;
    }
    void setModel(string m) {
      model = m;
    }
    //Getters
    int getYear() {
      return year;
    }
    int getHP() {
      return hp;
    }
    float getFuel() {
      return avgFuel;
    }
    string getBrand() {
      return brand;
    }
    string getModel() {
      return model;
    }

    // PUBLISKAS KLASES METODES
    int returnYear(int year){
      return year;
    }
    int returnHP(int hp){
      return hp;
    }
    void printAutoData();
    void getCelaBenzins(float attalums);
    //Destructor
    ~Auto() {
        printAutoData();
        cout 
        << "  Auto ticis norakstits! \n" 
        << "--------------------------\n";
    }
};

//Arejas Metodes
void Auto::printAutoData() {
  cout 
  << "\n--------------------------" 
  << "\nYear: " << getYear()
  << "\nHorse Power: " << getHP()
  << "\nFuel: " << getFuel()
  << "\nBrand: " << getBrand()
  << "\nModel: " << getModel()
  << "\n--------------------------\n";
  
}
void Auto::getCelaBenzins(float attalums) {
  celaBenzins = ( getFuel() / 100 ) * attalums;
  cout << "Bus nepieciesami " << celaBenzins << " Litri.";
}
Auto mansAuto; //globlais
int main() {

  Auto *skolasAuto = new Auto();

  mansAuto.setYear(2001);
  mansAuto.setHP(311);
  mansAuto.setFuel(9.7);
  mansAuto.setBrand("Nissan");
  mansAuto.setModel("350z");
  mansAuto.printAutoData();

  skolasAuto->setFuel(10.9);
  skolasAuto->setYear(1997);
  skolasAuto->setBrand("Toyota");
  skolasAuto->setModel("Supra");
  skolasAuto->printAutoData();

  delete skolasAuto;

  Auto *darbaAuto = new Auto(7.7);
  darbaAuto->printAutoData();

  return 0;
}
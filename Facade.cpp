#include <iostream>

using namespace std;


class Engine
{

public:
    void injectFuel() 
    {
        cout<<"Fuel Injecting "<<endl; 
        
    }
    
    void igniteFuel()
    {
        cout<<"Fuel igniteFueling"<<endl; 
    }

};
class Headlights
{

public:
    void TurnOn() 
    { 
        cout<<"Turned on Headlights"<<endl; 
        
    }

};

class ChangeGearOfCar
{
  public:
  void ChangeGear()
  {
      cout<<"Gear Changed"<<endl;
  }
};
class accelerate
{
  public:
  void PressAccelerate()
  {
      cout<<"Accelerating "<<endl;
  }
};

class Car
{

private:
    Engine eng;
    Headlights hdligt;
    ChangeGearOfCar gear;
    accelerate acc;

public:
    void startCar()
    {
        eng.injectFuel();
        eng.igniteFuel();
        hdligt.TurnOn();
        
    }
    void moveCar()
    {
        gear.ChangeGear();
        acc.PressAccelerate();
    }

};

int main()
{
    
    Car takeMeDestination;
    takeMeDestination.startCar();
    takeMeDestination.moveCar();
    
   cout << "Reached at Destination " << endl; 
   
   return 0;
}

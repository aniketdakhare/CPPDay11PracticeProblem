#include <iostream>

using namespace std;

class Vehicle
{
    string vehicleName;

    private:
        int vehiclePrice;
    
    protected:
        string vehicleCompany;
    
    public:
        int getVehiclePrice()
        {
            return vehiclePrice;
        }

        void setVehiclePrice(int price)
        {
            vehiclePrice = price;
        }

        string getVehicleName()
        {
            return vehicleName;
        }

        void setVehicleName(string name)
        {
            vehicleName = name;
        }

    friend void displayVehicle(Vehicle vehicle);
};

class Showroom : public Vehicle
{
    public:
        void setVehicleCompany(string companyName)
        {
            vehicleCompany = companyName;
        }

        string getVehicleCompany()
        {
            return vehicleCompany;
        }
};

void displayVehicle(Vehicle vehicle)
{
    cout << "\nFriend display vehicle name: " << vehicle.vehicleName << endl;
    cout << "Friend display vehicle price: " << vehicle.vehiclePrice << endl;
    vehicle.vehicleCompany = "TATA";
    cout << "Friend display vehicle Company: " << vehicle.vehicleCompany << endl;
}

int main()
{
    Vehicle* vehicle = new Vehicle;
    vehicle->setVehicleName("Nexon");
    vehicle->setVehiclePrice(800000);
    cout << "Main method vehicle name: " << vehicle->getVehicleName() << endl;
    cout << "Main method vehicle price: " << vehicle->getVehiclePrice() << endl;

    Showroom* showroom = new Showroom;
    showroom->setVehicleName("Swift");
    showroom->setVehiclePrice(500000);
    showroom->setVehicleCompany("BMW");
    cout << "\nShowroom vehicle name: " << showroom->getVehicleName() << endl;
    cout << "Showroom vehicle price: " << showroom->getVehiclePrice() << endl;
    cout << "Showroom vehicle Company: " << showroom->getVehicleCompany() << endl;   

    displayVehicle(*vehicle);
}
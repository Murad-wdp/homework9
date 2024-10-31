#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
	string name;
public:
	Device(const string& devicename) {
		name = devicename;
	}
	virtual void Sound() = 0;
	virtual void Show() {
		cout << "Device: " << name << endl;
	}
	virtual void Desc() = 0;
	virtual ~Device() {};
};

class Kettle : public Device {
public:
	Kettle(const string& deviceName) :Device (deviceName) {}
	void Sound() {
		cout << name << " -> is Pff" << endl;
	}
	void Desc() {
		cout << name << " This is Kettle" << endl;
	}
};

class Microwave : public Device {
public:
	Microwave(const string& deviceName) :Device(deviceName) {}
	void Sound() {
		cout << name << " -> is	Bip" << endl;
	}
	void Desc() {
		cout << name << " This is Microwave" << endl;
	}
};

class Car : public Device {
public:
	Car(const string& deviceName) :Device(deviceName) {};
	void Sound() {
		cout << name << "-> Boom boom" << endl;
	}
	void Desc() {
		cout << name << " This is Car" << endl;
	}
};

class Ship : public Device {
public:
	Ship(const string& deviceName) :Device(deviceName) {};
	void Sound() {
		cout << name << "-> horn" << endl;
	}
	void Desc() {
		cout << name << " This is Ship" << endl;
	}
};


void main() {
	Device* devices[4];
	devices[0] = new Kettle("Elektron kettle");
	devices[1] = new Microwave("Microwave");
	devices[2] = new Car("Sedan");
	devices[3] = new Ship("Titanic");

	for (size_t i = 0; i < 4; i++)
	{
		devices[i]->Show();
		devices[i]->Sound();
		devices[i]->Desc();
		cout << endl;
		
	}
	for (size_t i = 0; i < 4; i++)
	{
		delete devices[i];
	}


}
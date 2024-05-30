#include <iostream>
#include <string>

class Electronics {
public:
    std::string type;
    int power;
    
    Electronics() {
        power = 350;
        type = "Memijat";
    }
    
    Electronics(std::string type, int power) {
        this->type = type;
        this->power = power;
    }
    
    void turnON() {
        std::cout << "Turning on the " << type << "." << std::endl;
    }
    
    void turnOFF() {
        std::cout << "Turning off the " << type << "." << std::endl;
    }
    
};

class Furniture {
public:
    std::string material;
    std::string name;
    
    Furniture() {
        material = "Karet";
        name = "Super Uenak";
    }
    
    Furniture(std::string material, std::string name) {
        this->material = material;
        this->name = name;
    }
    
    void assemble() {
        std::cout << "Assembling " << name << "." << std::endl;
    }
    
    void disassemble() {
        std::cout << "Disassembling " << name << "." << std::endl;
    }

};

class SmartChair : public Electronics, public Furniture {
public:
    SmartChair() {
        name = "Super Uenak";
        material = "Karet";
        type = "Memijat";
        power = 350;
    }
    
    void demonstrateFeatures() {
        std::cout << name << " the " << type << " made of " << material << " is tunjukin all kemampuan." << std::endl;
    }
};

int main() {
    SmartChair myChair;
    
    std::cout << "SmartChair: " << myChair.name << std::endl;
    std::cout << "Material: " << myChair.material << std::endl;
    std::cout << "Type: " << myChair.type << std::endl;
    std::cout << "Power: " << myChair.power << "W" << std::endl;

    myChair.assemble();
    myChair.disassemble();
    myChair.turnON();
    myChair.turnOFF();
    myChair.demonstrateFeatures();
    
    return 0;
}

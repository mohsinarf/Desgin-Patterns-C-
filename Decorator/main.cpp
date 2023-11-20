#include <iostream>
#include <memory>

// Component interface
class Coffee {
public:
    virtual ~Coffee() = default;
    virtual void brew() const = 0;
};

// Concrete Component
class SimpleCoffee : public Coffee {
public:
    void brew() const override {
        std::cout << "Brewing simple coffee." << std::endl;
    }
};

// Decorator base class
class CoffeeDecorator : public Coffee {
protected:
    std::unique_ptr<Coffee> decoratedCoffee;

public:
    CoffeeDecorator(std::unique_ptr<Coffee> coffee) : decoratedCoffee(std::move(coffee)) {}

    void brew() const override {
        decoratedCoffee->brew();
    }
};

// Concrete Decorator 1
class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}

    void addMilk() const {
        std::cout << "Adding milk to the coffee." << std::endl;
    }

    void brew() const override {
        CoffeeDecorator::brew();
        addMilk();
    }
};

// Concrete Decorator 2
class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(std::unique_ptr<Coffee> coffee) : CoffeeDecorator(std::move(coffee)) {}

    void addSugar() const {
        std::cout << "Adding sugar to the coffee." << std::endl;
    }

    void brew() const override {
        CoffeeDecorator::brew();
        addSugar();
    }
};

int main() {
    // Create a simple coffee
    std::unique_ptr<Coffee> simpleCoffee = std::make_unique<SimpleCoffee>();

    // Decorate the simple coffee with milk and sugar
    std::unique_ptr<Coffee> milkAndSugarCoffee = std::make_unique<MilkDecorator>(
        std::make_unique<SugarDecorator>(std::move(simpleCoffee))
    );

    // Brew and observe the changes
    milkAndSugarCoffee->brew();

    return 0;
}

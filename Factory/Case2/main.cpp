#include <iostream>
#include <memory>
#include <string>

class Pizza {
public:
  virtual ~Pizza() = default;
  virtual void prepare() = 0;
  virtual void bake() = 0;
  virtual void cut() = 0;
  virtual void box() = 0;

private:
};

class cheesePizza : public Pizza {
public:
  void prepare() override { std::cout << "Preparing cheese pizza...\n"; }

  void bake() override { std::cout << "Baking cheese pizza...\n"; }

  void cut() override { std::cout << "Cutting cheese pizza...\n"; }

  void box() override { std::cout << "Packing cheese pizza...\n"; }
};

class baconPizza : public Pizza {
public:
  void prepare() override { std::cout << "Preparing bacon pizza...\n"; }

  void bake() override { std::cout << "Baking bacon pizza...\n"; }

  void cut() override { std::cout << "Cutting bacon pizza...\n"; }

  void box() override { std::cout << "Packing bacon pizza...\n"; }
};

class simplePizzaFactory {
public:
  std::unique_ptr<Pizza> createPizza(std::string type) {
    std::unique_ptr<Pizza> pizza = nullptr;
    if (type == "cheese")
      pizza = std::make_unique<cheesePizza>();
    else
      pizza = std::make_unique<baconPizza>();

    return pizza;
  }
};

class pizzaStore {
private:
  simplePizzaFactory m_Factory;

public:

  pizzaStore(simplePizzaFactory factory): m_Factory(std::move(factory)){}
  void orderPizza(const std::string &type) {
    std::unique_ptr<Pizza> pizza = m_Factory.createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
  }
};

int main() {
  simplePizzaFactory simpleFacotry;
  std::unique_ptr<pizzaStore> pizzahouse = std::make_unique<pizzaStore>(std::move(simpleFacotry));
  pizzahouse->orderPizza("bacon");
  pizzahouse->orderPizza("cheese");

  return 0;
}
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

class pizzaHouse {
public:
  pizzaHouse() = default;
  void orderPizza(const std::string &type) {
    std::shared_ptr<Pizza> pizza;
    if (type == "cheese")
      pizza = std::make_shared<cheesePizza>();
    else
      pizza = std::make_shared<baconPizza>();

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
  }
};

int main() {

  std::unique_ptr<pizzaHouse> pizzahouse = std::make_unique<pizzaHouse>();
  pizzahouse->orderPizza("cheese");
  pizzahouse->orderPizza("bacon");

  return 0;
}
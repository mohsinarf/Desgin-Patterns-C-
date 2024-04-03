# Modern C++ Design patterns
This repository contains implementations of various design patterns in C++.

| # | Pattern Name                | Intent                                                                                   | Structure                      | Example                          |
|---|-----------------------------|------------------------------------------------------------------------------------------|--------------------------------|----------------------------------|
| 1 | Singleton Pattern           | Ensure a class has only one instance and provide a global point of access to it.          | Creational Pattern             | Logging systems                  |
| 2 | Factory Method Pattern      | Define an interface for creating an object, but allow subclasses to alter the type of objects that will be created. | Creational Pattern | Document creation in a framework |
| 3 | Builder Pattern             | Separate the construction of a complex object from its representation, allowing the same construction process to create different representations. | Creational Pattern | Building complex objects         |
| 4 | Observer Pattern            | Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. | Behavioral Pattern | Event handling systems           |
| 5 | Decorator Pattern           | Attach additional responsibilities to an object dynamically, providing a flexible alternative to subclassing for extending functionality. | Structural Pattern | I/O streams in Java              |
| 6 | Adapter Pattern             | Convert the interface of a class into another interface that a client expects.            | Structural Pattern              | Legacy code integration         |
| 7 | Strategy Pattern            | Define a family of algorithms, encapsulate each one, and make them interchangeable.      | Behavioral Pattern | Sorting algorithms               |
| 8 | Abstract Factory Pattern    | Provide an interface for creating families of related or dependent objects without specifying their concrete classes. | Creational Pattern | GUI libraries                    |
| 9 | Facade Pattern              | Provide a unified interface to a set of interfaces in a subsystem, making it easier to use. | Structural Pattern | High-level APIs                 |
| 10| Composite Pattern           | Compose objects into tree structures to represent part-whole hierarchies.                 | Structural Pattern | GUI components                  |
| 11| Prototype Pattern           | Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype. | Creational Pattern | Cloning objects                  |
| 12| Bridge Pattern              | Decouple an abstraction from its implementation so that the two can vary independently.   | Structural Pattern | Database abstraction layers      |
| 13| Chain of Responsibility Pattern | Allow multiple objects to handle a request without specifying the handler.              | Behavioral Pattern | Event propagation                |
| 14| Flyweight Pattern           | Use sharing to support a large number of fine-grained objects efficiently.                 | Structural Pattern | Text editors                    |
| 15| Memento Pattern             | Capture and externalize an object's internal state so that the object can be restored to this state later. | Behavioral Pattern | Undo mechanisms                 |
| 16| Command Pattern             | Encapsulate a request as an object, thereby allowing for parameterization of clients with queues, requests, and operations. | Behavioral Pattern | GUI buttons                     |
| 17| Proxy Pattern               | Provide a surrogate or placeholder for another object to control access to it.            | Structural Pattern | Remote proxies                  |
| 18| State Pattern               | Allow an object to alter its behavior when its internal state changes.                     | Behavioral Pattern | Vending machines                |
| 19| Template Method Pattern     | Define the skeleton of an algorithm in the superclass but allow subclasses to override specific steps. | Behavioral Pattern | Sorting algorithms               |
| 20| Visitor Pattern             | Represent an operation to be performed on the elements of an object structure without changing the classes on which it operates. | Behavioral Pattern | Compiler design                  |

# GameEventSystem

Source: https://refactoring.guru/design-patterns/singleton

## Design Pattern Explanation

The design pattern I implemented is the creational design pattern, singleton. This ensures that there is only one instance in a class while also providing global access to the instance. It works like this, you create an object but then after some time you create a new one. Instead of creating a fresh object, you will receive the one you already made. Regular constructors must always return a new object which means this behavior is impossible to implement. A singleton pattern allows access to some object from anywhere in the program, like a global variable.

## Benefits

One of the benefits is that you can be positive a class will only have one instance. You will acquire a global access point to that instance. The initialization of a singleton object only happens when it is requested for the first time. Memory management is improved because of the reduction of memory requirements. This is the case since the singleton pattern prohibits the creation of new instances.

## Consequences

A consequence of this pattern is that it violates the single responsibility principle which states "A module should be responsible to one, and only one, actor.” This pattern solves two problems at once. Implementing a singleton can mask bad design, an example is when components of a program know too much about each other. Singletons require special treatment if the environment is multithreaded so the threads won’t make a singleton multiple times. Due to the many test frameworks that rely on inheritance when producing mock objects, it can be difficult to unit test the client code of a singleton.
package two;

import java.util.ArrayList;
import java.util.List;

public class Lab9_EX2{
    public static void main(String[] args) {
        List<Vehicle> vehicles = new ArrayList<Vehicle>();
        vehicles.add(new Car("Car1", "123"));
        vehicles.add(new Car("Car2", "345"));
        vehicles.add(new Rocket("Rocket", 123));
        for (Vehicle vehicle : vehicles) {
            vehicle.start();
        }
    }
}
abstract class Vehicle {
    protected String name;
    public abstract void start();
}
class Rocket extends Vehicle {
    public Rocket(String name, int id) {
        this.name = name;
    }
    public void start() {
        System.out.println("start " + this.name);
    }
}
class Car extends Vehicle {
    public Car(String name, String licenseNumber) {
        this.name = name;
    }
    public void start() {
        System.out.println("start " + this.name);
    }
}

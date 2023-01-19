package four;

import java.util.ArrayList;
import java.util.List;

public class Lab9_EX4 {
    public static void main(String[] args) {
        List<Shape> shapes = new ArrayList<Shape>();
        shapes.add(new Circle(2));
        shapes.add(new Triangle(5, 7));
        shapes.add(new Square(3));
        double totalArea = 0;
        for (Shape shape : shapes) {
            totalArea += shape.getArea();
        }
        System.out.println("area of shapes: " + totalArea);
    }
}
interface Shape {
    public double getArea();
}
class Square implements Shape {
    private double side;
    public Square(double side) {
        this.side = side;
    }
    public double getArea() {
        return Math.pow(side, 2);
    }
}
class Circle implements Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public double getArea() {
        return Math.PI * Math.pow(radius, 2);
    }
}
class Triangle implements Shape {
    private double base;
    private double height;
    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }
    public double getArea() {
        return (base * height) / 2;
    }
}

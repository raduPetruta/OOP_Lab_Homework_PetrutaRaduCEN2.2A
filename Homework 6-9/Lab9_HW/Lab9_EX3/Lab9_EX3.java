public class Lab9_EX3{
    public static void main(String[] args) {
        Shape circle = new Circle(2);
        System.out.println("Area of circle: " + circle.getArea());
        Shape rectangle = new Rectangle(5, 6);
        System.out.println("Area of rectangle: " + rectangle.getArea());
        Shape square = new Square(3);
        System.out.println("Area of square: " + square.getArea());
    }
}
abstract class Shape {
    public abstract double getArea();
}
class Circle extends Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public double getArea() {
        return Math.PI * Math.pow(radius, 2);
    }
}
class Rectangle extends Shape {
    private double width;
    private double height;
    public Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }
    public double getArea() {
        return width * height;
    }
}
class Square extends Shape {
    private double side;
    public Square(double side) {
        this.side = side;
    }
    public double getArea() {
        return Math.pow(side, 2);
    }
}
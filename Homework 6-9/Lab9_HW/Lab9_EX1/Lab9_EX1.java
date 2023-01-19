public class Lab9_EX1{
    public static void main(String[] args) {
        Drawing draw = new Drawing(new Triangle());
        draw.drawShape();
        draw = new Drawing(new Circle());
        draw.drawShape();
    }
}
abstract class Shape {
    public abstract void draw();
}

class Circle extends Shape {
    public void draw() {
        System.out.println("circle");
    }
}
class Triangle extends Shape {
    public void draw() {
        System.out.println("triangle");
    }
}
class Drawing {
    private Shape shape;
    public Drawing(Shape shape) {
        this.shape = shape;
    }
    public void drawShape() {
        shape.draw();
    }
}
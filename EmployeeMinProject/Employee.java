package employee.model;

public abstract class Employee {
    protected int id;
    protected String name;
    protected double salary;

    // Default Constructor
    public Employee() {
        this.id = 0;
        this.name = "Not Given";
        this.salary = 10000;
    }

    // Parameterized Constructor
    public Employee(int id, String name, double salary) {
        this.id = id;
        this.name = name;
        this.salary = salary;
    }

    // Getters and Setters
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

   
    public abstract double calculateSalary();

    public void displayAll() {
        System.out.println("Employee Details:");
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Base Salary: " + salary);
    }

 
    @Override
    public String toString() {
        return "ID: " + id +
               "\nName: " + name +
               "\nSalary: " + salary;
    }
}

package employee.model;

public class SalesManager extends Employee {
    private int target;       
    private double incentive; 

    // Default Constructor
    public SalesManager() {
        super();   
        this.target = 0;
        this.incentive = 0.0;
    }

    // Parameterized Constructor
    public SalesManager(int id, String name, double salary, int target, double incentive) {
        super(id, name, salary); 
        this.target = target;
        this.incentive = incentive;
    }

    // Getters and Setters
    public int getTarget() {
        return target;
    }

    public void setTarget(int target) {
        this.target = target;
    }

    public double getIncentive() {
        return incentive;
    }

    public void setIncentive(double incentive) {
        this.incentive = incentive;
    }

    public double calculateSalary() {
        return salary + incentive;
    }

    public void displayAll() {
        System.out.println("Sales Manager Details:");
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Base Salary: " + salary);
        System.out.println("Target: " + target);
        System.out.println("Incentive: " + incentive);
        System.out.println("Total Salary: " + calculateSalary());
        System.out.println();
    }

    public String toString() {
        return "SalesManager [ID=" + id +
               ", Name=" + name +
               ", Base Salary=" + salary +
               ", Target=" + target +
               ", Incentive=" + incentive +
               ", Total Salary=" + calculateSalary() + "]";
    }
}

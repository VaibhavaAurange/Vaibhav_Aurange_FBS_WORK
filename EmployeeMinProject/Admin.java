package employee.model;

public class Admin extends Employee {
    private double allowance;

    // Default Constructor
    public Admin() {
        super(); 
        this.allowance=5000;
    }

    // Parameterized Constructor
    public Admin(int id, String name, double salary, double allowance) 
    {
        super(id, name, salary); 
        this.allowance=allowance;
    }

    // Getter and Setter
    public double getAllowance() {
        return allowance;
    }

    public void setAllowance(double allowance) {
        this.allowance = allowance;
    }

  
    public double calculateSalary() {
        return salary + allowance;
    }

    public void displayAll() {
        System.out.println("Admin Details:");
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Base Salary: " + salary);
        System.out.println("Allowance: " + allowance);
        System.out.println("Total Salary: " + calculateSalary());
        System.out.println();
        
    }

    @Override
    public String toString() {
        return "Admin [ID=" + id + 
               ", Name=" + name + 
               ", Base Salary=" + salary + 
               ", Allowance=" + allowance + 
               ", Total Salary=" + calculateSalary() + "]";
    }
}

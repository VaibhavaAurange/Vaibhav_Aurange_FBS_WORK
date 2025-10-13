package employee.model;

public class HR extends Employee {
    private double commission;

    // Default Constructor
    public HR() {
        super();
        this.commission = 0.0;
    }

    // Parameterized Constructor
    public HR(int id, String name, double salary, double commission) {
        super(id, name, salary);
        this.commission = commission;
    }

    // Getter and Setter
    public double getCommission() {
        return commission;
    }

    public void setCommission(double commission) {
        this.commission = commission;
    }

    public double calculateSalary() {
        return salary+commission;
    }

    public void displayAll() {
        System.out.println("HR Details:");
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Base Salary: " + salary);
        System.out.println("Commission: " + commission);
        System.out.println("Total Salary: " + calculateSalary());
        System.out.println();
    }

    @Override
    public String toString() {
        return "HR [ID=" + id +
               ", Name=" + name +
               ", Base Salary=" + salary +
               ", Commission=" + commission +
               ", Total Salary=" + calculateSalary() + "]";
    }
}

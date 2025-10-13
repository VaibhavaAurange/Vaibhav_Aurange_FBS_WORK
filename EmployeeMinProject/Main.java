package employee.view;

import java.util.Scanner;
import employee.dao.EmployeeDAO;
import employee.model.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        EmployeeDAO dao=new EmployeeDAO();
        int choice;

        do {
            System.out.println("\nEmployee Management Menu:");
            System.out.println("1. Add Employee");
            System.out.println("2. Search Employee");
            System.out.println("3. Update Employee Salary");
            System.out.println("4. Delete Employee");
            System.out.println("5. Display All Employees");
            System.out.println("6. Calculate Salary of Each Employee");
            System.out.println("7. Display Employees by Type");
            System.out.println("8. Sort Employees by Salary");
            System.out.println("9. Display Top 3 Highest Paid Employees");
            System.out.println("0. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                	System.out.println("Enter Employee Type (1-HR, 2-Admin, 3-SalesManager): ");
                    int type=sc.nextInt();
                    System.out.print("Enter ID: ");
                    int id=sc.nextInt();
                    if(dao.searchEmployeeById(id) != null) 
                    {
                        System.out.println("Employee ID already exists!");
                        break;
                    }
                    sc.nextLine(); 
                    System.out.print("Enter Name: ");
                    String name=sc.nextLine();
                    System.out.print("Enter Base Salary: ");
                    
                    double salary=sc.nextDouble();

                    if (type==1) 
                    {  // HR
                        System.out.print("Enter Commission: ");
                        double comm=sc.nextDouble();
                        dao.addEmployee(new HR(id, name, salary, comm));
                        System.out.println("HR added successfully!");
                    } 
                    else if (type==2) 
                    { // Admin
                        System.out.print("Enter Allowance: ");
                        double allowance=sc.nextDouble();
                        dao.addEmployee(new Admin(id, name, salary, allowance));
                        System.out.println("Admin added successfully!");
                    } 
                    else if (type==3) 
                    { // SalesManager
                        System.out.print("Enter Target: ");
                        int target=sc.nextInt();
                        
                        System.out.print("Enter Incentive: ");
                        double incentive=sc.nextDouble();
                        dao.addEmployee(new SalesManager(id, name, salary, target, incentive));
                        System.out.println("Sales Manager added successfully!");
                    } 
                    else 
                    {
                        System.out.println("Invalid Type!");
                    }
                    break;

                case 2:
                    System.out.print("Enter ID to search: ");
                    id=sc.nextInt();
                    Employee e=dao.searchEmployeeById(id);
                    if (e!=null) 
                    	{
                    	System.out.println("Found:\n" + e);
                    	}
                    else 
                    	{
                    	System.out.println("Employee not found.");
                    	}
                    break;

                case 3:
                    System.out.print("Enter ID to update salary: ");
                    id=sc.nextInt();
                    System.out.print("Enter New Salary: ");
                    salary=sc.nextDouble();
                    if (dao.updateEmployee(id, salary)) 
                    {
                    	System.out.println("Updated successfully!");
                    }
                    else 
                    	{
                    	System.out.println("Employee not found.");
                    	}
                    break;

                case 4:
                    System.out.print("Enter ID to delete: ");
                    id=sc.nextInt();
                    if (dao.deleteEmployee(id)) 
                    {
                    	System.out.println("Deleted successfully!");
                    }
                    else 
                    	{
                    	System.out.println("Employee not found.");
                    	}
                    break;

                case 5: 
                    dao.displayAll();
                    break;

                case 6:
                    System.out.println("\nCalculated Salaries:");
                    for (Employee emp : dao.getAllEmployees()) {
                        System.out.println(emp.getName() + " Final Salary: " + emp.calculateSalary());
                    }
                    break;

                case 7: 
                    System.out.println("Enter Employee Type to display (1-Admin, 2-HR, 3-SalesManager): ");
                    int empType=sc.nextInt();
                    dao.displayByType(empType);
                    break;
                    
                case 8: 
                    System.out.println("Sort by Salary: 1. Ascending  2. Descending");
                    int order = sc.nextInt();
                    dao.sortBySalary(order == 1);
                    break;

                case 9: 
                    dao.displayTopSalaries(3);
                    break;

                case 0:
                    System.out.println("Exit.");
                    break;

                default:
                    System.out.println("Invalid choice! Try again.");
            }
        } while (choice!=0);

        sc.close();
    }
}

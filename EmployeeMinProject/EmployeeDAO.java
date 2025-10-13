package employee.dao;

import java.util.ArrayList;
import employee.model.*;

public class EmployeeDAO {
    static ArrayList<Employee> employees=new ArrayList<Employee>();

    static {
        employees.add(new Admin(301, "Gauri", 70000, 10000));
        employees.add(new Admin(302, "Kiran", 68000, 9500));
        employees.add(new Admin(303, "Aditya", 72000, 11000));
        employees.add(new Admin(304, "Gopal", 75000, 12000));
        employees.add(new HR(101, "Vaibhav", 50000, 5000));
        employees.add(new HR(102, "OM", 48000, 4500));
        employees.add(new HR(103, "Rushikesh", 47000, 4000));
        employees.add(new SalesManager(201, "Karan", 60000, 12, 8000));
        employees.add(new SalesManager(202, "Tushar", 58000, 15, 7500));
        employees.add(new SalesManager(203, "Pranav", 62000, 10, 9000));
    }

   
    public void addEmployee(Employee e1) 
    {
        employees.add(e1);
    }

    
    public Employee searchEmployeeById(int id) 
    {
        for (int i=0;i<employees.size();i++) 
        {
            if (employees.get(i).getId()==id) 
            {
                return employees.get(i);
            }
        }
        return null;
    }

   
    public boolean updateEmployee(int id,double newSalary) 
    {
        Employee emp=searchEmployeeById(id);
        if (emp !=null) 
        {
            emp.setSalary(newSalary);
            return true;
        }
        return false;
    }

    
    public boolean deleteEmployee(int id) 
    {
        for (int i=0;i<employees.size();i++) 
        {
            if (employees.get(i).getId()==id) 
            {
                employees.remove(i);
                return true;
            }
        }
        return false;
    }

   
    public void displayAll() 
    {
        for (int i=0;i<employees.size();i++) {
            employees.get(i).displayAll();
  
        }
    }

    
    public ArrayList<Employee> getAllEmployees() {
        return employees;
    }
    
   
    public void displayByType(int type) {
        boolean found=false;
        for (Employee emp : employees) 
        {
            switch (type) {
                case 1: // Admin
                    if (emp instanceof Admin) 
                    { 
                    	emp.displayAll(); 
                    	found=true; 
                    }
                    break;
                case 2: // HR
                    if (emp instanceof HR) 
                    { 
                    	emp.displayAll(); 
                    	found = true; 
                    }
                    break;
                case 3: // SalesManager
                    if (emp instanceof SalesManager) 
                    { 
                    	emp.displayAll(); 
                    	found = true; 
                    }
                    break;
                default:
                    System.out.println("Invalid type!");
                    return;
            }
        }
        if (!found) System.out.println("No employees of this type found.");
    }
    
    public void sortBySalary(boolean ascending) 
    {
        ArrayList<Employee>sortedList=new ArrayList<>(employees);
        for (int i=0; i<sortedList.size()-1; i++) 
        {
            for (int j=0;j <sortedList.size()-i-1;j++) 
            {
                double s1=sortedList.get(j).calculateSalary();
                double s2=sortedList.get(j + 1).calculateSalary();
                if ((ascending && s1>s2) || (!ascending && s1<s2)) 
                 {
                    Employee temp=sortedList.get(j);
                    sortedList.set(j, sortedList.get(j + 1));
                    sortedList.set(j + 1, temp);
                }
            }
        }
        System.out.println("\nEmployees Sorted by Salary (" + (ascending ? "Ascending" : "Descending") + "):");
        for (Employee emp : sortedList) emp.displayAll();
    }

    
    public void displayTopSalaries(int topCount) 
    {
        ArrayList<Employee>sortedList=new ArrayList<>(employees);
        for (int i=0; i<sortedList.size()-1;i++) 
        {
            for (int j=0; j<sortedList.size() -i-1;j++) 
            {
                if (sortedList.get(j).calculateSalary()<sortedList.get(j + 1).calculateSalary()) 
                {
                    Employee temp=sortedList.get(j);
                    sortedList.set(j, sortedList.get(j + 1));
                    sortedList.set(j+1, temp);
                }
            }
        }
        System.out.println("\nTop " + topCount + " Highest Paid Employees:");
        for (int i=0; i<topCount && i <sortedList.size(); i++) sortedList.get(i).displayAll();
    }
}

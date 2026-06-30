import java.util.ArrayList;
import java.util.Scanner;

class Person {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void displayInfo() {
        System.out.println("name=" + name);
        System.out.println("age=" + age);
    }
}

class Staff extends Person {
    private String position;

    public Staff(String name, int age, String position) {
        super(name, age);
        this.position = position;
    }

    public String getPosition() {
        return position;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("position=" + position);
    }
}

class Patient extends Person {
    private String condition;

    public Patient(String name, int age, String condition) {
        super(name, age);
        this.condition = condition;
    }

    public String getCondition() {
        return condition;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("condition=" + condition);
    }
}

class HospitalManagementSystem {
    private ArrayList<Staff> staffList;
    private ArrayList<Patient> patientList;

    public HospitalManagementSystem() {
        staffList = new ArrayList<>();
        patientList = new ArrayList<>();
    }

    public void addStaff(Staff staff) {
        staffList.add(staff);
        System.out.println("staff member is added");
    }

    public void addPatient(Patient patient) {
        patientList.add(patient);
        System.out.println("patient is added");
    }

    public void displayStaff() {
        for (Staff staff : staffList) {
            staff.displayInfo();
        }
    }

    public void displayPatients() {
        for (Patient patient : patientList) {
            patient.displayInfo();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        HospitalManagementSystem h = new HospitalManagementSystem();
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.println("enter 1 to add staff");
            System.out.println("enter 2 to add patient");
            System.out.println("enter 3 to display staff");
            System.out.println("enter 4 to display patients");
            System.out.println("enter 5 to exit");
            System.out.print("Enter number from 1 to 5: ");
            String x = scanner.nextLine();
            if (x.equals("1")) {
                System.out.print("enter staff name: ");
                String name = scanner.nextLine();
                System.out.print("enter staff age: ");
                int age = scanner.nextInt();
                scanner.nextLine(); // Consume newline
                System.out.print("enter staff position: ");
                String position = scanner.nextLine();
                Staff s = new Staff(name, age, position);
                h.addStaff(s);
            } else if (x.equals("2")) {
                System.out.print("enter patient name: ");
                String name = scanner.nextLine();
                System.out.print("enter patient age: ");
                int age = scanner.nextInt();
                scanner.nextLine(); // Consume newline
                System.out.print("enter patient condition: ");
                String condition = scanner.nextLine();
                Patient p = new Patient(name, age, condition);
                h.addPatient(p);
            } else if (x.equals("3")) {
                h.displayStaff();
            } else if (x.equals("4")) {
                h.displayPatients();
            } else if (x.equals("5")) {
                System.out.println("Exiting");
                break;
            } else {
                System.out.println("you entered wrong option. enter again");
            }
        }
    }
}

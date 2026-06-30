from HospitalManagementSystem import HospitalManagementSystem
from Patient import Patient
from Staff import Staff


def main():
    h = HospitalManagementSystem()
    while True:
        print("enter 1 to add staff")
        print("enter 2 to add patient")
        print("enter 3 to display staff")
        print("enter 4 to display patients")
        print("enter 5 to exit")
        x = input("Enter number from 1 to 5")
        if x == "1":
            name = input("enter staff name= ")
            age = int(input("enter staff age(in numbers(int)= "))
            position = input("enter staff position= ")
            s = Staff(name, age, position)
            h.addStaff(s)
        elif x == "2":
            name = input("enter patient name= ")
            age = int(input("enter patient age(in numbers(int)= "))
            condition = input("enter patient condition= ")
            p = Patient(name, age, condition)
            h.addPatient(p)
        elif x == "3":
            h.displayStaff()
        elif x == "4":
            h.displayPatients()
        elif x == "5":
            print(" exiting ")
            break
        else:
            print("you entered wrong option. enter again")


if __name__ == '__main__':
    main()

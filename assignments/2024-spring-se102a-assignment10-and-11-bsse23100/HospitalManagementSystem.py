from Patient import Patient
from Staff import Staff


class HospitalManagementSystem:
    def __init__(self):
        self.__staffList = []
        self.__patientList = []

    def addStaff(self, staff):
        self.__staffList += [staff]  # adding in  array
        print("staff member is added")

    def addPatient(self, patient):
        self.__patientList += [patient]  # adding in  array
        print("patient is added")

    def displayStaff(self):
        for staff in self.__staffList:
            staff.displayInfo()

    def displayPatients(self):
        for patient in self.__patientList:
            patient.displayInfo()

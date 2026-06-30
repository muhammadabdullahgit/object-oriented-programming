from Staff import Staff


class Paramedic(Staff):
    def __init__(self, name, age, certification):
        Staff.__init__(name, age, "")
        self._certification = certification

    def getCertification(self):
        return self._certification

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("specialization=", self._certification)

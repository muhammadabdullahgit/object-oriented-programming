from Person import Person


class Patient(Person):
    def __init__(self, name, age, condition):
        # Person.__init__(name, age) {giving error while running }
        super().__init__(name, age)
        self._condition = condition

    def getCondition(self):
        return self._condition

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        print("condition=", self._condition)

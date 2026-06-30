from Person import Person


class Staff(Person):
    def __init__(self, name, age, position):
        #Person.__init__(name, age) {giving error while running }
        super().__init__(name, age)
        self._position = position

    def getPosition(self):
        return self._position

    def displayInfo(self):
        print("name=", self._name)
        print("age=", self._age)
        #super().displayInfo()
        print("position=", self._position)

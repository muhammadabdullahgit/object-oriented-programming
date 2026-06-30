from ElectricityMeter import ElectricityMeter


class SinglePhaseMeter(ElectricityMeter):
    def __init__(self):
        super().__init__()
        self._units = None

    def calculate_bill(self, units):
        unitCost = input("enter unit cost")
        if units < 100:
            bill = units * unitCost * (1 + self.get_voltage() * 0.1)
            return bill
        elif units > 100:
            bill = 100 * unitCost + (units - 100) * (unitCost * 2) * (1 + self.get_voltage() * 0.1)
            return bill
        else:
            return 0

    def additional_function(self):
        print("additional function of single phase meter")
        return

    def __add__(self, other):
        return self.calculate_bill(100) + other.calculate_bill(100)

    def __mul__(self, multiplier):
        return self.calculate_bill(100)*multiplier.calculate_bill(100)

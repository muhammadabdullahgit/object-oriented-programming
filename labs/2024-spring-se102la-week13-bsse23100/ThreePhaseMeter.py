from ElectricityMeter import ElectricityMeter


class ThreePhaseMeter(ElectricityMeter):
    def __init__(self):
        super().__init__()
        self._units = None

    def calculate_bill(self, units):
        bill = units * 4.0
        return bill

    def additional_function(self):
        print("additional function of three phase meter")
        return

    def __add__(self, other):
        return self.calculate_bill(100) + other.calculate_bill(100)

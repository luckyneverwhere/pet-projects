class Octopus:
    def __init__(self, name, hunger, fatigue):
        self.name = name
        self.hunger = hunger
        self.fatigue = fatigue

    def feed(self):
        self.hunger = max(0, self.hunger - 2)
        print(f"Manjiro has eaten crab. Hunger is {self.hunger}")

    def sleep(self):
        self.fatigue = max(0, self.fatigue - 3)
        print(f"Manjiro fall asleep. Fatigue is {self.fatigue}")

    def check_status(self):
        print(f"\n--- {self.name}'s ---")
        print(f"Hunger is {self.hunger}")
        print(f"Fatigue is {self.fatigue}\n")

manjiro = Octopus("Manjiro", 5, 10)
manjiro.check_status()
manjiro.feed()
manjiro.sleep()
manjiro.check_status()
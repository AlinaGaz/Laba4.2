#include <iostream>
using namespace std;
class Weapon
{
public:
	string name;
	int damage;
	int weight;
	Weapon(string Name, int Damage, int Weight) {
		name = Name;
		damage = Damage;
		weight = Weight;
	};
	Weapon() {
		name = "Default";
		damage = 10;
		weight = 10;
	};
	~Weapon();

private:

};
int main() {
	Weapon first = Weapon("Sword", 20, 20);
	Weapon second = Weapon();
	cout << "first" << first.name << " " << first.damage << " " << first.weight << endl;
	cout << "second" << second.name << " " << second.damage << " " << second.weight << endl;
}
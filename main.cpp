#include <iostream>
using namespace std;

class Weapon
{
public:
	virtual void Shoot()
	{
		cout << "Bang!" << endl;
	}
};
class Gun : public Weapon
{
public:
	void Shoot()
	{
		cout << "Bang from Gun!" << endl;
	}
};
class SubMachineGun : public Gun
{
public:
	void Shoot()
	{
		cout << "Bang from SubMachineGun!" << endl;
	}
};
class Player
{
public:
	void Shoot(Weapon *weapon)
	{
		weapon->Shoot();
	}
};
int main()
{
	Weapon weapon;
	Gun gun;
	SubMachineGun subMachineGun;

	Player player;
	player.Shoot(&weapon);
	player.Shoot(&gun);
	player.Shoot(&subMachineGun);

	return 0;
}

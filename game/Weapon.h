#ifndef _WEAPON_H_
#define _WEAPON_H_

#include "Template.h"
#include "Instance.h"

class Weapon : public Instance
{
private:
	int _ammo;
	int _state;

	bool _isOwned;

public:
	int getAmmo() { return _ammo; }
	int getState() { return _state; }

	bool isOwned() { return _isOwned; }

	int giveAmmo(int amount);
	int takeAmmo(int amount);
}

class WeaponTemplate : public Template
{
private:
	int _modelId;

	int _minDmg;
	int _maxDmg;
	int _maxAmmo;
	int _minMeleeDmg;
	int _maxMeleeDmg;

	bool _isFireable;

public:
	int getMinDamage() { return _minDmg; }
	int getMaxDamage() { return _maxDmg; }
	int getMaxAmmo() { return _maxAmmo; }
	int getMinMeleeDamage() { return _minMeleeDmg; }
	int getMaxMeleeDamage() { return _maxMeleeDmg; }

	bool isFireable() { return _isFireable; }
}

#endif

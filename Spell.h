#pragma once
#include <iostream>

class Spell {
public:
	static enum ClassType { NEUTRAL, DRUID, HUNTER, MAGE, PALADIN, PRIEST, ROGUE, SHAMAN, WARLOCK, WARRIOR };
	static enum Rarity { COMMON, RARE, EPIC, LEGENDARY };
private:
	std::string name;
	int manaCost;
	ClassType cardClass;
	Rarity rarity;
	std::string description;
	std::string flavorText;
public:
	//Constructors
	Spell();
	Spell(std::string, int, ClassType, Rarity, std::string, std::string);
	//Destructor
	~Spell();
	//getters
	std::string getName();
	int getManaCost();
	ClassType getClass();
	Rarity getRarity();
	std::string getDescription();
	std::string getFlavorText();
	virtual std::string getCardType() { return "Spell"; };
	//setters
	void setName(std::string);
	void setManaCost(int);
	void setClass(ClassType);
	void setRarity(Rarity);
	void setDescription(std::string);
	void setFlavorText(std::string);
	//overloads
	bool operator>(const Spell&) const;

	bool operator<(const Spell&) const;

	bool operator==(const Spell&) const;
	
	friend std::istream& operator>>(std::istream& in, Spell& toRead);
	
	friend std::ostream& operator<<(std::ostream& out, const Spell& toPrint);
};
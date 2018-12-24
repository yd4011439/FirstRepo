#pragma once
class Animal{
private:
	std::string name;
	std::string cellType;
public:
	void setName(std::string name){ this.name = name;}
	void setCellType(std::string cellType){ this.cellType = cellType;}
	void printDetails(){
		std::cout<<"Name: "<<name<<" cellType: 	"<<cellType<<std::endl;
	}
};

class Dog{
private:
	std::string color;
	int headRadius;
public:
	void setColor(std::string color){this.color = color;}
	void setHeadRadius(int radius){headRadius = radius;}
};
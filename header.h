#pragma once
class Animal{
private:
	std::string name;
	std::string cellType;
public:
	inline void setName(std::string name){ this.name = name}
	inline void setCellType(std::string cellType){ this.cellType = cellType}
	void printDetails(){
		std::cout<<"Name: "<<name<<" cellType: "<<cellType<<std::endl;
	}
};

#include<stdio.h>
class newBranch{
priavate:
	int branchCode;
	std::string branchName;
public:
	int getBranchCode();	
	std::string getBranchName();
	

};
int newBranch::getBranchCode(){	
	return branchCode;
}
std::string newBranch::getBranchName(){
	return branchName;
}
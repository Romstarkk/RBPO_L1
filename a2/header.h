#pragma once
extern std::string ssalary;
extern unsigned short height;
unsigned short readPersonAge();
void readPersonData(std::string& name, unsigned short& age, double& salary);
void readPersonData(std::string& name, unsigned short& age, unsigned short& height, unsigned short& weight);
void readPersonHeight();
std::string readPersonName();
void readPersonSalary(double* salary);
void readPersonWeight(unsigned short& weight);
void writePersonData(const std::string& name,const unsigned short* age,
	const std::string& height = "",const std::string& weight = ""
);

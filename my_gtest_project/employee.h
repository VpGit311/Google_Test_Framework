#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
public: 
    int empid;
    std::string EmName;
    float wday;
    float pdsalary;

    void setsalary(float s) { pdsalary = s; }
    void setwday(float w) { wday = w; }
    void setEMid(int em) { empid = em; }
    void setEmN(std::string v) { EmName = v; }
};

class Full_TEMP : public Employee {
public:
    float calwaages() {   
        std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-___-_-_-_-_-_-_-_-_--__-_-" << std::endl;
        float total = wday * pdsalary;
        std::cout << "Your eMPLOYE id: " << empid << std::endl;
        
        if (empid > 0 && empid < 100) {
            std::cout << "Congratulation: Auth Sucsessfull" << std::endl;
            std::cout << "Your Name: " << EmName << std::endl;
            std::cout << "Total working Days: " << wday << std::endl;
            std::cout << "Your Total sallary is: " << total << std::endl;
            std::cout << "******Enjoy******" << std::endl;
            std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-___-_-_-_-_-_-_-_-_--__-_-" << std::endl;
        }
        return total; // Updated to return the value so gtest can verify it!
    }
};

class Part_TEMP : public Employee {
public:
    float calwaages() { 
        return wday * 500; 
    }
};

#endif
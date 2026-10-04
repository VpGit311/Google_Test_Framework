#include <gtest/gtest.h>
#include "employee.h"

// Test Full_TEMP wages calculation
TEST(EmployeeTest, FullTimeWagesCalculation) {
    Full_TEMP fe;
    fe.setEMid(50);
    fe.setEmN("John Doe");
    fe.setwday(20.5);
    fe.setsalary(1200.0);

    // 20.5 * 1200 = 24600
    EXPECT_FLOAT_EQ(fe.calwaages(), 24600.0f);
}

// Test Part_TEMP wages calculation (wday * 500)
TEST(EmployeeTest, PartTimeWagesCalculation) {
    Part_TEMP pe;
    pe.setwday(10.0);

    // 10.0 * 500 = 5000
    EXPECT_FLOAT_EQ(pe.calwaages(), 5000.0f);
}

// Test edge case where employee ID is outside the auth range
TEST(EmployeeTest, FullTimeInvalidAuthId) {
    Full_TEMP fe;
    fe.setEMid(150); // Outside 0 - 100 range
    fe.setwday(5);
    fe.setsalary(1000);

    // Math should still work, even if console logs don't print
    EXPECT_FLOAT_EQ(fe.calwaages(), 5000.0f);
}
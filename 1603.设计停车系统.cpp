/*
 * @lc app=leetcode.cn id=1603 lang=cpp
 *
 * [1603] 设计停车系统
 */

// @lc code=start
class ParkingSystem {
public:
    int* arr;
    ParkingSystem(int big, int medium, int small){
        arr = new int[3]{big,medium,small};
    }

    bool addCar(int carType) {
        return (--arr[carType-1]) >= 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
// @lc code=end


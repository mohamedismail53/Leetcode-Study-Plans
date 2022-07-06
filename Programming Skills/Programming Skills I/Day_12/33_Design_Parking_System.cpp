class ParkingSystem {
private:
    int _bigSpace = 0;
    int _medSpace = 0;
    int _smallSpace = 0;
public:
    ParkingSystem(int big, int medium, int small) {
        _bigSpace = big;
        _medSpace = medium;
        _smallSpace = small;
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1:
                if(_bigSpace>0){
                    --_bigSpace;
                    return 1;
                }
                else
                    return false;
                break;
            case 2:
                if(_medSpace>0){
                    --_medSpace;
                    return 1;
                }
                else
                    return false;
                break;
            case 3:
                if(_smallSpace>0){
                    --_smallSpace;
                    return 1;
                }
                else
                    return false;
                break;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
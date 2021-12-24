/*(Target-Heart-Rate Calculator) While exercising, you can
use a heart-rate monitor to see that your heart rate stays within
a safe range suggested by your trainers and doctors. According
to the American Heart Association (AHA) ( http://bit.ly/
AHATargetHeartRates ) (c++ how to program)*/

#include <string>

class HeartRates{
    public:

    HeartRates(std::string firstName,std::string lastName,int month,int day,int year):
    fName(firstName){
        lName = lastName ;
        mDate = month ;
        dDate = day ;
        yDate = year ;
    }

    void setFName(std::string firstName){
        fName = firstName ;
    }

    void setLName (std::string lastName){
        lName = lastName ;
    }

    void setMonth (int month){
        mDate = month ;
    }

    void setDay (int day ){
        dDate = day ;
    }

    void setYear ( int year){
        yDate = year ;
    }

    void setAge (int realAge ){
        age = realAge ;
    }

    void setMaximumHeartRate (int maximum){
        maximumHeartRate = maximum ;
    }

    void setMaximum (int maximum){
        maxTargetHeartRate = maximum ;
    }

    void setMinimum (int minimum){
        minTargetHeartRate = minimum ;
    }

    std::string getFName()const{
        return fName ;
    }

    std::string getLName()const{
        return lName ;
    }

    int getMonth ()const {
        return mDate;
    }

    int getDay ()const{
        return dDate ;
    }

    int getYear()const{
        return yDate ;
    }

    int getAge ()const {
        return age ;
    }

    std::string getHeartRates()const{
        return getFName() +" "+ getLName() +" "+ std::to_string(getMonth())
        +" "+ std::to_string(getDay()) +" "+ std::to_string(getYear());
    }

    int getMaximumHeartRate()const{
        return maximumHeartRate ;
    }

    int getMaximumTarget()const {
        return maxTargetHeartRate ;
    }

    int getMinimumTarget()const {
        return minTargetHeartRate ;
    }
    
    std::string getTargetHeartRate ()const {
        return std::to_string(minTargetHeartRate) + "-" + std::to_string(maxTargetHeartRate) ;
    }

    private:
    std::string fName ;
    std::string lName ;
    int mDate {0} ;
    int dDate {0} ;
    int yDate {0} ;
    int age   {0} ;
    int maximumHeartRate {0};
    int maxTargetHeartRate{0};
    int minTargetHeartRate{0};
};
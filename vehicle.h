#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

class Vehicle : Object {
public:
        
    /** Constructor.
     * 
     * \param type      The type of the vehicle.
     *                  0 = car
     *                  1 = truck
     *                  2 = train
     * \param weight    This is added to the default weights depending on
     *                  the difficulty.
     * */
    Vehicle(byte type, byte weight);
    
    /** Destructor
     * 
     * */
    ~Vehicle();
    
private:
    
};

#endif
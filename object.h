#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

class Object {
public:
    
    /** Getter for the weight of the element.
     * 
     * \return      The weight of the element.
     * */
    byte get_weight();
    
    /** Getter for the position of the element. 
     * 
     * \return      ((x1,y1),(x2,y2)) - the start and end of the object.
     * */
    byte* get_position();
    
    /** Update the current position with new coordinates.
     * 
     * \param new_position  An array of starting and ending coordinates.
     * */
    void update_position(byte* new_position);
    
    /** Getter for the force the element is acting on its start and end 
     *  coordinates.
     * 
     * \return      ((v_x1, v_y1),(v_x2. v_y2)) - the forces at the start and 
     *              end coordinates of the object.
     * */
    Force* get_force();
    
private:
    byte type;
    byte weight;
    byte * position;
    byte * v; // Velocity vector
};

#endif
#ifndef BRIDGE_H_INCLUDED
#define BRIDGE_H_INCLUDED

class Bridge {
public:
    
    /** Constructor.
     * 
     * \param max_elements      The number of elements the player can build.
     * */
    Bridge(byte max_elements);
    
    /** Destructor.
     * 
     * */
    ~Bridge();
    
    /** Getter for the maximum amount of elements.
     * 
     * \return      The maximum number of elements that can be build.
     * */
    byte get_max_elements();
    
    /** Getter for the current amount of elements.
     * 
     * \return      The current number of elements that are built.
     * */
    byte get_n_elements();
    
    /** Add a new part to the bridge.
     * 
     * \param part  The part to add to the bridge. 
     *              0 = bent (needed to connect to the ground)
     *              1 = decking (needed for cars to drive over)
     *              2 = cable (takes away the tension from the bridge)
     * */
    void add_part(Part * part);
    
    /** Calculate all the forces within the bridge and update the position of 
     *  all parts using the Runga-Kutta method with degree of 4.
     * */
    void update_tension();
    
    /** Calculate the force acting on the bridge and update accordingly 
     *  those parts using the Runga-Kutta method with degree of 4.
     * 
     * \param force     The force of the object which acts on the bridge.
     * */
    void calc_outer_force(Force force);
    
private:
    byte max_elements;
    Part * parts;
    
};

#endif
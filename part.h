#ifndef PART_H_INCLUDED
#define PART_H_INCLUDED

class Part : Object{
public:
    
     /** Constructor.
     * 
     * \param type      0 = bent (needed to connect to the ground)
     *                  1 = decking (needed for cars to drive over)
     *                  2 = cable (takes away the tension from the bridge)
     * \param position  The start and end coordinates of this object.
     * */
    Part(byte type, byte* position);
    
    /** Destructor.
     * 
     * */
    ~Part();
    
    /** Getter for the number of connected elements.
     * 
     * \return      Get the number of connected elements.
     * */
    byte get_n_connected_elements();
    
    /** Iterate over all the connected parts and return them.
     * 
     * \return      Pointer to the connected part. NULL if no connected_parts
     *              available.
     * */
    Part * get_next_part();
    
private:
    byte type;
    byte weight;
    byte * position;
    Part ** connected_parts;
    byte next_part;
    byte n_connected_parts;
};

#endif
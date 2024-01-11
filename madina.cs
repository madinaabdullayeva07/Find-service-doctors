class transformer {
    color color;
    string name;
    int weight; / in tonn
    int maxspeed; / int km per hour
    state stae;

    Transformer Transformer (){
        color = color.blue;
        name:" ";
        weight = 0;
        maxspeed = 0;
            }

            void transform (state state){
                this.state=state;

            }
            void moveTo(point point){
                if state ==state.vehicle {
                    maxspeed = 300;
                } else{
                    maxspeed = 50;

                }
                
            }
}
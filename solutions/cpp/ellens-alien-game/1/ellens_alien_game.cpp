namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        private:
            int health;
        public:
            int x_coordinate;
            int y_coordinate;
            Alien(int x, int y){
                x_coordinate = x;
                y_coordinate = y;
                health = 3;
            }
            int get_health(){
                return health;
            }
            bool hit(){
                if(health > 0){
                    health--;
                }
                return true;
            }
            bool is_alive(){
                return health > 0;
            }
            bool teleport(int x, int y){
                x_coordinate = x;
                y_coordinate = y;
                return true;
            }
            bool collision_detection(Alien a){
                return a.x_coordinate == x_coordinate && a.y_coordinate == y_coordinate;
            }  
    };
}  // namespace targets

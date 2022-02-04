class MyLnA
    {
    private:
        double mX; 
        double mA;
    public:
        MyLnA(double a = 0){
            mA = a;

        };
        MyLnA(double x, double a = 0){
            mX = x;
            mA = a;

        };
        MyLnA(const MyLnA %obj){
            mX = obj.mX;
            mA = obj.mA;

        };
        ~MyLnA(){
            mX = 0;
            mA = 0;

        };
        double value(){

        };
        void setX(){
            mX = x;

        };
        double getX(){
            return mX;

        };
        void setA(double){
            mA = a;

        } 
        double getA(){

return mA;
        }
    };
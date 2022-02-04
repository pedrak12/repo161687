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
            double lnx = double log(mA);
            for (int i =0; i<10; i++){
                lnx+=pow(-1,i)/(pow(mA,i+1))*pow((mX-mA),i+1)/(i+1);
            }
            return lnx;
        }
        

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
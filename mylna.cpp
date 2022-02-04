///Dokumentacja klasy MyLnA
class MyLnA
    {
    private:
        double mX; /*!< definicje zmiennych prywatnych *///zmienna double mX//
        double mA; /*!< definicje zmiennych prywatnych */ //zmienna double mX//
    public: /**Deklaracja metod publicznych*/
        MyLnA(double a = 0){  /**< metoda z parametrem double */
                
            mA = a;

        };
        MyLnA(double x, double a = 0){  /** metoda z dwoma parametrami */

            mA = a;

        };
        MyLnA(const MyLnA %obj){/** metoda z parametrem MyLnA &obj*/
            mX = obj.mX;
            mA = obj.mA;

        };
        ~MyLnA(){ /** dekonstruktor*/
            mX = 0;
            mA = 0;

        };
        double value(){/** metoda value. */
            double lnx = double log(mA);
            for (int i =0; i<10; i++){
                lnx+=pow(-1,i)/(pow(mA,i+1))*pow((mX-mA),i+1)/(i+1);
            }
            return lnx;
        }
        

        };
        void setX(){ /** metoda set x */
            mX = x;

        };
        double getX(){ /** metoda get x  */

        };
        void setA(double){  /** metoda set a  */
            mA = a;

        } 
        double getA(){  /** metoda get a */
return mA;
        }
    };
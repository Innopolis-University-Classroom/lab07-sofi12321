//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body

template <int, float T>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() { return num1+num2; /*your code here*/ }
    T subtract() { 
        return num1-num2;
        /*your code here*/ }
    T multiply() { 
        return num1*num2;
        /*your code here*/ }
    T divide() { 
        if (num2==0) return 0;
        return num1/num2;
        /*your code here*/ }
};
















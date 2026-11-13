int multiply(int a, int b)
{
    return a * b;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int div(int a, int b)
{
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle the error as appropriate
    }
    return a / b;
}


int main() {
    int a = 5;
    int b = 2;
    
    std::cout << multiply(a, b) << std::endl;

    std::cout << add(a, b) << std::endl;

    std::cout << sub(a, b) << std::endl;

    std::cout << div(a, b) << std::endl;


    return 0;
}
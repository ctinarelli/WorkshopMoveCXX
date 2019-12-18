#include <iostream>
#include <array>
#include <tuple>

class DummyClass
{
public:
    DummyClass() : x(0), y(0)
    {
    }

    DummyClass(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    int GetX() const
    {
        return (x);
    }
    int GetY() const
    {
        return (y);
    }

    std::tuple<int, int> GetCoordinate()
    {
        return {x, y};
    }
private:
    int x;
    int y;
};

void FunctionTwo(DummyClass &&Cl)
{
    auto [one, two] = Cl.GetCoordinate();

    std::cout << "Les coordonées sont " << one << " " << two << std::endl;
}

void FunctionOne(DummyClass &&Cl)
{
    std::cout << "je fais des trucs" << std::endl;
    // @HERE: change something to make it compile !
    FunctionTwo(Cl);
}

int main()
{
    DummyClass Dummy(143, 4);

    // @HERE: Basic change to add make this line compile.
    FunctionOne(Dummy);
    return 0;
}

#include <iostream>
#include <array>

class DummyClass
{
public:
    DummyClass() : x(0), y(0)
    {
    }

    int GetX() const
    {
        return (x);
    }
    int GetY() const
    {
        return (y);
    }
    std::array<int, 2> GetCoordinate()
    {
        return (std::array<int, 2>{x, y});
    }
private:
    int x;
    int y;
};

void FunctionTwo(DummyClass &&Cl)
{
    auto array = Cl.GetCoordinate();
}

void FunctionOne(DummyClass &&Cl)
{
    std::cout << "je fais des trucs" << std::endl;
    // @HERE: change something to make it compile !
    FunctionTwo(Cl);
}

int main()
{
    DummyClass Dummy;

    // @HERE: Basic change to add make this line compile.
    FunctionOne(Dummy);
    return 0;
}

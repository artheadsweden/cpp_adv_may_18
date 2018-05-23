#include <iostream>

using namespace std;

class MyVector
{
public:
    MyVector() : m_size(0), m_pInt(nullptr){}
    MyVector(int msize = 0) : m_size(msize), m_pInt(new int[m_size])
    {
        for(int i = 0; i < m_size; i++)
        {
            m_pInt[i] = 0;
        }
    }

    ~MyVector()
    {
        delete[] m_pInt;
    }


    MyVector(const MyVector& other) : m_size(other.m_size), m_pInt(new int[m_size])
    {
        copy(other.m_pInt, other.m_pInt + other.m_size, m_pInt);
    }

    MyVector(MyVector&& other) : m_size(0), m_pInt(nullptr)
    {
        other.swap(*this);
    }

    MyVector& operator=(const MyVector& other)
    {
        m_size = other.m_size;
        if(m_pInt)
        {
            delete[] m_pInt;
        }
        m_pInt = new int[m_size];

        copy(other.m_pInt, other.m_pInt + other.m_size, m_pInt);
        return *this;
    }


    MyVector& operator=(MyVector&& other)
    {
        m_size = 0;
        if(m_pInt)
        {
            delete[] m_pInt;
        }
        m_pInt = nullptr;
        other.swap(*this);
        return *this;
    }

private:
    void swap(MyVector& other)
    {
        using std::swap;
        swap(m_size, other.m_size);
        swap(m_pInt, other.m_pInt);
    }

    size_t m_size;
    int* m_pInt;
};

int main()
{
    MyVector mv1(10);
    MyVecot mv2;
    mv2 = mv1;

    return 0;
}

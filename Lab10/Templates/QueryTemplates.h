#ifndef QUERY_H
#define QUERY_H
#include <vector>

template<class T>
class Query
{
    public:
        virtual bool Accept(const T& member) const = 0;
};

template<class T>
class ByFirstName : public Query<T>
{   
    public:
        ByFirstName(char key);
        virtual bool Accept(const T& member) const override;
    
    private:
        char key;
};

template<class T>
ByFirstName<T>::ByFirstName(char key)
{
    this->key = key;
}

template<class T>
bool ByFirstName<T>::Accept(const T& member) const
{
    return member.name[0] == key;
}

#endif // QUERY_H
#ifndef REPOTEMPLATE_H
#define REPOTEMPLATE_H
#include <vector>
#include "QueryTemplates.h"

template<class T>
class Repository{
    public:   
        void AddMember(const T& member);
        int Size();
        T operator[](int index) const;
        std::vector<T> FindByQuery(const Query<T> &query);

    private:
        std::vector<T> listOfMembers;
};

template<class T>
void Repository<T>::AddMember(const T& member)
{
    listOfMembers.push_back(member);
}

template<class T>
int Repository<T>::Size()
{
    return listOfMembers.size();
}

template<class T>
T Repository<T>::operator[](int index) const
{
    if ((index >= listOfMembers.size())|| (index<0))
    {
        std::cout << "Index out of range." << std::endl;
    }
    else    {return listOfMembers[index];}
}

template<class T>
std::vector<T> Repository<T>::FindByQuery(const Query<T> &query)
{
    std::vector<T> result;
    for (int i=0; i<listOfMembers.size(); i++) 
    {   
        if(query.Accept(listOfMembers[i]))
        {
            result.push_back(listOfMembers[i]); 
        }                                        
    }
    return result;
}

#endif // REPOTEMPLATE_H
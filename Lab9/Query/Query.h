#ifndef QUERY_H
#define QUERY_H
#include <memory>
#include <vector>
#include "Student.h"
using std::unique_ptr;

class Query
{
    public:
        virtual bool Accept(const Student& student) const = 0;
};

class ByFirstName : public Query
{   
    public:
        ByFirstName(char key);
        virtual bool Accept(const Student& student) const override;
    
    private:
        char key;
};

class ByLastName : public Query
{   
    public:
        ByLastName(char key);
        virtual bool Accept(const Student& student) const override;
    
    private:
        char key;
};

class ByOneOfPrograms : public Query
{   
    public:
        ByOneOfPrograms(string key);
        virtual bool Accept(const Student& student) const override;
    
    private:
        string key;
};

class ByYearLowerOrEqualTo : public Query
{   
    public:
        ByYearLowerOrEqualTo(int key);
        virtual bool Accept(const Student& student) const override;
    
    private:
        int key;
};

class OrQuery : public Query
{   
    public:
        OrQuery(unique_ptr<Query>& query1, unique_ptr<Query>& query2);
        virtual bool Accept(const Student& student) const override;
    
    private:
        unique_ptr<Query> query1;
        unique_ptr<Query> query2;
};

class AndQuery : public Query
{   
    public:
        AndQuery(unique_ptr<Query>& query1, unique_ptr<Query>& query2);
        virtual bool Accept(const Student& student) const override;
    
    private:
        unique_ptr<Query> query1;
        unique_ptr<Query> query2;
};

#endif // QUERY_H
#include <iostream>
using namespace std;



struct Transaction
{
    int user_id;
    bool is_deposit;
    int amount, balance;

    void print()
    {
        if (is_deposit)
        {
            cout << user_id << " deposit " << amount << " " << balance << endl;
        }
        else
            cout << user_id << " withdraw " << amount << " " << balance << endl;
    }
};


struct User
{
    int id;
    int balance;

    int n_deposits = 0, n_withdrawal = 0;

    Transaction t[3];
    int k=0;

    int deposit(int amount)
    {
        balance += amount;

        if(k==3){      //to remove old transaction and add new transaction
            t[0]=t[1];
            t[1]=t[2];
            k=2;

        }

        t[k].user_id = id;
        t[k].is_deposit = 1;
        t[k].amount = amount;
        t[k].balance = balance;
        k++;
     

        n_deposits++;

        return 0;
    }
    int withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            if(k==3){          //to remove old transaction and add new transaction
            t[0]=t[1];
            t[1]=t[2];
            k=2;

        }

        t[k].user_id = id;
        t[k].is_deposit = 0;
        t[k].amount = amount;
        t[k].balance = balance;
        k++;

            n_withdrawal++;
            return 0;
        }
        else
            return -1;
    }
    void print_history()
    {
        for (int i = k; i >0 ; i--)       
        {
            t[i-1].print();
        }
        
        

    }
};

struct Request
{

    int user_id;
    bool is_deposit;
    int amount;
    void print()
    {
        if (is_deposit)
        {
            cout << user_id << " deposit " << amount << endl;
        }
        else
            cout << user_id << " withdraw " << amount << endl;
    }
};

struct Bank
{
    int n_users = 0; //  : number of users registered in the bank

    User users[10]; // list of users registered. This can be max 10.

    int n_reqs = 0; //: number of requests at bank

    Request reqs[10]; // queue of requests. This can be max 10.
    int add_user(int init_bal)
    {
        if (n_users < 10)
        {
            users[n_users].id = n_users;
            users[n_users].balance = init_bal;
            n_users++;

            return 0;
        }
        else
            return -1;
    }
    void add_request(int user_id, bool is_deposit, int amount)
    {
        if (n_reqs < 10)
        {
            reqs[n_reqs].user_id = user_id;
            reqs[n_reqs].is_deposit = is_deposit;
            reqs[n_reqs].amount = amount;
            n_reqs++;
        }
    }
    int get_balance(int user_id)
    {
        return users[user_id].balance;
    }
    int get_num_deposits(int user_id)
    {
        return users[user_id].n_deposits;
    }
    int get_num_withdrawals(int user_id)
    {
        return users[user_id].n_withdrawal;
    }
    void deposit(int user_id, int amount)
    {
        users[user_id].deposit(amount);
    }
    void withdraw(int user_id, int amount)
    {
        users[user_id].withdraw(amount);
    }
    void print_user_history(int user_id)
    {
            users[user_id].print_history();
    }
};

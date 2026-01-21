#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Product
{
public:
    int m_price;
    string m_name;
    int m_time;
    int m_ID;
    Product(string name,int price)
    {
        this->m_name = name;
        this->m_price = price;
        this->m_time = 0;
    }
};

int main()
{
    //创建商品
    Product pro1("Table-water",1);
    Product pro2("Table-water",1);
    Product pro3("Table-water",1);
    Product pro4("Coca-Cola",2);
    Product pro5("Milk",2);
    Product pro6("Beer",3);
    Product pro7("Orange-Juice",3);
    Product pro8("Sprite",3);
    Product pro9("Oolong-Tea",4);
    Product pro10("Green-Tea",4);
    vector<Product>product;
    product.push_back(pro1);
    product.push_back(pro2);
    product.push_back(pro3);
    product.push_back(pro4);
    product.push_back(pro5);
    product.push_back(pro6);
    product.push_back(pro7);
    product.push_back(pro8);
    product.push_back(pro9);
    product.push_back(pro10);
    int n = 1;
    for(auto &s:product)
    {
        s.m_ID = n;
        n++;
    }
    //现金计算
    int CashNumber;
    int CashSum = 0;
    while(true)
    {
        cin >> CashNumber;
        if(CashNumber == -1)break;
        CashSum += CashNumber;
    }
    //商品输入
    int ProductNumber;
    int ProductSum = 0;
    vector<int>selections;
    while (true)
    {
        cin >> ProductNumber;
        if(ProductNumber == -1)break;
        if (ProductNumber >= 1 && ProductNumber <= 10) 
        {
            selections.push_back(ProductNumber);
        }  
    }
    //商品价格计算
    int len = selections.size();
    for (int i = 0; i < len; i++)
    {
        ProductSum += product[selections[i]-1].m_price;
    }
    //比大小
    if(CashSum < ProductSum)
    {
        cout << "Insufficient money" << endl;
        return 0;
    }
    //记录商品被选次数
    for (int i = 1; i <= 10; i++)
    {
        int time = count(selections.begin(),selections.end(),i);
        product[i-1].m_time = time;
    }
    //防止再次输出
    vector<int>result;
    for (int i = 0; i < len; i++)
    {
        if(find(result.begin(),result.end(),selections[i]) == result.end())
        {
            result.push_back(selections[i]);
        }
    }
    //输出结果 
    cout << "Total:" << CashSum << "yuan,change:" << CashSum-ProductSum << "yuan" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << product[result[i]-1].m_name << ":" << product[result[i]-1].m_time << ";";
    }
}
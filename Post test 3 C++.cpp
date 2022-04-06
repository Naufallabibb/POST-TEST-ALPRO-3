#include <iostream>
#include <string>

using namespace std;
int main()
{
string raptor_prompt_variable_zzyz;
int x;
int y;
int i;
int pangkat;

raptor_prompt_variable_zzyz ="x = ";
cout << raptor_prompt_variable_zzyz;
cin >> x;
raptor_prompt_variable_zzyz ="y = ";
cout << raptor_prompt_variable_zzyz;
cin >> y;
pangkat =1;
i =1;
while (!(i>y))
{
pangkat =pangkat*x;
i =i+1;
}
cout << pangkat << endl;
system("pause");
return 0;
}


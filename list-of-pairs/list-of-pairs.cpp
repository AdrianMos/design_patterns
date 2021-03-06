/*
This program is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.*/

#include "stdafx.h"
#include <list>
#include <tuple>
#include <iostream>
#include <string>


using namespace std;

class MyObject {
private:
    int id;
public:
    MyObject(int id) : id(id) {};
    int Id() {
        return id;
    }
};

int main()
{
    const list<pair<MyObject, MyObject>> allPairs = {
        make_pair(MyObject(1), MyObject(10)),
        make_pair(MyObject(2), MyObject(20)),
        make_pair(MyObject(3), MyObject(30)) };

    for (auto pair : allPairs) {
        cout << pair.first.Id() << " " << pair.second.Id() << endl;
    }
    
    std::getchar();
    return 0;
}
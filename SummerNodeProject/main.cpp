//
//  main.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include "NodeController.h"
using namespace std;



int main()
{
    // insert code here...
    cout << "Starting the process\n";
    NodeController * app = new NodeController();
    app->start();
    cout << "Ending the process\n";
    return 0;
}

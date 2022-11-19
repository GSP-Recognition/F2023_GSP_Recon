# Guidelines

## The file structure should be as follows:

### Modules Subdirectory:
All Production code belongs to the modules. This is where the "good code" goes.
Such as data structures and the final and any other libraries that are developed.

### Samples Subdirectory:
Here executables used to debug modules or run any type of test are put. Sample code is for the purpose of assisting development and will not be included in the final product

### Project Subdirectories
The child directories for modules and samples will need a CMakeLists.txt file. This will identify the sample/modules you are adding to the compiler so that it can be built. Please check out the template modules and sample. There is a CMakeLists.txt file in the root directory, your subdirectory needs to be added to this file. Lets try and keep the subdirectories in the root cmake in alphabetical order.

## Code

### Libraries and Classes
Classes and Libraries developed by us should serve a specific purpose. A table should just be a table not the whole kitchen.

### Functions
Functions should be short and sweet. This will of course vary depending on the function but if you feel the function is getting long then splitting the function into sub functions is a simple way to correct this. In this way we keep the code readable which is the objective here. This is a complicated project, lets not have the code make our lives harder

### Comments
To simplify the debugging process we should comment our code by citing the paper so that we can identify what part of the algorithm is implemented. In a sense we are transating the algorithm from pseudo to cpp so for each transaltion there should be a citation to the source 

## Git
No one should push directly to master. Code should only be added to Master via pull requests. Feel free to make as many branches as you wish. A branch should exist to make a specific change. IE if you are implementing a SP Graph data structure, the branch should not include any new code not related to the SP Data Structure.
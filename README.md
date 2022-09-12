# CS 124 Project 1
Choose a data set, read the information into a C++ program, and perform a calculation on the data

For this project, you will:

* choose a data set, 
* write a C++ class to store its information, 
* read the data into a vector of objects, 
* perform a calculation on the vector, 
* and write a report about your project.

<<<<<<< HEAD

## Requirements

### Repository

* Reference the `GitHub-with-CLion` repository for directions on how to set up and use your GitHub repository.
* Use the `Project1` template repository to create a new repository in the course GitHub organization. It must be a **private** repository with the naming convention `Project1-netid` where `netid` is your UVM NetID username.
* Clone your new repository into CLion. 
* Frequently save your changes locally and remotely through the commit and push commands.

### Data Set

* Your data set must contain at least 1000 entries (rows). 
* Each entry must have at least 5 attributes (columns).
* At least one attribute must be unique for each entry in the data set (i.e. no duplicates).
Keep in mind, you will be using this data set for the rest of the projects this semester.

### Class

* Your class must have at least 5 fields where at least one is a numerical type and at least one is a string type. 
* You should have constructors, getters, setters, and other methods as appropriate. 

### Global Functions

* You must create a function that opens your data file and reads the data into a vector of objects of your class.
* You must create a function that will loop through your vector of data and perform some kind of calculation on it.

An example program has been provided for you in a folder called `example_project`. It contains data about exoplanets, and you will not be able to use the same data set for your project. Use it as an example of content, code style, and functionality that you can use as a model for your project. Note that this example project is from a previous semester, when reports were required to be in PDF format instead of in a README.md file, and it does not include CMakeLists.txt.

### Design

Consider the following questions:
* What data do you want to use? Where will you get it from?
* How will you store it in a file? Is it in csv format?
* How will you read it in using C++? How will you know that it read in correctly?
* What should you name the class?
* What fields do you need? What are their types? What names make sense?
* Which fields and methods need comments to clarify their meaning?
* What function makes the most sense to calculate on your data?

Some examples of data sets: 
* All the courses offered at UVM this semester (there is a csv download on the enrollment page).
* The National Oceanic and Atmospheric Administration (NOAA) collects climate and weather data and allows you to search and download the raw data.
* Find a list of the top 1000 songs of your favorite genre or decade.
* Find the 1000 top-rated movies from your favorite movie rating source.
* Get data about your favorite sports team/teams.

Example functions include:
* The sum, average, min, and/or max of a column.
* The shortest/longest word in a column.
* The number of times a specific value appears in a column.

### Test
How can you demonstrate in your code that all your class methods function correctly?

How can you demonstrate in your code that your program successfully reads and stores 1000+ objects from your data file?

How can you demonstrate in your code that your calculation function works correctly?

=======
>>>>>>> 4fcc178 (Initial commit)
### Report 
You must write a report about your project. Answer the following questions directly in this section of the README file:
* What each of the 5+ attributes represent.
* Where you got the data from.
* Why you chose that data set.
* How the entries are ordered by default.
* How you know your functions work correctly.
* Why you chose that calculation for your data set.

**Note: Any code that was not authored by yourself or the instructor must be cited in your report. This includes the use of concepts not taught in lecture.**

<<<<<<< HEAD
## Submit

You must include your source files, your data file(s), CMakeLists.txt, and your updated README.md file that contains your report to your repository. Submit to Gradescope using the GitHub repository link, double-check that all the correct files are there, and wait for the autograder to provide feedback.


## Grading
The project is out of 60 points.

| Points Possible | Description of requirement |
|------------------- | ----------------------------- |
| 5 pts | Data set satisfies requirements |
| 5 pts	| Program compiles and runs. |
| 5 pts	| Code style. Readable, naming style is consistent, comments where appropriate. |
| 10 pts | Class satisfies requirements. |
| 5 pts | You have two global functions as described above. |
| 10 pts | File input works correctly. |
| 5 pts | Data is stored in a vector of 1000+ objects. |
| 5 pts | You test your code to demonstrate that everything works correctly. |
| 10 pts | Report satisfies requirements, is easily readable, and is professional. |
=======
Project Report
CS 124/Fall 2022
Project 1
Abby Sweet

Data Set
This Data set is from the town of Cambridge Massachusetts and is their 
licensed dogs in 2021. I discovered this from the data set ideas, where 
I found data sets from the town of Cambridge, then this data set.
This data set had 6 attributes listed below:
* Dog_Name - the name of the licensed dog
* Dog_Breed - the breed of the licensed dog
* Location_masked - the location both latitude and longitude together in one point 
* Latitude_masked - the latitude of the location of the dog
* Longitude_masked - the longitude of the location of the dog
* Neighborhood - the neighborhood which the dog lives in

The entries seem to ave no particular ordering or organization.

I chose this data set because I like dogs and this seemed fun to 
have my project on and about dogs.

Correctness
My code is correct and put into a vector because when proving the code 
works by asking for the size of the vector in which all the dogs are listed.
It works because there are 3,942 dogs the file says there is 3,943 rows but 
that is counting the header of the file. 

Calculation
I chose to make a function that goes through the vector and compares the name 
of the dogs against the name luna, and records the amount of Luna's in the file
and prints the total Luna's at the end in the main function.
>>>>>>> 4fcc178 (Initial commit)

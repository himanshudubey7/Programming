/*Strict mode : It helps us to make it easiear for us 
us developers to write secure code

Strict mode help us to avoid accidental errors
because of 2 reasons :
1. strict mode forbids us to do certain things 
2. It will actually create visible errors for us in 
certain situation in which without strict mode
JavaScript will fail silently*/

/*"use strict";
let hasDriverLisence = false;
const passTest = true;
if (passTest) hasDriveLisence = true;
if (hasDriverLisence) console.log("I can drive :D");
*/

//--------------------------------------------------------------------------------------------------------------

// //Function in JS
// function logger() {
//   console.log("my name is himanshu");
// }

// logger(); //calling a function
// logger();
// logger();

// function fruitProcessor(apples, oranges) {
//   console.log(apples, oranges);
//   const juice = `juice with ${apples} apples and ${oranges} oranges`;
//   return juice;
// }
// console.log(fruitProcessor(3, 4));

//----------------------------------------------------------------------------------------------------------------------------------


//Fucntion Declartion and Expression

//fucntion to calculate age using function declartion
//we can call function declration before defining it
// console.log(calcAge(2002));
// function calcAge(birthYear) {
//   const age = 2023 - birthYear;
//   return age;
// }
// const age = calcAge(2002);
// console.log(age);

// //function expression

// const calcage2 = function (birthYear) {
//   return 2023 - birthYear;
// };
// const age2 = calcage2(2002);
// console.log(age2);


//-----------------------------------------------------------------------------------------------------------


//ARROW FUNCTION -> special form of function expression but shorter and much faster

//function expression
/*
const calcage2 = function (birthYear) {
  return 2023 - birthYear;
};
const age2 = calcage2(2002);
console.log(age2);

//arrow function
const calcAge3 = (birthYear) => 2023 - birthYear; //return happens implicitly
//here so we don't need the keyword "return" in arrow functions
const age3 = calcAge3(2002);
console.log(age3);

const yearUntilRetirement = (birthYear, firstName) => {
  const age = 2023 - birthYear;
  const retirement = 65 - age;
  //return retirement;
  return `${firstName} retires in ${retirement}`;
};
console.log(yearUntilRetirement(2002, "himanshu"));

*/
//------------------------------------------------------------------------------------------------------------------------------

/*
//FUNCTIONS CALLING OTHER FUNCTIONS

function cutFruit(fruit) {
  return fruit * 4;
}

function fruitProcessor(apples, oranges) {
  const orangespeice = cutFruit(oranges);
  const applepeices = cutFruit(apples);
  const juice = `juice with ${applepeices} apples and ${orangespeice} oranges.`;
  return juice;
}

console.log(fruitProcessor(2, 3));

*/

//---------------------------------------------------------------------------------------------------------------------


// INTRODUCTION TO ARRAYS

// const friends = ["aniket", " ankit", "avinash"];
// console.log(friends);

//different way of creating a array
// const years1 = new Array(2002, 2003, 2004);
// console.log(friends[0]);

// console.log(friends.length); //amount of elements in array
// console.log(friends[friends.length - 1]);

// even though array is declared is const but we can mutate it.

//array in javascript can hold values of different types

// const himanshu = ["himanshu", "dubey", 2023 - 2002, "student", friends];
// console.log(himanshu);

// //Exercise
// const calcAge = function (birthYear) {
//   return 2023 - birthYear;
// };
// const years = [1990, 1967, 2002, 2010, 2003];
// const age1 = calcAge(years[0]);
// const age2 = calcAge(years[1]);
// const age3 = calcAge(years[2]);
// console.log(age1, age2, age3);

// const ages = [calcAge(years[0]), calcAge(years[1])];
// console.log(ages);

//------------------------------------------------------------------------------------------------------------------------------

/*
//BASIC ARRAY OPERATIONS (METHOD);
const friends = ["aniket", "ankit", "avinash"];
const newLength = friends.push("kartikey"); // add element to the end of array and also return
// length of the new array.
console.log(friends);
console.log(newLength);

//unshift method
friends.unshift("harshit"); // add element at the start of the arrray
console.log(friends);
// pop method
const popped = friends.pop(); //removes the last element and returns the element that is removed.

console.log(friends);
//shift method
//removes first element from the array and returns this element.
const removed = friends.shift();
console.log(friends);

//index Of() method --> returns the index of the element if it is present otherwise it returns -1;
z
console.log(friends.indexOf("aniket"));
console.log(friends);
//includes method --> more newer method and returns result in boolean type
console.log(friends.includes("ankit"));

*/

/*
// CHALLENGE QUESTION :
// CODING CHALLENGE - 2
function calcTip(amount) {
  if (amount >= 50 && amount <= 300) {
    tips = 0.15 * amount;
  } else {
    tips = 0.2 * amount;
  }
  return tips;
}
const bills = [125, 555, 44];
const tip = new Array(3);
tip[0] = calcTip(bills[0]);
tip[1] = calcTip(bills[1]);
tip[2] = calcTip(bills[2]);
const total = new Array(3);
total[0] = bills[0] + tip[0];
total[1] = bills[1] + tip[1];
total[2] = bills[2] + tip[2];
console.log(tip);
console.log(total);

*/

//--------------------------------------------------------------------------------------------------------------------

//INTRODUCTION TO OBJECTS:
//with the help  of objects we can actully name every key individually that what kind of value it stores
/*
const himanshu = {
  firstName: "Himanshu",
  lastName: "Dubey",
  age: 21,
  job: "student",
  friends: ["aniket", "avinash", "ankit"],
};
console.log(himanshu);
*/
//-------------------------------------------------------------------------------------------------------------------------------------
/** 
 * 

//dot vs bracket notation to retrive data from an object
//DOT NOTATION
const himanshu = {
  firstName: "Himanshu",
  lastName: "Dubey",
  age: 21,
  job: "student",
  friends: ["aniket", "avinash", "ankit"],
};
console.log(himanshu.lastName);
console.log(himanshu["lastName"]);

//we can also do this using bracket notation as it accepts the expression

const nameKey = "Name";
console.log(himanshu["first" + nameKey]);
/* A better understanding of bracket notation can be understood 
using the input method prompt() that helps the user to input the data 
*/


// const himanshu = {
//   firstName: "Himanshu",
//   lastName: "Dubey",
//   age: 21,
//   job: "student",
//   friends: ["aniket", "avinash", "ankit"],
// }; 

// const interested = prompt(
//   "what do you want to know about himanshu? choose between first name , last name , age , job , his friends ?"
// );
// const req = himanshu[interested];
// if (req) {
//   console.log(himanshu[interested]);
// } else {
//   console.log("wrong request!!!");
// }

// //how to add new properties to object using dot and bracket notation
// himanshu.place = "Kanpur";
// himanshu["twitter"] = "@himanshukumardubey";
// console.log(himanshu);

// //Challenge : print the below sentence using retiriveing data from the created object
// //" Himanshu has 3 friends , and his best friend is called Avinash"

// console.log(
//   `${himanshu.firstName} has ${himanshu.friends.length} friends, and his best friend is called ${himanshu.friends[1]}`
// );

//------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

//OBJECT METHODS :
//Object methods are functions attached directly to objects which perform operations on them or manipulate their values in some way

const himanshu = {
  firstName: "Himanshu",
  lastName: "Dubey",
  age: 21,
  birthYear: 2002,
  hasDriverlisence: false,
  job: "student",
  friends: ["aniket", "avinash", "ankit"],
//   calcAge: function (birthYear) {
//     // using function as a key value pair in a object
//     return 2023 - birthYear;
//   }, //any function which is attached to a object is called an object method
//  // we can do so using function experession  and not using function declartion

  //use of 'this' keyword:
  // this keyword points to the object calling the method .
  // here the this keyword points to the object himanshu
  // calcAge: function () {
  //   //no need to pass arguements when this keywords is used as it already points to the object

  //   return 2023 - this.birthYear;
  // },

  //we can also use the this keyword to create a new property lets say age
  // so that if we need age multiple times we can accesss it directly from the
  // property we created .
  calcAge: function () {
    this.age = 2023 - this.birthYear;
    return this.age;
  },

  getsummary: function () {
    const summ = `${this.firstName} is a ${this.calcAge()} years old ${
      this.job
    } , and he has ${this.hasDriverlisence ? "a" : "no"} driver's lisence`;
    return summ;
  },
};
console.log("using this keyword = " + himanshu.calcAge()); //when using this keyword no need to pass arguements

console.log("using dot notation  = " + himanshu.calcAge(himanshu.birthYear));
// using bracket notation
console.log(
  "using bracket notation  = " + himanshu["calcAge"](himanshu["birthYear"])
);

console.log("using the newly created property method = " + himanshu.age);

//CHALLENGE:
//"Himanshu is a 21 year old student , and he has a driver's lisence "

console.log(himanshu.getsummary());

*/

//-----------------------------------------------------------------------------------------------------------------------------------------
/*

//INTRODUCTION TO LOOPS😑
//For loop

for (let rep = 1; rep <= 10; rep++) {
  console.log(rep);
}
*/
//---------------------------------------------------------------------------------------------------------------

/*
//using for loop for traversing array and use of while loop

const friends = ["aniket", " ankit", "avinash"];

const himanshu = ["himanshu", "dubey", 2023 - 2002, "student", friends, true];

const types = [];
console.log(himanshu);
for (let i = 0; i < himanshu.length; i++) {
  console.log(himanshu[i], typeof himanshu[i]);

  // //filling types array
  // types[i] = typeof himanshu[i];
  types.push(typeof himanshu[i]);
}
console.log(types);

// let i = 1;
// while (i != 11) {
//   console.log(i);
//   i++;
// }
*/
//--------------------------------------------------------------------------------------------------------------------------------------

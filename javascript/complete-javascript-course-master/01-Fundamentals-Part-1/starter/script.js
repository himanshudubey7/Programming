//this is an external file which is linked to an html file
// this is an single line comment
/* this is an multiline commnet */
// let js = "amazing";
// if (js == "amazing") alert("javascript is FUN!!");
// console.log(40 + 58);
// let firstNAME = "Himanshu";
// //camelCase for variables and functions
// console.log(firstNAME);
// let PI = 3.14;
// //variables name must be descriptive
// let myFirstjob = "programmer";
// let mycurrentJob = "student";
// console.log("hello world!!");
// console.log(myFirstjob);
// console.log(true);
// let javascriptIsFun = true;
// console.log(javascriptIsFun);
// // ------x----x-----xx------x-----
// //typeof opeator is used to represet the type of value
// console.log(typeof true);
// console.log(typeof 23);
// console.log(typeof "jonas");
// //----x----x-----x-----x-----x------x---

// //dynamic typing in javascript
// javascriptIsFun = "yes"; // now the varible is changed to string
// console.log(typeof javascriptIsFun);

// //------x----x----x----x------x-----x------

// //undefined datatype
// let year;
// console.log(year);
// console.log(typeof year);

// year = 1991;
// console.log(typeof year);
// console.log(year);

// //------x----x-----x------x-------x-----x-----

// console.log(typeof null);
//----------------------------------------------------------------------------------------------------------------------------------------------------


 //DATATYPE CONVERSION CONFUSION 
//  let score = "33abc"
//  console.log(typeof score);
//  let valueInNumber = Number(score)
//  console.log( valueInNumber);
//  //-------------------------------------
//   score = null
//  console.log(typeof score);
//   valueInNumber = Number(score)
//  console.log( valueInNumber);
//  //-------------------------------------
//  score = undefined
//  console.log(typeof score);
//   valueInNumber = Number(score)
//  console.log( valueInNumber);

 //"33" => 33
 // "33abc" => NaN type --> Number
 //true => 1 ; false => 0
 
 


/*
let age = 30;
age = 31; // here we have muated the variable or reassigned
const birthyear = 1991;
//birthyear = 1990; // this is not valid as value with const cannot be mutated
// it is a good practice that we are confirm that if a varible value is not changing then it should be written using const

// variable declartion using 'var' like var a ;
// it is an alternate method
// we will learn  more about it later

// it is even possible not to declare any variable and use the value as it is
// for example
lastName = "dubey";
console.log(lastName);
*/
//-------------------------------------------------------------------------------------------------------------------------------------------------------

// const now = 2037;
// const ageJonas = now - 1991;
// const ageSarah = now - 2019;
// console.log(ageJonas, ageSarah);

// console.log(ageJonas * 2, ageJonas / 10, 2 ** 3);
// // 2**3 means 2 to the power 3

// const firstNAME = "Himanshu";
// const lastName = "Dubey";
// console.log(firstNAME + " " + lastName);
// const age = ageSarah>= 18;
// console.log(age);

//----------------------------------------------------------------------------------------------------------------

/*
//coding challenge -1 and coding challenge -2 
const markweight = 78;
const markHeight = 1.69;
const johnWeight = 92;
const johnHeight = 1.95;

//bmi = mass/(height * height)
const markBmi = markweight / markHeight ** 2;
const johnBmi = johnWeight / johnHeight ** 2;
let markHigherBMI = markBmi < johnBmi;
if (markHigherBMI) console.log("mark's BMI is higher than John's ");
else console.log("john's bmi is higher than mark's");
console.log(markHigherBMI);
*/
//--------------------------------------------------------------------------------------------------------------------------

// const firstNAME = "Himanshu";
// const job = "student";
// const birthyear = 2002;
// const year = 2023;
// const ans =
//   "I'm " + firstNAME + ", a " + (year - birthyear) + " year old " + job + " ! ";
// console.log(ans);

// //template literals '
// // we use template strings using backticks --> ``
// const ansNew = `I'm ${firstNAME} a ${year - birthyear} year old ${job} ! `;
// console.log(ansNew);

// // we can also use backticks to write a regular string
// console.log(`just a regular string .....`);

// //another use of template string is to make a multiline string
// // without using the template string
// console.log(
//   "string with\n\
// multiple\n\
// lines"
// );

// //with using template string
// console.log(`string with
// multiple 
// lines `);


//----------------------------------------------------------------------------------------------------------------------------

//Decision Making
/*
const age = 17;
const isOldEnough = age >= 18;
if (isOldEnough == true) {
  console.log("DL is valid");
} else {
  console.log("DL is not valid");
  console.log(`years left  = ${18 - age}`);
}
*/

//---------------------------------------------------------------------------------------------


//TYPES CONVERSION AND COERSION

// //type conversion
// const inputyear = "1991";
// console.log(inputyear + 18);
// console.log(Number(inputyear));
// console.log(String(23) + 19); //2319

// //type coresion
// console.log("I am " + 23 + " years old");
// console.log("23" - "10" - 3);
// console.log("23" * "2");

// let n = "1" + 1; //11
// n = n - 1; //11-1=10
// console.log(n);

//----------------------------------------------------------------------------------------------------------


/*
//Truthy and Falsy Values

//5 falsy values : 0 ,'', undefined , null , NaN;
console.log(Boolean(0));
console.log(Boolean(NaN));
console.log(Boolean("himanshu"));

//we don't use Boolean function actually because JS does the conversion coresion
// for example:

let height = 0;
if (height) {
  console.log("YAY! Height is defined ");
} else console.log("Height is UNDEFINED!");

*/
//-----------------------------------------------------------------------------------------------------


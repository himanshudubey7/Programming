'use strict';

// Data needed for a later exercise
const flights =
  '_Delayed_Departure;fao93766109;txl2133758440;11:25+_Arrival;bru0943384722;fao93766109;11:45+_Delayed_Arrival;hel7439299980;fao93766109;12:05+_Departure;fao93766109;lis2323639855;12:30';

// Data needed for first part of the section
const restaurant = {
  name: 'Classico Italiano',
  location: 'Via Angelo Tavanti 23, Firenze, Italy',
  categories: ['Italian', 'Pizzeria', 'Vegetarian', 'Organic'],
  starterMenu: ['Focaccia', 'Bruschetta', 'Garlic Bread', 'Caprese Salad'],
  mainMenu: ['Pizza', 'Pasta', 'Risotto'],

  order: function(straterIndex , mainIndex){
    return [this.starterMenu[straterIndex],this.mainMenu[mainIndex]];
  },
  openingHours: {
    thu: {
      open: 12,
      close: 22,
    },
    fri: {
      open: 11,
      close: 23,
    },
    sat: {
      open: 0, // Open 24 hours
      close: 24,
    },
  },
};

//DESTRUCTING OBJECTS:




//----------------------------------------------------------------------------------------------

// /*
// Destructuring is an ES6 feature, and it is an way of unpacking values from an array or an object into seperate variabels.
// In other words destructuring a complex data structure into simpler data structure such as a variable.
//  */
// //regular method
// const arr= [2, 3, 5];
// const a= arr[0];
// const b=  arr[1];
// const c = arr[2];
// //desturcturing
// const [x,y,z] = arr;
// console.log(x,y,z);// the original array is still not affected

// // const[first , ,second] = restaurant.categories;// to skip a element use hole in the desturucting
// // console.log(first,second)

// let [main ,secondary] = restaurant.categories;
// console.log(main, secondary);
// [main,secondary] = [secondary,main];// to switch two elements 
// console.log(main, secondary);
// // console.log(restaurant.order(2,0));
// const[starter , mainCourse] = restaurant.order(2,0);
// console.log(starter , mainCourse);

// //nested destructuring
// const nested = [2,4,5,[7,8]];
// const[ v1 , , , [i,j]] = nested;
// console.log(v1);
// console.log(i,j);

// //Default values
// const[p=1,q=1,r=1]=[8,9];
// console.log(p, q, r);

//------------------------------------------------------------------------------------------------

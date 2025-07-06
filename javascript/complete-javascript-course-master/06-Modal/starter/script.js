'use strict';

const modal = document.querySelector('.modal');
const overlay = document.querySelector('.overlay');
const btnClose = document.querySelector('.close-modal');
const btnsOpenModal = document.querySelectorAll('.show-modal');
console.log(btnsOpenModal);
/*
Here only the first one will be selected 
Here we can see the limitations of querySelector that if
there are multiple elements with same name then 
only the first one will be selected.

so, we will have to use querySelectorAll ... so we will get
 a array or node list
 
*/

// to open the modal
const openModel = function () {
  // to display the modal window we are gonna use classList property
  // this classList property have its own properties
  modal.classList.remove('hidden'); // we do not use '.' here to pass class name
  overlay.classList.remove('hidden'); // we can pass multiple classes using comma without using dot

  // we can also do the same thing using
  // modal.style.display = 'block';
};

// to close the modal
const close = function () {
  modal.classList.add('hidden');
  overlay.classList.add('hidden');
};

// keyboard events --> they are called the global events because they do not happen on one  element rather they affect on whole document

for (let i = 0; i < btnsOpenModal.length; i++) {
  btnsOpenModal[i].addEventListener('click', openModel);

  btnClose.addEventListener('click', close);

  overlay.addEventListener('click', close);
}

/**
 * There are 3 types of event in keyboard :
 * keydown: it fires as soon as the key is pressed
 * keypress: it fires when the key is being holded
 * keyup: it fires as soon as we lift up our finger from the key
 */
document.addEventListener('keydown', function (e) {
  // console.log('A key was pressed'); // now this keypress event will happen for any key pressed like H ,Y etc. but we do not want that we only want to close the modal as soon as the esc key is pressed
  /**
   * When ever a event happens the eventlistner function generates an object which has all the information regarding that event
   * so if a keydown event happens then which key was pressed will be stord in that object
   * and we can access the object in the eventhandler function
   * for that we will pass an arguement in the function which will contain that object and we can see that by logging the arguement.
   */
  //console.log(e.key);

  if (e.key === 'Escape' && !modal.classList.contains('hidden')) {
    close();
  }
}); // we are listening the event for the whole document

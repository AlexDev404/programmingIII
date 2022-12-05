// Yet another object
let library = {};

// Raw Objects - Can't be done in C++
let book0 = {
  // properties
  pages: 100, // value
  color: "pink",
  title: "Mathematics, Volume One",
  pageSize: "Letter",
};

// Adding object to object
library = { ...library, book0: book0 };

// Classes - Classes make objects
// Entire thing is called an object

// Class without constructors
class book {
  // properties
  pages;
  color;
  title;
  pageSize = "Letter";
}

// Class **with** constructors
class newBook {
  // properties
  pages;
  color;
  title;
  pageSize;
  constructor(pages, color, title, pageSize = "Letter") {
    this.pages = pages; // value
    this.color = color;
    this.title = title;
    this.pageSize = pageSize;
  }
}

// Accessing an object's properties
// object__class.property
// console.log("One book\n", book0.pages);

// Using classes and objects
book2 = new book();
book2.pages = 200;
book2.color = "violet";
book2.title = "Lord of the Rings";
book2.pageSize = "Letter";
// console.log("Book Without Constructors\n", book2);

library = { ...library, book2 };

// Using classes and objects with constructors
let book3 = new newBook(200, "violet", "Lord of the Rings");
// console.log("Book With Constructors\n", book3);
library = { ...library, book3 };

// Printing out an entire object
console.log("\n\nBook Library\n", "==========\n", library);

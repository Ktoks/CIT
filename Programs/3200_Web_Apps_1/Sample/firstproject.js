console.log("this is fun");

var lunchPlaces;
// querying the dom(the html changed by js and css files)
var heading = document.querySelector("#heading");

//how to use it:
heading.innerHTML = "What's up?";
heading.style.color = "#FF00FF";

// when do you put what you want into javascript??
// When it's dynamic, in response to user input.

// javascript doesn't like '-'s so convention is cammelcase

var button = document.querySelector("#button");

var lunchPlaces = [
    "Panda Express",
    "Chick-fil-a",
    "In-N-Out"
]; // how to make a list

// event - when you want a reaction, write a "function"
// or an event handler



button.onclick = function(){
    //heading.style.color = "#0000FF";
    var myList = document.querySelector("#my-list");
    //console.log("my list", mylist); // used to print to console
    var listItem = document.createElement("li");
    
    var myField = document.querySelector("#my-field");
    var name = myField.value;
    
    var randomIndex = Math.floor(Math.random() * lunchPlaces.length);
    listItem.innerHTML = name + ":" + lunchPlaces[randomIndex];
    myList.appendChild(listItem);
}; // how to make a button and cause change

///////////////////////////////////////////////////////////
var showThePandas = function (restaurants) {
    pandas.forEach(function(restaurant){
        var listItem = document.createElement("li");
        listItem.innerHTML = restaurant.name + " (" + restaurant.address + ")";
        myList.appendChild(listItem);
        
    });
}; // how to show your list immediately///////////////////

// below is how to get data asynchronously from your server
// MYURL below is the actual link from your data from myjson.com
// .then() will run whatever function you tell it to run
// apon return from MYURL. Function(response) runs the function
// of your choice, which receives the response. {response.json() 
// grabs the json data from that site,

var createPanda = function (name) {
    var someData = "name=" + encodeURIComponent(name);
    //var someOtherData = `name=${encodeURIComponent(name)}`; // this is essentially the same as above, just can inject variables into your string
    fetch("http://localhost:8080/pandas",{
    method: "POST",
    body: someData,
    Headers: {
        "Content-type": "application/x-www-form-urlencoded"
    }
}).then(function(response) {
    console.log("cool. that panda was created.")
});
}

// PAGE LOAD this below should be in a function to be recalled similar to refreshing the page - reset innerhtml to refresh the list
fetch("http://localhost:8080/pandas").then(function(response){
    response.json().then(function(thePandas){
        console.log("THE PANDAS:", thePandas);
        // lunchPlaces = theData;
        showThePandas(thePandas);
    });
});

//create
//->save/append
//f.write("message" + "/n")
//list
//->read from file
//json.dumps(thelist)
//readlines()

// step one: make a list of input
// step two: make it into json
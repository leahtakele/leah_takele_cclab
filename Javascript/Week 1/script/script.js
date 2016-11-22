document.addEventListener("DOMContentLoaded", function () {

	console.log("Hello!");
	var one = document.getElementById("one");
	one.style.backgroundColor = "pink";

	var two = document.getElementById("two");
	two.style.backgroundColor = "black";

	var three = document.getElementById("three");
	three.style.backgroundColor = "grey";

	var p = document.getElementsByClassName("parent");
	p[0].style.backgroundColor = "white";


	var degree = 0;
	var rotateDiv = function (){
		degree = degree + 15.0;
		p[0].style.transform = "rotate(" + degree + "deg)";
	};

	window.setInterval(rotateDiv, 20);


});
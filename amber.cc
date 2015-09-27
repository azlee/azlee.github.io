/* Amber Lee 
CSS for amberzlee.com */
@keyframes animatedBackground {
	to { background-position: 0  668px; }
}

@-webkit-keyframes animatedBackground{
	to { background-position: 0 668px; }
}

#animate-area {
	width:100%;
	height:105%;
	background-image:url("balloons1.png");
	background-position:0px 0px;
	background-repeat:background-repeat;

	animation: animatedBackground 12s linear infinite;
	-ms-animation: animatedBackground 12s linear infinite;
    -moz-animation: animatedBackground 12s linear infinite;
    -webkit-animation: animatedBackground 12s linear infinite;
}

#content-wrapper
{
	display:none;	
}
 
#navbar-brand {
	font-size:25px;
	color: #707070;
	font-family:'Dancing Script';
} 

body, html {height: 100%; 
margin-right:0;
margin-top:0;}
/*--home--*/



#home h1{
padding-top:260px;
	padding-bottom:260px;
	text-align:center;
	font-size:80px;
	text-decoration:underline;
	font-family: 'Dancing Script', cursive;
}

#animate-area img {
    position: absolute;
    margin: auto;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
}
/*--intro--*/
#hold {
	background-size:cover;
}
#intro {
	min-height:100%;
	font-family:'Source Sans Pro';
	height:auto;
	letter-spacing: 4px;
	background-color:#b9c4de;
    display:table;
    padding-bottom:40px;
    position:relative;
    width:100%;
    -webkit-background-size:cover;
    -moz-background-size:cover;
    -o-background-size:cover;
    background-size:cover;  -webkit-animation: fadein 3s; /* Safari and Chrome */
}

#intro h3 {
	font-family:'Lato';
	display:block;
	font-size:14px;
	font-weight:bold;
	color:#fff;
	text-transform:uppercase;
	padding-bottom:20px;
	letter-spacing:2px;

	margin: -2px auto 0 auto;
	padding: 18px;
	height: auto;
	line-height:240%;
}

#intro h3 span {
	background-color:#5d7591;

	padding:18px;

}

#intro h3 a:hover {
	font-family:'Lato';
	color:#fff;
}
#intro h4 {
	font-size:15px;
	color:#773b4d;
	padding-bottom:20px;
}
#intro h4 a{
	color:#989898;
}

#intro h1 {
	margin-top:45px;
	font-family:'Source Sans Pro';
	font-size:29px;
	font-weight:normal;
	padding-top:40px;
	color:#773b4d;
	padding-bottom:10px;"
}

#intro button a, button a:hover {
	font-family:'Source Sans Pro';
	font-size:14px;
	letter-spacing:2px;
	color:#5d7591;
}

#intro h4{
	line-height:150%;
	margin-left:15%;
	margin-right:15%;
}

#intro h4 a:hover {
	font-family:'Source Sans Pro';
	color:#1e90ff;
}
#intro button {
	margin-bottom:45px;
	border-width:3px;
	font-weight:bold;
	letter-spacing:1px;
	text-transform:uppercase;
	margin-top:25px;
	border-color:transparent;
	background-color:#fff;
	-webkit-transition: all .6s ease;
    -moz-transition: all .6s ease;
    -o-transition: all .6s ease;
    -ms-transition: all .6s ease;
    transition: all .6s ease; 
}

#intro button:hover {

	border-color:transparent;
	overflow:hidden;
	background-color:#E8E8E8 ;
	-webkit-transition: all .3s ease;
    -moz-transition: all .3s ease;
    -o-transition: all .3s ease;
    -ms-transition: all .3s ease;
    transition: all .3s ease; 
}

#intro a{
	-webkit-transition: all .3s ease;
     -moz-transition: all .3s ease;
       -o-transition: all .3s ease;
      -ms-transition: all .3s ease;
          transition: all .3s ease; 
}
#intro a:hover {
	text-decoration:none;
	-webkit-transition: all .3s ease;
     -moz-transition: all .3s ease;
       -o-transition: all .3s ease;
      -ms-transition: all .3s ease;
          transition: all .3s ease; 
}

.text-vcenter {
	color:#111;
	font-family:'Source Sans Pro', sans-Serif;
	display: table-cell;
	text-align:center;
	vertical-align:middle;
}

.text-vcenter h1 {
	letter-spacing:.01em;
	font-size:2.9em;
	font-weight:700;
	margin:0;
	padding:0;
}

#aboutme {

	letter-spacing:2px;
	padding:20px 0;
	margin-bottom:0px;
	padding-bottom:0;
	background: url('tree.jpg') no-repeat center center fixed;
	display:table;
	height:100%;
	min-width:100%;
	-webkit-background-size:cover;
	-moz-background-size:cover;
	-o-background-size:cover;
	background-size:cover;
	position:relative;
}

#aboutme h3 {
	color:#505050;
	margin-bottom:15px;
	font-family:'Open Sans';
	font-size:22px;

}

#aboutme .panel {
	font-size:30px;
	opacity:.53;

}

#aboutme p{
	font-weight:normal;
	font-family:'Lato' sans-serif;
	color:#111;
	font-size:15px;
	letter-spacing:.5px;
}

#moreaboutme {
	color:#696969;
	background-color:#b0c9c5;
	letter-spacing:1.5px;
	font-family:'Source Sans Pro' sans-Serif;
}

#moreaboutme h3 {
	font-family:'Open Sans';
	font-size:22px;
}

#moreaboutme h4 {
	padding-top:7px;
}
#moreaboutme p{
	font-size:14px;
	padding-top:10px;
	padding-bottom:20px;
}

/* skillbar */

.skillbar {
	position:relative;
	display:block;
	margin-bottom:15px;
	width:100%;
	background:#eee;
	height:35px;
	border-radius:3px;
	-moz-border-radius:3px;
	-webkit-border-radius:3px;
	-webkit-transition:0.4s ease-out;
	-moz-transition:0.4s ease-out;
	-ms-transition:0.4s ease-out;
	-o-transition:0.4s ease-out;
	transition:0.4s ease-out;
	-webkit-transition-property:width, background-color;
	-moz-transition-property:width, background-color;
	-ms-transition-property:width, background-color;
	-o-transition-property:width, background-color;
	transition-property:width, background-color;
}

.skillbar-title {
	position:absolute;
	top:0;
	left:0;
width:143px;
	font-weight:bold;
	font-size:13px;
	color:#ffffff;
	background:#6adcfa;
	-webkit-border-top-left-radius:3px;
	-webkit-border-bottom-left-radius:4px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-bottomleft:3px;
	border-top-left-radius:3px;
	border-bottom-left-radius:3px;
}

.skillbar-title span {
	font-size:10px;
	display:block;
	background:rgba(0, 0, 0, 0.1);
	padding:0 20px;
	height:35px;
	line-height:35px;
	-webkit-border-top-left-radius:3px;
	-webkit-border-bottom-left-radius:3px;
	-moz-border-radius-topleft:3px;
	-moz-border-radius-bottomleft:3px;
	border-top-left-radius:3px;
	border-bottom-left-radius:3px;
}

.skillbar-bar {
	height:35px;
	width:0px;
	background:#6adcfa;
	border-radius:3px;
	-moz-border-radius:3px;
	-webkit-border-radius:3px;
}

.skill-bar-percent {
	position:absolute;
	right:10px;
	top:0;
	font-size:11px;
	height:35px;
	line-height:35px;
	color:#ffffff;
	color:rgba(0, 0, 0, 0.4);
}
/*end skillbar */


#icon {
	border:2px solid #111;
	border-radius:10%;
	display:inline-block;
	vertical-align:middle;
	height:140px;
	line-height:140px;
	width:140px;
}

/*--footer--*/
#contactme{
	font-family:'Open Sans';
    height:240px;
	color:#eee9e9;
	background-color:#111;
	margin-bottom:0;
	position:absolute;
	width:100%;
	padding-bottom:0;
}


#contactme img{
	width:45px;
	height:45px;
	margin-left:5px;
}

.logos {
	width:275px;
	margin:0px auto;
	padding-top:50px;
}

.logos img {
	-webkit-transition: all .8s ease;
	-moz-transition: all .8s ease;
	-o-transition:all .8s ease;
	-ms-transition:all .8s ease;
	transition:all .8s ease;
}

#contactme p{
	padding-bottom:5px;
	font-size:11px;
	font-family:'Open Sans';
	text-align:center;
}

#contactme img:hover {
	-webkit-transform:rotate(360deg);
	-moz-transform:rotate(360deg);
	-o-transform:rotate(360deg);
	-ms-transform:rotate(360deg);
	transform:rotate(360deg);
}

.fade {
	opacity:0;
	-webkit-transition: all .8s ease;
	-moz-transition: all .8s ease;
	-o-transition:all .8s ease;
	-ms-transition:all .8s ease;
	transition:all .8s ease;
}
.fade.in-view{
	opacity:1;
	-webkit-transition: all .7s ease;
	-moz-transition: all .7s ease;
	-o-transition:all .7s ease;
	-ms-transition:all .7s ease;
	transition:all .7s ease;
}

#content-wrapper
{
	display:none;
}

#wrapper {
	min-height:100%;
	position:relative;
}

.fade {
	opacity:0;
	-webkit-transition: all .7s ease;
	-moz-transition: all .7s ease;
	-o-transition:all .7s ease;
	-ms-transition:all .7s ease;
	transition:all .7s ease;
}
.fade.in-view{
	opacity:1;
}

.jumbo {
	background:#eeefff;
	width:100%
}

.fade-out {
	opacity:0;
}

/*GROW*/
.grow img{
  height: 150px;
  width: 150px;
 
  -webkit-transition: all 1s ease;
     -moz-transition: all 1s ease;
       -o-transition: all 1s ease;
      -ms-transition: all 1s ease;
          transition: all 1s ease;
}

* {
  -webkit-box-sizing: border-box;
     -moz-box-sizing: border-box;
      -ms-box-sizing: border-box;
          box-sizing: border-box;
} 

.grow img:hover {
  width: 200px;
  height: 200px;
}

.image {
  border: 4px solid #fff;  
  border-radius:75px;
  height: 150px;
  width: 150px;
  overflow:hidden;
   
  -webkit-box-shadow: 5px 5px 5px #111;
          box-shadow: 5px 5px 5px #111;  
}

#fade {
	-webkit-transition: all 1s ease;
     -moz-transition: all 1s ease;
       -o-transition: all 1s ease;
      -ms-transition: all 1s ease;
          transition: all 1s ease;
	opacity:0;
}

#in-view {
	-webkit-transition: all 1s ease;
     -moz-transition: all 1s ease;
       -o-transition: all 1s ease;
      -ms-transition: all 1s ease;
          transition: all 1s ease;
	opacity:100;
}

#quote {
	color:#8b5e65;
	min-width:100%;
	background: url("illustrator.jpg") no-repeat center center fixed;

	background-repeat:no-repeat;
	background-size:cover;
background-position:center center;

}

#quote h4 {
	text-align:center;
	font-family:'Source Sans Pro';
	display:block;
	font-size:15px;
	font-weight:bold;
	text-transform:uppercase;
	padding-bottom:20px;
	letter-spacing:2px;

	margin: -2px auto 0 auto;
	padding: 18px;
	height: auto;
	line-height:260%;
}


#quote h4 span {
	background-color:#f5f5eb;
	background-color:rgba(245,245,235,.8);

	padding:20px;

}

#portfolio a {
	color:#e0e0e0;
}

#portfolio a:hover {
	color:#c0ffff;
	box-shadow:none;
	text-decoration:none;

  -webkit-transition: all .3s ease;
     -moz-transition: all .3s ease;
       -o-transition: all .3s ease;
      -ms-transition: all .3s ease;
          transition: all .3s ease;
}

@media all and (max-width: 1200px) { /* screen size until 1200px */
    body {
        font-size: 1.5em; /* 1.5x default size */
    }
}
@media all and (max-width: 1000px) { /* screen size until 1000px */
    body {
        font-size: 1.2em; /* 1.2x default size */
        }
    }
@media all and (max-width: 500px) { /* screen size until 500px */
    body {
        font-size: 0.8em; /* 0.8x default size */
        }
    }


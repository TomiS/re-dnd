open Dnd__Units;

module Html = Dnd__Html;

let px = x => x->Float.toString ++ "px";
let stripPx = x => x->Js.String.replace("px", "", _)->Float.fromString;

let animationFunction = "cubic-bezier(0.2, 0, 0, 1)";
let animationDuration = 200;
let resetAnimationsFactor = (-70);
let finishDropFactor = 20;

let transition = prop =>
  prop ++ " " ++ animationDuration->Int.toString ++ "ms " ++ animationFunction;

let translate = (x, y) => "translate(" ++ x->px ++ ", " ++ y->px ++ ")";

let getComputedStyle = element =>
  Webapi.Dom.(
    window->Window.getComputedStyle(element->Html.castHtmlElementToElement, _)
  );

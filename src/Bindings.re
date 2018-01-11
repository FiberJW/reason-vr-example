module AframeReact = {
  module Assets = {
    let component = ReasonReact.statelessComponent("a-assets");
    let make = (children) => {
      ...component,
      render: (_self) => ReasonReact.createDomElement("a-assets", ~props=Js.Obj.empty(), children)
    };
  };
  module Scene = {
    [@bs.module "aframe-react"] external scene : ReasonReact.reactClass = "Scene";
    let make = (~vrMode, children) =>
      ReasonReact.wrapJsForReason(~reactClass=scene, ~props={"vr-mode-ui": vrMode}, children);
  };
  module Entity = {
    [@bs.module "aframe-react"] external entity : ReasonReact.reactClass = "Entity";
    let make =
        (
          ~primitive=?,
          ~id=?,
          ~ofType=?,
          ~height=?,
          ~width=?,
          ~rotation=?,
          ~radius=?,
          ~src=?,
          ~thetaLength=?,
          ~material=?,
          ~position=?,
          ~geometry=?,
          ~particleSystem=?,
          ~color=?,
          ~intensity=?,
          ~text=?,
          children
        ) =>
      ReasonReact.wrapJsForReason(
        ~reactClass=entity,
        ~props={
          "primitive": Js.Nullable.from_opt(primitive),
          "id": Js.Nullable.from_opt(id),
          "type": Js.Nullable.from_opt(ofType),
          "height": Js.Nullable.from_opt(height),
          "width": Js.Nullable.from_opt(width),
          "rotation": Js.Nullable.from_opt(rotation),
          "radius": Js.Nullable.from_opt(radius),
          "src": Js.Nullable.from_opt(src),
          "material": Js.Nullable.from_opt(material),
          "position": Js.Nullable.from_opt(position),
          "geometry": Js.Nullable.from_opt(geometry),
          "particle-system": Js.Nullable.from_opt(particleSystem),
          "intensity": Js.Nullable.from_opt(intensity),
          "color": Js.Nullable.from_opt(color),
          "text": Js.Nullable.from_opt(text),
          "theta-length": Js.Nullable.from_opt(thetaLength)
        },
        children
      );
  };
};

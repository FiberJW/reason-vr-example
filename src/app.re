open Bindings.AframeReact;

let component = ReasonReact.statelessComponent("App");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <Scene vrMode=true>
      <Assets>
        <img id="groundTexture" src="https://cdn.aframe.io/a-painter/images/floor.jpg" />
        <img id="skyTexture" src="https://cdn.aframe.io/a-painter/images/sky.jpg" />
      </Assets>
      <Entity
        primitive="a-plane"
        src="#groundTexture"
        rotation="-90 0 0"
        height="100"
        color="#7BC8A4"
        width="100"
      />
      <Entity primitive="a-light" ofType="point" intensity="2" position="2 4 4" />
      <Entity
        primitive="a-sky"
        height="2048"
        color="#db4c3f"
        radius="30"
        src="#skyTexture"
        thetaLength="90"
        width="2048"
      />
      <Entity
        text={"value": "Hello, A-Frame ReasonReact!", "align": "center"}
        position={"x": 0, "y": 2, "z": (-1)}
      />
      <Entity
        id="box"
        geometry={"primitive": "box"}
        material={"color": "#db4c3f", "opacity": 0.6}
        position={"x": 0, "y": 1, "z": (-3)}>
        <Entity
          geometry={"primitive": "box", "depth": 0.2, "height": 0.2, "width": 0.2}
          material={"color": "#db4c3f"}
        />
      </Entity>
      <Entity primitive="a-camera"> <Entity primitive="a-cursor" /> </Entity>
    </Scene>
};

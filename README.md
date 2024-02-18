<p align="center">
  <img src="https://github-production-user-asset-6210df.s3.amazonaws.com/102667323/305752836-1ad40d9f-0b78-4e26-924e-58db565f6c4e.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAVCODYLSA53PQK4ZA%2F20240218%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240218T230207Z&X-Amz-Expires=300&X-Amz-Signature=06f70bb92ff63069c5ee9d30bd19fe78b7e516b59aca09b4e986670b7ac6e90c&X-Amz-SignedHeaders=host&actor_id=102667323&key_id=0&repo_id=671661100" style=" width: 300px;" alt="Imagem logo" />
</p>

# GYROID

The purpose of this program is to generate a discrete representation (set of points) of the gyroid surface, which is an interesting minimal surface with applications in various areas of science and engineering, such as porous materials, photonic structures, and biomimetics. Visualizing these points can help understand the shape and structure of the gyroid, and the resulting 3D mesh from the Marching Cubes algorithm can be used in simulations, analyses of material properties, or as a basis for the design of new materials and structures.

Here's a version with improved Markdown structure:

---

The gyroid has an approximate definition given by the equation:

$$
f(x, y, z) = \sin(x) \cdot \cos(y) + \sin(y) \cdot \cos(z) + \sin(z) \cdot \cos(x) = 0
$$

where the domain is defined as:

$$
-\pi < x < \pi, \quad -\pi < y < \pi, \quad -\pi < z < \pi
$$

---

This C binary generates a point cloud [ points on the surface.]
```bash
gcc main.c -o gyroid -lm 
```

```bash
time ./gyroid > pc.json
```

## Marching Cubes

The included shell script uses sensible parameters to configure [splashsurf](https://crates.io/crates/splashsurf/0.9.1). The output is a obj file which can be imported in a program like [blender](https://www.blender.org/).

```bash
./reconstruct.sh
```
set (files
blur.compositor
blur.material
CreaseShading.compositor
CreaseShading.material
deferred.compositor
deferred_post.material
deferred_post_minilight.material
deferred_post.program
distortion.compositor
gazebo.material
GBuffer.material
grid.material
kitchen.material
lens_flare.compositor
Modulate.material
noise.compositor
oculus.material
perpixel.program
picker.material
point_light_shadow_demo.material
ShadowCaster.material
shadow_caster.program
shadow_caster_ignore_heightmap.program
ShadowCaster.program
spotlight_shadow_demo.material
ssao.compositor
ssao.material
SSAOPost.compositor
SSAOPost.material
StdQuad_vp.program
VPL.material
VPL.program
deform.material
WideCameraLensMap.compositor
)

install(FILES ${files} DESTINATION ${CMAKE_INSTALL_PREFIX}/share/gazebo-${GAZEBO_MAJOR_VERSION}/media/materials/scripts/)


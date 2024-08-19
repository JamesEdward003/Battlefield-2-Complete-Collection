
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_codriver_a_static.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_codriver_a_static.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still


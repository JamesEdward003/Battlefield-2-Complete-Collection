
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/land/apc_cobra/Animations/3p/3p_CobraPass2.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/land/apc_cobra/Animations/3p/3p_CobraPass2.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still
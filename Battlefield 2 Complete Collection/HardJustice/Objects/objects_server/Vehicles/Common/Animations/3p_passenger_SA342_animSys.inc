
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/animations/3p/3p_sa342trial_stand_a.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/animations/3p/3p_sa342trial_stand_a.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still


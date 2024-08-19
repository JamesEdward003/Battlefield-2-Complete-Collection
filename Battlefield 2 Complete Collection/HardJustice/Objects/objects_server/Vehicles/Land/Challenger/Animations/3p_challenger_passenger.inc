
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/land/Challenger/Animations/3p/3p_challenger_passenger.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/land/Challenger/Animations/3p/3p_challenger_passenger.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still
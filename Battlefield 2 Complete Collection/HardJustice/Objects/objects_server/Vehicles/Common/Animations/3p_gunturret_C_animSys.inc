
rem *** Animations ***
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_gunturret_c_static.baf
animationSystem.createAnimation Objects/Vehicles/Common/Animations/3p/3p_gunturret_c_die.baf

rem *** Bundles ***
animationSystem.createBundle still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_gunturret_c_static.baf

animationSystem.createBundle die
animationBundle.fadeInTime 0.4
animationBundle.isLooping 0
animationBundle.playForever 1
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Vehicles/Common/Animations/3p/3p_gunturret_c_die.baf

rem *** Triggers ***
animationSystem.createTrigger Trigger root
animationTrigger.addBundle still

animationSystem.createTrigger Trigger die
animationTrigger.addBundle die

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild die
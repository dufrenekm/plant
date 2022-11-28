
(cl:in-package :asdf)

(defsystem "plant_arm_project-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "PlantLocation" :depends-on ("_package_PlantLocation"))
    (:file "_package_PlantLocation" :depends-on ("_package"))
  ))